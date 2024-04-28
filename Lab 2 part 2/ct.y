%{
#include <cstdio>
#include <iostream>
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
    char* str;
    ASTNode* node;
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

%start translation_unit 

%type <node> translation_unit external_declaration
%type <node> function_definition declaration compound_statement declaration_specifiers declarator declaration_list
%type <node> init_declarator_list static_assert_declaration storage_class_specifier type_specifier type_qualifier function_specifier
%type <node> alignment_specifier init_declarator initializer designation assignment_expression designator_list
%type <node> initializer_list designator constant_expression specifier_qualifier_list abstract_declarator pointer conditional_expression direct_abstract_declarator 
%type <node> logical_and_expression inclusive_or_expression exclusive_or_expression postfix_expression argument_expression_list
%type <node> struct_or_union_specifier 
%type <node> expression statement constant additive_expression shift_expression relational_expression logical_or_expression unary_expression
%type <node> atomic_type_specifier 
%type <node> equality_expression and_expression assignment_operator expression_statement iteration_statement jump_statement
%type <node> labeled_statement block_item selection_statement block_item_list
%type <node> type_qualifier_list parameter_type_list parameter_list parameter_declaration identifier_list type_name
%type <node> struct_or_union struct_declaration_list struct_declaration struct_declarator_list struct_declarator enum_specifier enumerator_list enumerator enumeration_constant
%type <node> primary_expression string generic_selection generic_assoc_list generic_association cast_expression multiplicative_expression unary_operator direct_declarator 
%%

primary_expression
	: IDENTIFIER { $1 = new ASTNode(ASTNode::IDENTIFIER, yylval.str); $$= $1;}
	| constant { $$= $1;}
	| string { $$= $1;}
	| '(' expression ')' { $$= $2;}
	| generic_selection { $$= $1;}
	;

constant
	: I_CONSTANT		{ $1 = new ASTNode(ASTNode::INT, yylval.str); $$= $1;}/* includes character_constant */
	| F_CONSTANT    { $1 = new ASTNode(ASTNode::FLOAT, yylval.str);$$= $1;}
	| ENUMERATION_CONSTANT	 { $1 = new ASTNode(ASTNode::ENUM, yylval.str); $$= $1;} /* after it has been defined as such */
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER { $1 = new ASTNode(ASTNode::TYPE, yylval.str), $$=$1; }
	;

string
	: STRING_LITERAL { $1 = new ASTNode(ASTNode::STRING, yylval.str);$$= $1;}
	| FUNC_NAME { $1 = new ASTNode(ASTNode::FUNC_NAME, yylval.str);$$= $1;}
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')'  { $1 = new ASTNode(yylval.str); $$= new ASTNode("generic_selection", $1, $3, $5); }
	;

generic_assoc_list
	: generic_association { $$= new ASTNode("generic_assoc_list", $1); }
	| generic_assoc_list ',' generic_association { $$= new ASTNode("generic_assoc_list", $1, $3); }
	;

generic_association
	: type_name ':' assignment_expression { $$= new ASTNode("generic_association", $1, $3); }
	| DEFAULT ':' assignment_expression { $1 = new ASTNode(yylval.str); $$= new ASTNode("generic_association_default", $1, $3); }
	;

postfix_expression
	: primary_expression { $$= new ASTNode("postfix_expression_primary", $1); }
	| postfix_expression '[' expression ']' { $$= new ASTNode("postfix_expression_exp", $1, $3); }
	| postfix_expression '(' ')' { $$= new ASTNode("postfix_expression", $1); }
	| postfix_expression '(' argument_expression_list ')' { $$= new ASTNode("postfix_expression_list", $1, $3); }
	| postfix_expression '.' IDENTIFIER { $3 = new ASTNode(yylval.str); $$= new ASTNode("postfix_expression_ident", $1, $3); }
	| postfix_expression PTR_OP IDENTIFIER { $2 = new ASTNode(yylval.str); $3 = new ASTNode(yylval.str); $$= new ASTNode("postfix_expression_ptr", $1, $2, $3); }
	| postfix_expression INC_OP { $2 = new ASTNode(yylval.str); $$= new ASTNode("postfix_expression_exp_inc", $1, $2); }
	| postfix_expression DEC_OP { $2 = new ASTNode(yylval.str); $$= new ASTNode("postfix_expression_exp_dec", $1, $2); }
	| '(' type_name ')' '{' initializer_list '}' { $$= new ASTNode("postfix_expression_init_brace", $2, $5); }
	| '(' type_name ')' '{' initializer_list ',' '}'  { $$= new ASTNode("postfix_expression_init_comma", $2, $5); }
	;

argument_expression_list
	: assignment_expression  { $$= new ASTNode("argument_expression_list", $1); }
	| argument_expression_list ',' assignment_expression   { $$= new ASTNode("argument_expression_list", $1, $3); }
	;

unary_expression
	: postfix_expression { $$=  $1; }
	| INC_OP unary_expression { $1 = new ASTNode(yylval.str); $$= new ASTNode("unary_expression_inc", $1); }
	| DEC_OP unary_expression { $1 = new ASTNode(yylval.str); $$= new ASTNode("unary_expression_dec", $1); }
	| unary_operator cast_expression { $$= new ASTNode("unary_expression", $1, $2); }
	| SIZEOF unary_expression { $1 = new ASTNode(yylval.str); $$= new ASTNode("unary_expression_size", $1, $2); }
	| SIZEOF '(' type_name ')' { $1 = new ASTNode(yylval.str); $$= new ASTNode("unary_expression_size_type", $1, $3); }
	| ALIGNOF '(' type_name ')'{ $1 = new ASTNode(yylval.str); $$= new ASTNode("unary_expression_size_align", $1, $3); }
	; 

unary_operator
	: '&' { $$= new ASTNode("&"); }
	| '*' { $$= new ASTNode("*"); }
	| '+' { $$= new ASTNode("+"); }
	| '-' { $$= new ASTNode("-"); }
	| '~' { $$= new ASTNode("~"); }
	| '!' { $$= new ASTNode("!"); }
	;

cast_expression
	: unary_expression {$$ =$1;}
	| '(' type_name ')' cast_expression {$$ = new ASTNode("cast_expression", $2, $4);}
	;

multiplicative_expression
	: cast_expression {$$ = $1;}
	| multiplicative_expression '*' cast_expression {$$ = new ASTNode("multiplicative_expression_mult", $1, new ASTNode("*"), $3);}
	| multiplicative_expression '/' cast_expression {$$ = new ASTNode("multiplicative_expression_div", $1, new ASTNode("/"), $3);}
	| multiplicative_expression '%' cast_expression {$$ = new ASTNode("multiplicative_expression_mod", $1, new ASTNode("%"), $3);}
	; 

additive_expression
	: multiplicative_expression {$$ = $1;}
	| additive_expression '+' multiplicative_expression  {$$ = new ASTNode("additive_expression_add", $1, new ASTNode("+"), $3);}
	| additive_expression '-' multiplicative_expression {$$ = new ASTNode("additive_expression_sub", $1, new ASTNode("-"), $3);}
	;

shift_expression
	: additive_expression {$$ = new ASTNode("shift_expression", $1);}
	| shift_expression LEFT_OP additive_expression {$$ = new ASTNode("shift_expression", $1,  new ASTNode("<<"), $3);}
	| shift_expression RIGHT_OP additive_expression {$$ = new ASTNode("shift_expression", $1, new ASTNode(">>") ,$3);}
	;

relational_expression
	: shift_expression {$$ = $1;}
	| relational_expression '<' shift_expression {$$ = new ASTNode("lesser_expression", $1, new ASTNode("<"), $3);}
	| relational_expression '>' shift_expression {$$ = new ASTNode("greater_expression", $1, new ASTNode(">"), $3);}
	| relational_expression LE_OP shift_expression {$$ = new ASTNode("leq_expression", $1,  new ASTNode("<="), $3);}
	| relational_expression GE_OP shift_expression {$$ = new ASTNode("geq_expression", $1,  new ASTNode(">="), $3);}
	;

equality_expression
	: relational_expression {$$ =  $1;}
	| equality_expression EQ_OP relational_expression {$$ = new ASTNode("equality_expression", $1,  new ASTNode("=="), $3);}
	| equality_expression NE_OP relational_expression {$$ = new ASTNode("no_equality_expression", $1,  new ASTNode("!="), $3);}
	;

and_expression
	: equality_expression {$$ =$1;}
	| and_expression '&' equality_expression {$$ = new ASTNode("and_expression", $1,new ASTNode("&"), $3);}
	;

exclusive_or_expression
	: and_expression { $$=  $1; }
	| exclusive_or_expression '^' and_expression  { $$= new ASTNode("exclusive_or_expression", $1, new ASTNode("^"),$3); }
	;

inclusive_or_expression
	: exclusive_or_expression { $$=  $1; }
	| inclusive_or_expression '|' exclusive_or_expression { $$= new ASTNode("inclusive_or_expression", $1, new ASTNode("|"), $3); }
	;

logical_and_expression
	: inclusive_or_expression { $$= $1; }
	| logical_and_expression AND_OP inclusive_or_expression { $2= new ASTNode(yylval.str); $$= new ASTNode("logical_and_expression", $1,  new ASTNode("&&"), $3); }
	;

logical_or_expression
	: logical_and_expression { $$= $1; }
	| logical_or_expression OR_OP logical_and_expression  {  $$= new ASTNode("logical_or_expression", $1, new ASTNode("||"), $3); }
	;

conditional_expression
	: logical_or_expression { $$= $1; }
	| logical_or_expression '?' expression ':' conditional_expression { $$= new ASTNode("conditional_expression", $1, $3, $5); }
	;

assignment_expression
	: conditional_expression { $$= new ASTNode("assignment_expression", $1); }
	| unary_expression assignment_operator assignment_expression  { $$= new ASTNode("assignment_expression", $1, $2, $3); }
	;

assignment_operator
	: '='  { $$= new ASTNode("="); }
	| MUL_ASSIGN { $1 = new ASTNode(yylval.str);$$= $1;}
	| DIV_ASSIGN { $1 = new ASTNode(yylval.str);$$= $1;}
	| MOD_ASSIGN { $1 = new ASTNode(yylval.str);$$= $1;}
	| ADD_ASSIGN { $1 = new ASTNode(yylval.str);$$= $1;}
	| SUB_ASSIGN { $1 = new ASTNode(yylval.str);$$= $1;}
	| LEFT_ASSIGN { $1 = new ASTNode(yylval.str);$$= $1;}
	| RIGHT_ASSIGN { $1 = new ASTNode(yylval.str);$$= $1;}
	| AND_ASSIGN { $1 = new ASTNode(yylval.str);$$= $1;}
	| XOR_ASSIGN { $1 = new ASTNode(yylval.str);$$= $1;}
	| OR_ASSIGN { $1 = new ASTNode(yylval.str);$$= $1;}
	;

expression
	: assignment_expression  { $$= new ASTNode("expression", $1); }
	| expression ',' assignment_expression { $$= new ASTNode("expression", $1, $3); }
	;

constant_expression 
	: conditional_expression	/* with constraints */ { $$= new ASTNode("Constant_expression", $1); }
	;

declaration 
	: declaration_specifiers ';' { $$= new ASTNode("Decl", $1); }
	| declaration_specifiers init_declarator_list ';' { $$= new ASTNode("Decl", $1, $2); }
	| static_assert_declaration { $$= new ASTNode("Decl", $1); }
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers { $$= new ASTNode("Decl_specifiers", $1, $2); }
	| storage_class_specifier { $$= $1; }
	| type_specifier declaration_specifiers { $$= new ASTNode("Decl_specifiers", $1, $2); }
	| type_specifier{ $$= new ASTNode("Decl_specifiers", $1); }
	| type_qualifier declaration_specifiers { $$= new ASTNode("Decl_specifiers", $1, $2); }
	| type_qualifier { $$= new ASTNode("Decl_specifiers", $1); }
	| function_specifier declaration_specifiers { $$= new ASTNode("Decl_specifiers", $1, $2); }
	| function_specifier { $$= new ASTNode("Decl_specifiers", $1); }
	| alignment_specifier declaration_specifiers { $$= new ASTNode("Decl_specifiers", $1, $2); }
	| alignment_specifier { $$= new ASTNode("Decl_specifiers", $1); }
	;

init_declarator_list
	: init_declarator  { $$= new ASTNode("init_dec_list", $1); }
	| init_declarator_list ',' init_declarator  { $$= new ASTNode("init_dec_list", $1, $3); }
	;

init_declarator 
	: declarator '=' initializer { $$= new ASTNode("init_dec", $1, $3); }
	| declarator { $$= new ASTNode("init_dec", $1); }
	;

storage_class_specifier
	: TYPEDEF	{ $1 = new ASTNode(yylval.str);$$= $1;} /* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN { $1 = new ASTNode(yylval.str);$$= $1;}
	| STATIC { $1 = new ASTNode(yylval.str);$$= $1;}
	| THREAD_LOCAL { $1 = new ASTNode(yylval.str);$$= $1;}
	| AUTO { $1 = new ASTNode(yylval.str);$$= $1;}
	| REGISTER { $1 = new ASTNode(yylval.str);$$= $1;}
	;

type_specifier
	: VOID { $1 = new ASTNode(yylval.str);$$= $1;}
	| CHAR { $1 = new ASTNode(yylval.str);$$= $1;}
	| SHORT { $1 = new ASTNode(yylval.str);$$= $1;}
	| INT { $1 = new ASTNode(yylval.str);$$= $1;}
	| LONG { $1 = new ASTNode(yylval.str);$$= $1;}
	| FLOAT { $1 = new ASTNode(yylval.str);$$= $1;}
	| DOUBLE { $1 = new ASTNode(yylval.str);$$= $1;}
	| SIGNED { $1 = new ASTNode(yylval.str);$$= $1;}
	| UNSIGNED { $1 = new ASTNode(yylval.str);$$= $1;}
	| BOOL { $1 = new ASTNode(yylval.str);$$= $1;}
	| COMPLEX { $1 = new ASTNode(yylval.str);$$= $1;}
	| IMAGINARY	  { $1 = new ASTNode(yylval.str);$$= $1;}	/* non-mandated extension */
	| atomic_type_specifier { $$= $1; }
	| struct_or_union_specifier { $$= $1; }
	| enum_specifier { $$= $1; }
	| TYPEDEF_NAME	{ $1 = new ASTNode(yylval.str);$$= $1;}	/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}' { $$= new ASTNode("struct_or_union_specifier", $1, $3); }
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}' { $2 = new ASTNode(yylval.str); $$= new ASTNode("struct_or_union_specifier", $1, $2, $4); }
	| struct_or_union IDENTIFIER { $2 = new ASTNode(yylval.str); $$= new ASTNode("struct_or_union_specifier", $1, $2); }
	;

