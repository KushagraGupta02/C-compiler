%{
#include <cstdio>
#include <iostream>
#include "ast.hpp"
#include "c.tab.hpp"

using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern YYSTYPE yylval;
int yyparse();
extern "C" FILE *yyin;
ASTNode* tree; 

void yyerror(const char *s);
%}

%union {
	ASTNodeList* list;
    char* str;
    ASTNode* node;
	int i;
}

%token <node>	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
%token <node>	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <node>	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <node>	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <node>	XOR_ASSIGN OR_ASSIGN
%token <node>	TYPEDEF_NAME ENUMERATION_CONSTANT

%token <node>	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token <node>	CONST RESTRICT VOLATILE
%token <node>	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token <node>	COMPLEX IMAGINARY 
%token <node>	STRUCT UNION ENUM ELLIPSIS

%token <node>	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token <node>	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%start start

%type <list> translation_unit expression init_declarator_list argument_expression_list 
%type <list> parameter_type_list parameter_list identifier_list block_item_list initializer_list
%type <i> pointer
%type <node>  start external_declaration
%type <node> function_definition declaration compound_statement declaration_specifiers declarator declaration_list
%type <node> static_assert_declaration storage_class_specifier type_specifier type_qualifier function_specifier
%type <node> alignment_specifier init_declarator initializer designation assignment_expression designator_list
%type <node> designator constant_expression specifier_qualifier_list abstract_declarator conditional_expression direct_abstract_declarator 
%type <node> logical_and_expression inclusive_or_expression exclusive_or_expression postfix_expression 
%type <node> struct_or_union_specifier 
%type <node> statement constant additive_expression shift_expression relational_expression logical_or_expression unary_expression
%type <node> atomic_type_specifier 
%type <node> equality_expression and_expression assignment_operator expression_statement iteration_statement jump_statement
%type <node> labeled_statement block_item selection_statement 
%type <node> type_qualifier_list  parameter_declaration  type_name
%type <node> struct_or_union struct_declaration_list struct_declaration struct_declarator_list struct_declarator enum_specifier enumerator_list enumerator enumeration_constant
%type <node> primary_expression string generic_selection generic_assoc_list generic_association cast_expression multiplicative_expression unary_operator direct_declarator 
%%

start
	: translation_unit {ASTNode* root = new ASTNode(ASTNode::TRANSLATION_UNIT, "START"); $$ = root; 
	for(int i = 0; i < $1->nodelist.size(); i++) {
			$$->addChild($1->nodelist[i]);
		}
	tree = $$;}
	; 

primary_expression
	: IDENTIFIER { $1 = new ASTNode(ASTNode::IDENTIFIER, yylval.str); $$= $1;}
	| constant { $$= $1;}
	| string { $$= $1;}
	| '(' expression ')' { $$= $2->nodelist[0];}
	| generic_selection { $$= $1;}
	;

constant
	: I_CONSTANT		{ $1 = new ASTNode(ASTNode::INT, yylval.str); $$= $1;}/* includes character_constant */
	| F_CONSTANT    { $1 = new ASTNode(ASTNode::FLOAT, yylval.str);$$= $1;}
	| ENUMERATION_CONSTANT	 { $1 = new ASTNode(ASTNode::ENUM, yylval.str); $$= $1;} /* after it has been defined as such */
	;

enumeration_constant		
	: IDENTIFIER { $1 = new ASTNode(ASTNode::TYPE, yylval.str), $$=$1; }
	;

string
	: STRING_LITERAL { $1 = new ASTNode(ASTNode::STRING, yylval.str);$$= $1;}
	| FUNC_NAME { $1 = new ASTNode(ASTNode::FUNC_NAME, yylval.str);$$= $1;}
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')'
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list ',' generic_association
	;

generic_association
	: type_name ':' assignment_expression
	| DEFAULT ':' assignment_expression
	;