struct_or_union
	: STRUCT { $1 = new ASTNode(yylval.str); $$= $1; }
	| UNION {$1 = new ASTNode(yylval.str); $$ = $1; }
	;

struct_declaration_list
	: struct_declaration { $$ = new ASTNode("struct_declaration_list", $1); }
	| struct_declaration_list struct_declaration { $$ = new ASTNode("struct_declaration_list", $1, $2); }
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */ { $$ = new ASTNode("struct_declaration", $1); }
	| specifier_qualifier_list struct_declarator_list ';' { $$ = new ASTNode("struct_declaration", $1, $2); }
	| static_assert_declaration { $$ = new ASTNode("struct_declaration", $1); }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list { $$ = new ASTNode("specifier_qualifier_list", $1, $2); }
	| type_specifier { $$ = new ASTNode("specifier_qualifier_list", $1); }
	| type_qualifier specifier_qualifier_list { $$ = new ASTNode("specifier_qualifier_list", $1, $2); }
	| type_qualifier { $$ = new ASTNode("specifier_qualifier_list", $1); }
	;

struct_declarator_list
	: struct_declarator { $$ = new ASTNode("struct_declarator_list", $1); }
	| struct_declarator_list ',' struct_declarator { $$ = new ASTNode("struct_declarator_list", $1, $3); }
	;

struct_declarator
	: ':' constant_expression { $$ = new ASTNode("struct_declarator", $2); }
	| declarator ':' constant_expression { $$ = new ASTNode("struct_declarator", $1, $3); }
	| declarator { $$ = new ASTNode("struct_declarator", $1); }
	;

enum_specifier
	: ENUM '{' enumerator_list '}'  { $$ = new ASTNode("enum_specifier", $3); }
	| ENUM '{' enumerator_list ',' '}' { $$ = new ASTNode("enum_specifier", $3); }
	| ENUM IDENTIFIER '{' enumerator_list '}'  { $2 = new ASTNode(yylval.str); $$ = new ASTNode("enum_specifier", $2, $4); }
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'  { $2 = new ASTNode(yylval.str); $$ = new ASTNode("enum_specifier", $2, $4); }
	| ENUM IDENTIFIER  { $2 = new ASTNode(yylval.str); $$ = new ASTNode("enum_specifier", $2); }
	;

enumerator_list
	: enumerator  { $$ = new ASTNode("enumerator_list", $1); }
	| enumerator_list ',' enumerator { $$ = new ASTNode("enumerator_list", $1, $3); }
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant '=' constant_expression { $$ = new ASTNode("enumerator", $1, $3); }
	| enumeration_constant { $$ = new ASTNode("enumerator", $1); }
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')'  { $$ = new ASTNode("atomic_type_specifier", $1, $3); }
	;