postfix_expression
	: primary_expression { $$= $1; }
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP {$$ = new ASTNode(ASTNode::UNEXP, "POSTINCR", $1);} 
	| postfix_expression DEC_OP {$$ = new ASTNode(ASTNode::UNEXP, "POSTDECR", $1);} 
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	| ALIGNOF '(' type_name ')'
	;

unary_operator
	: '&' {$$ = new ASTNode(ASTNode::UNOP, "&");}
	| '*' {$$ = new ASTNode(ASTNode::UNOP, "*");}
	| '+' {$$ = new ASTNode(ASTNode::UNOP, "+");}
	| '-' {$$ = new ASTNode(ASTNode::UNOP, "-");}
	| '~' {$$ = new ASTNode(ASTNode::UNOP, "~");}
	| '!' {$$ = new ASTNode(ASTNode::UNOP, "!");}
	;
cast_expression
	: unary_expression {$$ = $1;}
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression {$$ = $1;}
	| multiplicative_expression '*' cast_expression {$$ = new ASTNode(ASTNode::BINEXP, "TIMES", $1, $3);} 
	| multiplicative_expression '/' cast_expression {$$ = new ASTNode(ASTNode::BINEXP, "DIV", $1, $3);} 
	| multiplicative_expression '%' cast_expression {$$ = new ASTNode(ASTNode::BINEXP, "MOD", $1, $3);} 
	;

additive_expression
	: multiplicative_expression {$$ = $1;}
	| additive_expression '+' multiplicative_expression {$$ = new ASTNode(ASTNode::BINEXP, "PLUS", $1, $3);} 
	| additive_expression '-' multiplicative_expression {$$ = new ASTNode(ASTNode::BINEXP, "MINUS", $1, $3);} 
	;

shift_expression
	: additive_expression {$$ = $1;}
	| shift_expression LEFT_OP additive_expression {$$ = new ASTNode(ASTNode::BINEXP, "<<", $1, $3);} 
	| shift_expression RIGHT_OP additive_expression {$$ = new ASTNode(ASTNode::BINEXP, ">>", $1, $3);} 
	;

relational_expression
	: shift_expression {$$ = $1;}
	| relational_expression '<' shift_expression {$$ = new ASTNode(ASTNode::BINEXP, "LT", $1, $3);} 
	| relational_expression '>' shift_expression {$$ = new ASTNode(ASTNode::BINEXP, "GT", $1, $3);} 
	| relational_expression LE_OP shift_expression {$$ = new ASTNode(ASTNode::BINEXP, "LE", $1, $3);} 
	| relational_expression GE_OP shift_expression {$$ = new ASTNode(ASTNode::BINEXP, "GE", $1, $3);} 
	;

equality_expression
	: relational_expression {$$ = $1;}
	| equality_expression EQ_OP relational_expression {$$ = new ASTNode(ASTNode::BINEXP, "EQ", $1, $3);} 
	| equality_expression NE_OP relational_expression {$$ = new ASTNode(ASTNode::BINEXP, "NEQ", $1, $3);} 
	;

and_expression
	: equality_expression {$$ = $1;}
	| and_expression '&' equality_expression {$$ = new ASTNode(ASTNode::BINEXP, "&", $1, $3);} 
	;

exclusive_or_expression
	: and_expression {$$ = $1;}
	| exclusive_or_expression '^' and_expression {$$ = new ASTNode(ASTNode::BINEXP, "XOR", $1, $3);} 
	;