type_qualifier
	: CONST { $1 = new ASTNode(yylval.str); $$= $1; }
	| RESTRICT { $1 = new ASTNode(yylval.str); $$= $1; }
	| VOLATILE { $1 = new ASTNode(yylval.str); $$= $1; }
	| ATOMIC { $1 = new ASTNode(yylval.str); $$= $1; }
	;

function_specifier
	: INLINE { $1 = new ASTNode(yylval.str); $$= $1; }
	| NORETURN { $1 = new ASTNode(yylval.str); $$= $1; }
	;

alignment_specifier
	: ALIGNAS '(' type_name ')'  { $1 = new ASTNode(yylval.str); $$ = new ASTNode("alignment_specifier", $1, $3); }
	| ALIGNAS '(' constant_expression ')' { $1 = new ASTNode(yylval.str); $$ = new ASTNode("alignment_specifier", $1, $3); }
	;

declarator 
	: pointer direct_declarator   { $$ = new ASTNode("declarator", $1, $2); }
	| direct_declarator { $$ = new ASTNode("declarator", $1); }
	;

direct_declarator
	: IDENTIFIER  { $1 = new ASTNode(yylval.str); $$ = new ASTNode("direct_declarator_identifier",  new ASTNode("Identifer",$1)); }
	| '(' declarator ')' { $$ = new ASTNode("direct_declarator", $2); }
	| direct_declarator '[' ']'  { $$ = $1; }
	| direct_declarator '[' '*' ']'  { $$ =  $1; }
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']' { $3 = new ASTNode(yylval.str); $$ = new ASTNode("direct_declarator_static", $1, $3, $4, $5); }
	| direct_declarator '[' STATIC assignment_expression ']' { $3 = new ASTNode(yylval.str); $$ = new ASTNode("direct_declarator_static", $1, $3, $4); }
	| direct_declarator '[' type_qualifier_list '*' ']' { $$ = new ASTNode("direct_declarator", $1, $3); }
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']' { $4 = new ASTNode(yylval.str); $$ = new ASTNode("direct_declarator", $1, $3, $4, $5); }
	| direct_declarator '[' type_qualifier_list assignment_expression ']' { $$ = new ASTNode("direct_declarator", $1, $3, $4); }
	| direct_declarator '[' type_qualifier_list ']' { $$ = new ASTNode("direct_declarator", $1, $3); }
	| direct_declarator '[' assignment_expression ']' { $$ = new ASTNode("direct_declarator", $1, $3); }
	| direct_declarator '(' parameter_type_list ')'{ $$ = new ASTNode("direct_declarator", $1, $3); }
	| direct_declarator '(' ')'  { $$ = new ASTNode("direct_declarator", $1); }
	| direct_declarator '(' identifier_list ')' { $$ = new ASTNode("direct_declarator", $1, $3); }
	;