inclusive_or_expression
	: exclusive_or_expression {$$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression {$$ = new ASTNode(ASTNode::BINEXP, "IOR", $1, $3);} 
	;

logical_and_expression
	: inclusive_or_expression {$$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression {$$ = new ASTNode(ASTNode::BINEXP, "AND", $1, $3);} 
	;

logical_or_expression
	: logical_and_expression {$$ = $1;}
	| logical_or_expression OR_OP logical_and_expression {$$ = new ASTNode(ASTNode::BINEXP, "OR", $1, $3);} 
	;

conditional_expression
	: logical_or_expression {$$ = $1;}
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression {$$ = $1;}
	| unary_expression assignment_operator assignment_expression {$$ = new ASTNode(ASTNode::ASSIGNEXP, "ASSIGN", $1, $2, $3);}
	;

assignment_operator
	: '=' 			{$$ = new ASTNode(ASTNode::ASSIGNEXP, "=");}
	| MUL_ASSIGN 	{$$ = new ASTNode(ASTNode::ASSIGNEXP, "*=");}
	| DIV_ASSIGN	{$$ = new ASTNode(ASTNode::ASSIGNEXP, "/=");}
	| MOD_ASSIGN	{$$ = new ASTNode(ASTNode::ASSIGNEXP, "%=");}
	| ADD_ASSIGN	{$$ = new ASTNode(ASTNode::ASSIGNEXP, "+=");}
	| SUB_ASSIGN	{$$ = new ASTNode(ASTNode::ASSIGNEXP, "-=");}
	| LEFT_ASSIGN	
	| RIGHT_ASSIGN	
	| AND_ASSIGN	{$$ = new ASTNode(ASTNode::ASSIGNEXP, "&=");}
	| XOR_ASSIGN	{$$ = new ASTNode(ASTNode::ASSIGNEXP, "^=");}
	| OR_ASSIGN		{$$ = new ASTNode(ASTNode::ASSIGNEXP, "|=");}
	;

expression
	: assignment_expression {$$ = new ASTNodeList($1);}
	| expression ',' assignment_expression {$1->nodelist.push_back($3); $$ = $1;}
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';' { std::cout << "declaration entered" <<std::endl;
		$$ = new ASTNode(ASTNode::VARDEC, "DECLARATIONS");
		std::cout << "declaration1" <<std::endl;
		$$->addChild($1);
		std::cout << "declaration2" <<std::endl;
		int i = 0;
		while (i < $2->nodelist.size()) {
			$$->addChild($2->nodelist[i]);
			i++;
			std::cout << "declaration" << i <<std::endl;
		}
		std::cout << "declaration exited" <<std::endl;
	}
	| static_assert_declaration
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier {$$ = $1;}
	| type_qualifier declaration_specifiers
	| type_qualifier {$$ = $1;}
	| function_specifier declaration_specifiers
	| function_specifier
	| alignment_specifier declaration_specifiers
	| alignment_specifier
	;

init_declarator_list
	: init_declarator {$$ = new ASTNodeList($1); std::cout << "init_declarator_list" <<std::endl;}
	| init_declarator_list ',' init_declarator {$1->nodelist.push_back($3); $$ = $1; std::cout << "init_declarator_list_decl" <<std::endl;}
	;

init_declarator
	: declarator '=' initializer {ASTNode* tmp = new ASTNode(ASTNode::ASSIGNEXP, "="); $$ = new ASTNode(ASTNode::ASSIGNEXP, "ASSIGN", $1, tmp, $3);}
	| declarator {$$ = $1;}
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN
	| STATIC
	| THREAD_LOCAL
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID 		{$$ = new ASTNode(ASTNode::TYPE, "VOID");}
	| CHAR 		{$$ = new ASTNode(ASTNode::TYPE, "CHAR");}
	| SHORT 	{$$ = new ASTNode(ASTNode::TYPE, "SHORT");}
	| INT 		{$$ = new ASTNode(ASTNode::TYPE, "INT");}
	| LONG 		{$$ = new ASTNode(ASTNode::TYPE, "LONG");}
	| FLOAT 	{$$ = new ASTNode(ASTNode::TYPE, "FLOAT");}
	| DOUBLE 	{$$ = new ASTNode(ASTNode::TYPE, "DOUBLE");}
	| SIGNED 	{$$ = new ASTNode(ASTNode::TYPE, "SIGNED");}
	| UNSIGNED 	{$$ = new ASTNode(ASTNode::TYPE, "UNSIGNED");}
	| BOOL 		{$$ = new ASTNode(ASTNode::TYPE, "BOOL");}
	| COMPLEX 	{$$ = new ASTNode(ASTNode::TYPE, "COMPLEX");}
	| IMAGINARY	  	/* non-mandated extension */
	| atomic_type_specifier
	| struct_or_union_specifier
	| enum_specifier
	| TYPEDEF_NAME		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list ';'
	| static_assert_declaration
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: ':' constant_expression
	| declarator ':' constant_expression
	| declarator
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: enumeration_constant '=' constant_expression
	| enumeration_constant
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')'
	;

type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	| ATOMIC
	;

function_specifier
	: INLINE
	| NORETURN
	;

alignment_specifier
	: ALIGNAS '(' type_name ')'
	| ALIGNAS '(' constant_expression ')'
	;

declarator
	: pointer direct_declarator {int np = $1;
	ASTNode* pointer = new ASTNode(ASTNode::POINTER, "POINTER");
	$$ = pointer;
	ASTNode* tmp1;
	for(int i = 0; i < np-1; i++) {
		tmp1 = new ASTNode(ASTNode::POINTER, "POINTER");
		pointer->addChild(tmp1);
		pointer = tmp1;
	}
	pointer -> addChild($2);
	}
	| direct_declarator {$$ = $1;}
	;

direct_declarator
	: IDENTIFIER {$$ = new ASTNode(ASTNode::IDENTIFIER, yylval.str); std::cout << yylval.str << endl;}
	| '(' declarator ')'
	| direct_declarator '[' ']' {$$ = new ASTNode(ASTNode::ARRAY, "ARRAY"); $$->addChild($1); }
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'

	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']' {$$ = new ASTNode(ASTNode::ARRAY, "ARRAY", $1, $3);
	}

	| direct_declarator '(' parameter_type_list ')' {$$ = new ASTNode(ASTNode::FUNCDEF, "FUNCDEF"); 
	$$->addChild($1); 
	for(int i = 0; i < $3->nodelist.size(); i++) {
			$$->addChild($3->nodelist[i]);
		}
	}
	| direct_declarator '(' ')' {$$ = new ASTNode(ASTNode::FUNCDEF, "FUNCDEF"); 
	$$->addChild($1); 
	}
	| direct_declarator '(' identifier_list ')'
	;

pointer
	: '*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer {$$ = $2 + 1;}
	| '*' {$$ = 1;}
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS 
	| parameter_list {$$ = $1;}
	;

parameter_list
	: parameter_declaration {$$ = new ASTNodeList($1);}
	| parameter_list ',' parameter_declaration {$1->nodelist.push_back($3); $$ = $1;}
	;

parameter_declaration
	: declaration_specifiers IDENTIFIER {$$ = new ASTNode(ASTNode::PARAM, "PARAM"); $$->addChild($1); ASTNode* id = new ASTNode(ASTNode::IDENTIFIER, yylval.str); $$->addChild(id);}
	| declaration_specifiers pointer IDENTIFIER {$$ = new ASTNode(ASTNode::PARAM, "PARAM"); 
	int ptrs = $2;
	for(int i =0; i<ptrs; i++){
		$1->val = $1->val + "*";
	}
	$$->addChild($1); 
	ASTNode* id = new ASTNode(ASTNode::IDENTIFIER, yylval.str); $$->addChild(id);}
	| declaration_specifiers abstract_declarator 
	| declaration_specifiers
	| declaration_specifiers IDENTIFIER '[' ']' {$$ = new ASTNode(ASTNode::PARAM, "PARAM", $1); ASTNode* id = new ASTNode(ASTNode::IDENTIFIER, yylval.str); ASTNode* arr = new ASTNode(ASTNode::ARRAY, "ARRAY", id); $$->addChild(arr);}
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' '*' ']'
	| '[' STATIC type_qualifier_list assignment_expression ']'
	| '[' STATIC assignment_expression ']'
	| '[' type_qualifier_list STATIC assignment_expression ']'
	| '[' type_qualifier_list assignment_expression ']'
	| '[' type_qualifier_list ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' '*' ']'
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: '{' initializer_list '}'{	
		$$ = new ASTNode(ASTNode::LIST, "LIST");	
		for(int i = 0; i < $2->nodelist.size(); i++) {
			$$->addChild($2->nodelist[i]);
		}
		}
	| '{' initializer_list ',' '}'
	| assignment_expression {$$ = $1;}
	;