pointer
	: '*' type_qualifier_list pointer { $$ = new ASTNode("pointer", $2, $3); }
	| '*' type_qualifier_list { $$ = new ASTNode("pointer_list", $2); }
	| '*' pointer { $$ = new ASTNode("pointer", $2); }
	| '*' {  $$= new ASTNode("pointer");}
	;

type_qualifier_list
	: type_qualifier { $$= new ASTNode("type_qualifier_list", $1); }
	| type_qualifier_list type_qualifier { $$= new ASTNode("type_qualifier_list", $1, $2); }
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS { $3 = new ASTNode(yylval.str); $$= new ASTNode("parameter_type_list", $1, $3); }
	| parameter_list { $$ = new ASTNode("parameter_type_list", $1); }
	;

parameter_list
	: parameter_declaration { $$= new ASTNode("parameter_list", $1); }
	| parameter_list ',' parameter_declaration { $$= new ASTNode("parameter_list", $1, $3); }
	;

parameter_declaration
	: declaration_specifiers declarator { $$= new ASTNode("parameter_declaration", $1, $2); }
	| declaration_specifiers abstract_declarator { $$= new ASTNode("parameter_declaration", $1, $2); }
	| declaration_specifiers { $$= new ASTNode("parameter_declaration", $1); }
	;