initializer_list
	: designation initializer
	| initializer {$$ = new ASTNodeList($1);}
	| initializer_list ',' designation initializer
	| initializer_list ',' initializer {$1->nodelist.push_back($3); $$ = $1;}
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'
	;

statement
	: labeled_statement {$$ = $1;}
	| compound_statement {$$ = $1;}
	| expression_statement {$$ = $1;}
	| selection_statement {$$ = $1;}
	| iteration_statement {$$ = $1;}
	| jump_statement {$$ = $1;}
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}' {$$ = new ASTNode(ASTNode::BLOCK, "STBLOCK"); std::cout << "BLOCK" << endl;}
	| '{'  block_item_list '}' {$$ = new ASTNode(ASTNode::BLOCK, "STBLOCK");
		for(int i = 0; i < $2->nodelist.size(); i++) {
			$$->addChild($2->nodelist[i]);
		}
	}
	;

block_item_list
	: block_item {$$ = new ASTNodeList($1);}
	| block_item_list block_item {$1->nodelist.push_back($2); $$ = $1;}
	;

block_item
	: declaration {$$ = $1;}
	| statement {$$ = $1;}
	;

expression_statement
	: ';' 
	| expression ';' {$$ = new ASTNode(ASTNode::EXPRESSION, "EXPBLOCK");
		for(int i = 0; i < $1->nodelist.size(); i++) {
			$$->addChild($1->nodelist[i]);
		}
	}
	;