identifier_list
	: IDENTIFIER { $1 = new ASTNode(yylval.str); $$= new ASTNode("identifier_list", $1); }
	| identifier_list ',' IDENTIFIER { $3 = new ASTNode(yylval.str); $$= new ASTNode("identifier_list", $1, $3); }
	;

type_name
	: specifier_qualifier_list abstract_declarator { $$= new ASTNode("type_name", $1, $2); }
	| specifier_qualifier_list { $$= new ASTNode("type_name", $1); }
	;

abstract_declarator
	: pointer direct_abstract_declarator { $$= new ASTNode("abstract_declarator", $1, $2); }
	| pointer { $$= new ASTNode("abstract_declarator", $1); }
	| direct_abstract_declarator { $$= new ASTNode("abstract_declarator", $1); }
	;

direct_abstract_declarator
	: '(' abstract_declarator ')' { $$= new ASTNode("direct_abstract_declarator", $2); }
	| '[' ']' {}
	| '[' '*' ']' {}
	| '[' STATIC type_qualifier_list assignment_expression ']' { $2 = new ASTNode(yylval.str); $$= new ASTNode("direct_abstract_declarator", $2, $3); }
	| '[' STATIC assignment_expression ']'  { $2 = new ASTNode(yylval.str); $$= new ASTNode("direct_abstract_declarator", $2, $3); }
	| '[' type_qualifier_list STATIC assignment_expression ']'  { $3 = new ASTNode(yylval.str); $$= new ASTNode("direct_abstract_declarator", $2, $3, $4); }
	| '[' type_qualifier_list assignment_expression ']'  { $$= new ASTNode("direct_abstract_declarator", $2, $3); }
	| '[' type_qualifier_list ']'  { $$= new ASTNode("direct_abstract_declarator", $2); }
	| '[' assignment_expression ']'  { $$= new ASTNode("direct_abstract_declarator", $2); }
	| direct_abstract_declarator '[' ']'  { $$= new ASTNode("direct_abstract_declarator", $1); }
	| direct_abstract_declarator '[' '*' ']'  { $$= new ASTNode("direct_abstract_declarator", $1); }
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'  { $3 = new ASTNode(yylval.str); $$= new ASTNode("direct_abstract_declarator", $1, $3, $4, $5); }
	| direct_abstract_declarator '[' STATIC assignment_expression ']'  { $3 = new ASTNode(yylval.str); $$= new ASTNode("direct_abstract_declarator", $1, $3, $4); }
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'  { $$= new ASTNode("direct_abstract_declarator", $1, $3, $4); }
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'  { $4 = new ASTNode(yylval.str); $$= new ASTNode("direct_abstract_declarator", $1, $3, $4, $5); }
	| direct_abstract_declarator '[' type_qualifier_list ']' { $$= new ASTNode("direct_abstract_declarator", $1, $3); }
	| direct_abstract_declarator '[' assignment_expression ']' { $$= new ASTNode("direct_abstract_declarator", $1, $3); }
	| '(' ')' {}
	| '(' parameter_type_list ')' { $$= new ASTNode("direct_abstract_declarator", $2); }
	| direct_abstract_declarator '(' ')' { $$= new ASTNode("direct_abstract_declarator", $1); }
	| direct_abstract_declarator '(' parameter_type_list ')' { $$= new ASTNode("direct_abstract_declarator", $1, $3); }
	;