selection_statement
	: IF '(' expression ')' statement ELSE statement {$$ = new ASTNode(ASTNode::ITE, "ITE"); 
		$$->addChild($3->nodelist[0]);
		$$->addChild($5); $$->addChild($7);
	}
	| IF '(' expression ')' statement {$$ = new ASTNode(ASTNode::ITE, "ITE"); 
		$$->addChild($3->nodelist[0]); $$->addChild($5);
	}
	| SWITCH '(' expression ')' statement 
	;

iteration_statement
	: WHILE '(' expression ')' statement { $$ = new ASTNode(ASTNode::WHILE, "WHILE");
		$$->addChild($3->nodelist[0]);
		$$->addChild($5); }
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	{ $$ = new ASTNode(ASTNode::FOR, "FOR");
		$$->addChild($3);
		$$->addChild($4); 
		$$->addChild($5->nodelist[0]);
		$$->addChild($7); 
		}
	| FOR '(' declaration expression_statement ')' statement
	| FOR '(' declaration expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';' {ASTNode* child = new ASTNode(ASTNode::IDENTIFIER, yylval.str); $$ = new ASTNode(ASTNode::GOTO, "GOTO", child); }
	| CONTINUE ';'
	| BREAK ';' 
	| RETURN ';' {}
	| RETURN expression ';' {$$ = new ASTNode(ASTNode::RETURN, "RETURN",$2->nodelist[0]);}
	;

translation_unit
	: external_declaration {$$ = new ASTNodeList($1);}
	| translation_unit external_declaration {$1->nodelist.push_back($2); $$ = $1;}
	;

external_declaration
	: function_definition {$$ = $1;}
	| declaration {$$ = $1;}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {$$ = new ASTNode(ASTNode::FUNC_NAME, "FUNCTION"); $$->addChild($1); $$->addChild($2); $$->addChild($3); $$->addChild($4);}
	| declaration_specifiers declarator compound_statement {$$ = new ASTNode(ASTNode::FUNC_NAME, "FUNCTION"); $$->addChild($1); $$->addChild($2); $$->addChild($3); }
	;

declaration_list
	: declaration 
	| declaration_list declaration
	;

%%
#include <stdio.h>

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}