initializer
	: '{' initializer_list '}' { $$= new ASTNode("init", $2); }
	| '{' initializer_list ',' '}' { $$= new ASTNode("init", $2); }
	| assignment_expression { $$= new ASTNode("ass_exp", $1); }
	;

initializer_list
	: designation initializer { $$= new ASTNode("init_list", $1, $2); }
	| initializer  { $$= new ASTNode("init_list", $1); }
	| initializer_list ',' designation initializer { $$= new ASTNode("init_list", $1, $3); }
	| initializer_list ',' initializer { $$= new ASTNode("init_list", $1, $3); }
	;

designation
	: designator_list '=' { $$= new ASTNode("designation", $1); }
	;

designator_list
	: designator  { $$= new ASTNode("desig_list", $1); }
	| designator_list designator { $$= new ASTNode("desig_list", $1, $2); }
	;

designator
	: '[' constant_expression ']'  { $$= new ASTNode("designator", $2); }
	| '.' IDENTIFIER    { $2 = new ASTNode(yylval.str); $$= new ASTNode("designator", $2); }
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';' { $1 = new ASTNode(yylval.str); $5 = new ASTNode(yylval.str); $$= new ASTNode("static_assert_declaration", $1, $3, $5);}
	;

statement
	: labeled_statement {$$ = $1;}
	| compound_statement {$$ =  $1;}
	| expression_statement {$$ = $1;}
	| selection_statement {$$ = $1;}
	| iteration_statement {$$ = $1;}
	| jump_statement {$$ = $1;}
	;

labeled_statement
	: IDENTIFIER ':' statement {$1 = new ASTNode(yylval.str); $$ = new ASTNode("labeled_statement", $1, $3);}
	| CASE constant_expression ':' statement {$1 = new ASTNode(yylval.str); $$ = new ASTNode("labeled_statement", $2, $4);}
	| DEFAULT ':' statement {$1 = new ASTNode(yylval.str); $$ = new ASTNode("labeled_statement", $3);}
	;

compound_statement
	: '{' '}' {$$ = nullptr;}
	| '{'  block_item_list '}' {$$ = new ASTNode("compound_statement", $2);}
	;

block_item_list
	: block_item {$$ = new ASTNode("block_item_list", $1);}
	| block_item_list block_item {$$ = new ASTNode("block_item_list", $1, $2);}
	;

block_item
	: declaration {$$ = new ASTNode("block_item", $1);}
	| statement {$$ = new ASTNode("block_item", $1);}
	;

expression_statement
	: ';' {$$ = nullptr;}
	| expression ';' {$$ = new ASTNode("expression_statement", $1);}
	;

selection_statement
	: IF '(' expression ')' statement ELSE statement {$$ = new ASTNode("ITE", $3, $5, $7);}
	| IF '(' expression ')' statement {$$ = new ASTNode("IT", $3, $5);}
	| SWITCH '(' expression ')' statement {$$ = new ASTNode("SWITCH", $3, $5);}
	;

iteration_statement
	: WHILE '(' expression ')' statement {$1 = new ASTNode(yylval.str); $$ = new ASTNode("iteration_statement", $1, $3, $5);}
	| DO statement WHILE '(' expression ')' ';' {$1 = new ASTNode(yylval.str); $2 = new ASTNode(yylval.str); $$ = new ASTNode("iteration_statement", $1, $2, $3, $5);}
	| FOR '(' expression_statement expression_statement ')' statement {$1 = new ASTNode(yylval.str); $$ = new ASTNode("iteration_statement", $1, $3, $4, $6);}
	| FOR '(' expression_statement expression_statement expression ')' statement {$1 = new ASTNode(yylval.str); $$ = new ASTNode("iteration_statement", $1, $3, $4, $5, $7);}
	| FOR '(' declaration expression_statement ')' statement {$1 = new ASTNode(yylval.str); $$ = new ASTNode("iteration_statement", $1, $3, $4, $6);}
	| FOR '(' declaration expression_statement expression ')' statement {$1 = new ASTNode(yylval.str); $$ = new ASTNode("iteration_statement", $1, $3, $4, $5, $7);}
	;

jump_statement
	: GOTO IDENTIFIER ';' {$1 = new ASTNode(yylval.str); $2 = new ASTNode(yylval.str); $$ = new ASTNode("jump_statement", $1, $2);}
	| CONTINUE ';' {$1 = new ASTNode(yylval.str); $$ = new ASTNode("jump_statement", $1);}
	| BREAK ';' {$1 = new ASTNode(yylval.str); $$ = new ASTNode("jump_statement", $1);}
	| RETURN ';'{$1 = new ASTNode(yylval.str); $$ = new ASTNode("jump_statement", $1);}
	| RETURN expression ';' {$$ = new ASTNode("return", $2);} 
	;

translation_unit
	: external_declaration {$$ = new ASTNode("Trans_unit", $1); tree = $$;}
	| translation_unit external_declaration {$$ = new ASTNode("Trans_unit", $1, $2); tree = $$; }
	;

external_declaration
	: function_definition { $$= new ASTNode("Ext_Dec", $1); }
	| declaration { $$= new ASTNode("Ext_Dec", $1); }
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement { $$= new ASTNode("function_definition", $1, $2, $3, $4); }
	| declaration_specifiers declarator compound_statement { $$= new ASTNode("function_definition", $1, $2, $3); }
	;

declaration_list
	: declaration { $$= new ASTNode("decl_list", $1); }
	| declaration_list declaration { $$= new ASTNode("decl_list", $1, $2); }
	;

%%
#include <stdio.h>

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}