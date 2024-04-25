/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "c.y"

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

#line 88 "c.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "c.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_I_CONSTANT = 4,                 /* I_CONSTANT  */
  YYSYMBOL_F_CONSTANT = 5,                 /* F_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_FUNC_NAME = 7,                  /* FUNC_NAME  */
  YYSYMBOL_SIZEOF = 8,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 9,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 10,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 11,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 12,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 13,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 14,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 15,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 16,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 17,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 18,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 19,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 20,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 22,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 23,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 24,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 25,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 26,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 27,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 28,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 29,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF_NAME = 30,              /* TYPEDEF_NAME  */
  YYSYMBOL_ENUMERATION_CONSTANT = 31,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_TYPEDEF = 32,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 33,                    /* EXTERN  */
  YYSYMBOL_STATIC = 34,                    /* STATIC  */
  YYSYMBOL_AUTO = 35,                      /* AUTO  */
  YYSYMBOL_REGISTER = 36,                  /* REGISTER  */
  YYSYMBOL_INLINE = 37,                    /* INLINE  */
  YYSYMBOL_CONST = 38,                     /* CONST  */
  YYSYMBOL_RESTRICT = 39,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 40,                  /* VOLATILE  */
  YYSYMBOL_BOOL = 41,                      /* BOOL  */
  YYSYMBOL_CHAR = 42,                      /* CHAR  */
  YYSYMBOL_SHORT = 43,                     /* SHORT  */
  YYSYMBOL_INT = 44,                       /* INT  */
  YYSYMBOL_LONG = 45,                      /* LONG  */
  YYSYMBOL_SIGNED = 46,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 47,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 48,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 49,                    /* DOUBLE  */
  YYSYMBOL_VOID = 50,                      /* VOID  */
  YYSYMBOL_COMPLEX = 51,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 52,                 /* IMAGINARY  */
  YYSYMBOL_STRUCT = 53,                    /* STRUCT  */
  YYSYMBOL_UNION = 54,                     /* UNION  */
  YYSYMBOL_ENUM = 55,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 56,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 57,                      /* CASE  */
  YYSYMBOL_DEFAULT = 58,                   /* DEFAULT  */
  YYSYMBOL_IF = 59,                        /* IF  */
  YYSYMBOL_ELSE = 60,                      /* ELSE  */
  YYSYMBOL_SWITCH = 61,                    /* SWITCH  */
  YYSYMBOL_WHILE = 62,                     /* WHILE  */
  YYSYMBOL_DO = 63,                        /* DO  */
  YYSYMBOL_FOR = 64,                       /* FOR  */
  YYSYMBOL_GOTO = 65,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 66,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 67,                     /* BREAK  */
  YYSYMBOL_RETURN = 68,                    /* RETURN  */
  YYSYMBOL_ALIGNAS = 69,                   /* ALIGNAS  */
  YYSYMBOL_ALIGNOF = 70,                   /* ALIGNOF  */
  YYSYMBOL_ATOMIC = 71,                    /* ATOMIC  */
  YYSYMBOL_GENERIC = 72,                   /* GENERIC  */
  YYSYMBOL_NORETURN = 73,                  /* NORETURN  */
  YYSYMBOL_STATIC_ASSERT = 74,             /* STATIC_ASSERT  */
  YYSYMBOL_THREAD_LOCAL = 75,              /* THREAD_LOCAL  */
  YYSYMBOL_76_ = 76,                       /* '('  */
  YYSYMBOL_77_ = 77,                       /* ')'  */
  YYSYMBOL_78_ = 78,                       /* ','  */
  YYSYMBOL_79_ = 79,                       /* ':'  */
  YYSYMBOL_80_ = 80,                       /* '['  */
  YYSYMBOL_81_ = 81,                       /* ']'  */
  YYSYMBOL_82_ = 82,                       /* '.'  */
  YYSYMBOL_83_ = 83,                       /* '{'  */
  YYSYMBOL_84_ = 84,                       /* '}'  */
  YYSYMBOL_85_ = 85,                       /* '&'  */
  YYSYMBOL_86_ = 86,                       /* '*'  */
  YYSYMBOL_87_ = 87,                       /* '+'  */
  YYSYMBOL_88_ = 88,                       /* '-'  */
  YYSYMBOL_89_ = 89,                       /* '~'  */
  YYSYMBOL_90_ = 90,                       /* '!'  */
  YYSYMBOL_91_ = 91,                       /* '/'  */
  YYSYMBOL_92_ = 92,                       /* '%'  */
  YYSYMBOL_93_ = 93,                       /* '<'  */
  YYSYMBOL_94_ = 94,                       /* '>'  */
  YYSYMBOL_95_ = 95,                       /* '^'  */
  YYSYMBOL_96_ = 96,                       /* '|'  */
  YYSYMBOL_97_ = 97,                       /* '?'  */
  YYSYMBOL_98_ = 98,                       /* '='  */
  YYSYMBOL_99_ = 99,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 100,                 /* $accept  */
  YYSYMBOL_primary_expression = 101,       /* primary_expression  */
  YYSYMBOL_constant = 102,                 /* constant  */
  YYSYMBOL_enumeration_constant = 103,     /* enumeration_constant  */
  YYSYMBOL_string = 104,                   /* string  */
  YYSYMBOL_generic_selection = 105,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 106,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 107,      /* generic_association  */
  YYSYMBOL_postfix_expression = 108,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 109, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 110,         /* unary_expression  */
  YYSYMBOL_unary_operator = 111,           /* unary_operator  */
  YYSYMBOL_cast_expression = 112,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 113, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 114,      /* additive_expression  */
  YYSYMBOL_shift_expression = 115,         /* shift_expression  */
  YYSYMBOL_relational_expression = 116,    /* relational_expression  */
  YYSYMBOL_equality_expression = 117,      /* equality_expression  */
  YYSYMBOL_and_expression = 118,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 119,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 120,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 121,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 122,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 123,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 124,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 125,      /* assignment_operator  */
  YYSYMBOL_expression = 126,               /* expression  */
  YYSYMBOL_constant_expression = 127,      /* constant_expression  */
  YYSYMBOL_declaration = 128,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 129,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 130,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 131,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 132,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 133,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 134, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 135,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 136,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 137,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 138, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 139,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 140,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 141,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 142,          /* enumerator_list  */
  YYSYMBOL_enumerator = 143,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 144,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 145,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 146,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 147,      /* alignment_specifier  */
  YYSYMBOL_declarator = 148,               /* declarator  */
  YYSYMBOL_direct_declarator = 149,        /* direct_declarator  */
  YYSYMBOL_pointer = 150,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 151,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 152,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 153,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 154,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 155,          /* identifier_list  */
  YYSYMBOL_type_name = 156,                /* type_name  */
  YYSYMBOL_abstract_declarator = 157,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 158, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 159,              /* initializer  */
  YYSYMBOL_initializer_list = 160,         /* initializer_list  */
  YYSYMBOL_designation = 161,              /* designation  */
  YYSYMBOL_designator_list = 162,          /* designator_list  */
  YYSYMBOL_designator = 163,               /* designator  */
  YYSYMBOL_static_assert_declaration = 164, /* static_assert_declaration  */
  YYSYMBOL_statement = 165,                /* statement  */
  YYSYMBOL_labeled_statement = 166,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 167,       /* compound_statement  */
  YYSYMBOL_block_item_list = 168,          /* block_item_list  */
  YYSYMBOL_block_item = 169,               /* block_item  */
  YYSYMBOL_expression_statement = 170,     /* expression_statement  */
  YYSYMBOL_selection_statement = 171,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 172,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 173,           /* jump_statement  */
  YYSYMBOL_translation_unit = 174,         /* translation_unit  */
  YYSYMBOL_external_declaration = 175,     /* external_declaration  */
  YYSYMBOL_function_definition = 176,      /* function_definition  */
  YYSYMBOL_declaration_list = 177          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    92,    85,     2,
      76,    77,    86,    87,    78,    88,    82,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    99,
      93,    98,    94,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    96,    84,    89,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    60,    61,    62,    63,    67,    68,    69,
      73,    77,    78,    82,    86,    87,    91,    92,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   109,   110,
     114,   115,   116,   117,   118,   119,   120,   124,   125,   126,
     127,   128,   129,   133,   134,   138,   139,   140,   141,   145,
     146,   147,   151,   152,   153,   157,   158,   159,   160,   161,
     165,   166,   167,   171,   172,   176,   177,   181,   182,   186,
     187,   191,   192,   196,   197,   201,   202,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   220,   221,
     225,   229,   230,   231,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   248,   249,   253,   254,   258,   259,
     260,   261,   262,   263,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     286,   287,   288,   292,   293,   297,   298,   302,   303,   304,
     308,   309,   310,   311,   315,   316,   320,   321,   322,   326,
     327,   328,   329,   330,   334,   335,   339,   340,   344,   348,
     349,   350,   351,   355,   356,   360,   361,   365,   366,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   387,   388,   389,   390,   394,   395,   400,
     401,   405,   406,   410,   411,   412,   416,   417,   421,   422,
     426,   427,   428,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   456,   457,   458,   462,   463,   464,
     465,   469,   473,   474,   478,   479,   483,   487,   488,   489,
     490,   491,   492,   496,   497,   498,   502,   503,   507,   508,
     512,   513,   517,   518,   522,   523,   524,   528,   529,   530,
     531,   532,   533,   537,   538,   539,   540,   541,   545,   546,
     550,   551,   555,   556,   560,   561
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL", "FUNC_NAME", "SIZEOF",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('", "')'", "','", "':'",
  "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'='", "';'",
  "$accept", "primary_expression", "constant", "enumeration_constant",
  "string", "generic_selection", "generic_assoc_list",
  "generic_association", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-370)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2229,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,    26,   -43,   -35,  -370,    -8,
    -370,  -370,    28,  2319,  2319,  -370,    39,  -370,  -370,  2319,
    2319,  2319,  -370,  1816,  -370,  -370,   -56,    46,   901,  2428,
    1649,  -370,    45,   162,  -370,   -40,  -370,  1915,   -46,    79,
    -370,  -370,     2,  2357,  -370,  -370,  -370,  -370,  -370,    46,
    -370,   -45,    10,  -370,  -370,  -370,  -370,  -370,  -370,  1671,
    1693,  1693,  -370,    61,    71,   901,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,   163,  -370,  1649,  -370,
     -67,   -30,   156,   125,   209,    92,    64,    65,   166,    20,
    -370,   121,  2428,   109,  2428,   128,   155,   160,   165,  -370,
    -370,  -370,   162,    45,  -370,   457,  1407,  -370,    28,  -370,
    2131,  1869,   989,   -46,  2357,  2031,  -370,    72,  -370,   104,
    1649,    29,  -370,   901,  -370,   901,  -370,  -370,  2428,  1649,
     450,  -370,  -370,   150,   169,   251,  -370,  -370,  1429,  1649,
     253,  -370,  1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,
    1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,
    1649,  -370,  -370,  1982,  1011,   -20,  -370,    74,  -370,  -370,
    -370,   259,  -370,  -370,  -370,  -370,   174,   195,  1649,   197,
     206,   220,   221,   721,   222,   282,   200,   202,   765,  -370,
    -370,    50,  -370,  -370,  -370,  -370,   578,  -370,  -370,  -370,
    -370,  -370,  1385,  -370,  -370,  -370,  -370,  -370,  -370,    76,
     227,   228,  -370,   157,  1253,  -370,   224,   226,  1033,  2078,
    -370,  -370,  1649,  -370,    66,  -370,   231,    32,  -370,  -370,
    -370,  -370,   234,   238,   242,   249,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  1649,  -370,  1649,
    1517,  -370,  -370,   159,  -370,   136,  -370,  -370,  -370,  -370,
     -67,   -67,   -30,   -30,   156,   156,   156,   156,   125,   125,
     209,    92,    64,    65,   166,   171,  -370,   256,   257,  1253,
    -370,   254,   258,  1121,    74,  2183,  1143,   260,   721,   261,
     721,  1649,  1649,  1649,   268,   668,   239,  -370,  -370,  -370,
      67,  -370,  -370,  -370,  1649,   340,  -370,   129,  1407,   101,
    -370,  1759,  -370,    77,  -370,  -370,  2275,  -370,   341,   264,
    1253,  -370,  -370,  1649,  -370,   265,   267,  -370,  -370,   117,
    -370,  1649,  -370,   266,   266,  -370,  2394,  -370,  -370,  1385,
    -370,  -370,  1649,  -370,  1649,  -370,  -370,   270,  1253,  -370,
    -370,  1649,  -370,   274,  -370,   279,  1253,  -370,   276,   277,
    1165,   262,  -370,   721,  -370,   175,   182,   184,   283,   811,
     811,  -370,  -370,   281,  -370,  1275,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,   284,   285,  -370,  -370,  -370,  -370,
     289,   186,  -370,   290,   131,  -370,  -370,  -370,   291,   292,
    -370,  -370,   293,  1253,  -370,  -370,  1649,  -370,   295,  -370,
    -370,   721,   721,   721,  1649,  1539,  1561,  -370,  -370,  -370,
    1407,  -370,  -370,  1649,  -370,  2394,  1649,  1297,  -370,  -370,
    -370,  -370,   296,   297,  -370,   300,  -370,  -370,   190,   721,
     193,   721,   201,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
     721,   271,  -370,   721,  -370,   721,  -370,  -370,  -370,  -370
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   163,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,   162,   164,     0,
     111,   271,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   268,   270,   153,     0,     0,     0,
       0,   169,     0,   186,    91,     0,   104,   107,   168,     0,
      94,    96,   132,     0,    98,   100,   102,     1,   269,     0,
      10,   157,     0,   154,     2,     7,     8,    11,    12,     0,
       0,     0,     9,     0,     0,     0,    37,    38,    39,    40,
      41,    42,    18,     3,     4,     6,    30,    43,     0,    45,
      49,    52,    55,    60,    63,    65,    67,    69,    71,    73,
      90,     0,   141,   199,   143,     0,     0,     0,     0,   162,
     187,   185,   184,     0,    92,     0,     0,   274,     0,   273,
       0,     0,     0,   167,     0,     0,   135,     0,   139,     0,
       0,     0,   149,     0,    34,     0,    31,    32,     0,     0,
      43,    75,    88,     0,     0,     0,    24,    25,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   140,     0,     0,   201,   198,   202,   142,   165,
     158,     0,   170,   188,   183,   105,   107,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   246,
     252,     0,   250,   251,   237,   238,     0,   248,   239,   240,
     241,   242,     0,   226,   106,   275,   272,   196,   181,   195,
       0,   190,   191,     0,     0,   171,    38,     0,     0,     0,
     130,   136,     0,   137,     0,   144,   148,     0,   151,   156,
     150,   155,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    77,     0,     5,     0,
       0,    23,    20,     0,    28,     0,    22,    46,    47,    48,
      50,    51,    53,    54,    58,    59,    56,    57,    61,    62,
      64,    66,    68,    70,    72,     0,   220,     0,     0,     0,
     204,    38,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   264,   265,   266,
       0,   253,   247,   249,     0,     0,   228,     0,     0,     0,
     232,     0,   193,   201,   194,   180,     0,   182,     0,     0,
       0,   172,   179,     0,   178,    38,     0,   131,   146,     0,
     138,     0,   152,    35,     0,    36,     0,    76,    89,     0,
      44,    21,     0,    19,     0,   221,   203,     0,     0,   205,
     211,     0,   210,     0,   222,     0,     0,   212,    38,     0,
       0,     0,   243,     0,   245,     0,     0,     0,     0,     0,
       0,   263,   267,     0,   235,     0,   224,   227,   231,   233,
     189,   192,   197,   174,     0,     0,   175,   177,   145,   147,
       0,     0,    14,     0,     0,    29,    74,   207,     0,     0,
     209,   223,     0,     0,   213,   219,     0,   218,     0,   236,
     244,     0,     0,     0,     0,     0,     0,   234,   225,   230,
       0,   173,   176,     0,    13,     0,     0,     0,    26,   206,
     208,   215,     0,     0,   216,   255,   256,   257,     0,     0,
       0,     0,     0,   229,    17,    15,    16,    27,   214,   217,
       0,     0,   261,     0,   259,     0,   254,   258,   262,   260
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -370,  -370,  -370,  -370,  -370,  -370,  -370,   -74,  -370,  -370,
     243,  -370,   -29,   122,   127,    52,   116,   188,   203,   205,
     207,   210,  -370,   -38,   -59,  -370,   -82,   -22,   -49,    11,
    -370,   263,  -370,   -42,  -370,  -370,   246,  -115,   -23,  -370,
      41,  -370,   322,  -124,  -370,   -48,  -370,  -370,   -18,   -50,
     -51,  -119,  -113,  -370,    56,  -370,    -2,   -91,  -169,  -122,
      34,  -369,  -370,    73,   -27,   -33,  -370,   -34,  -370,   178,
    -260,  -370,  -370,  -370,  -370,   352,  -370,  -370
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    92,    93,    71,    94,    95,   411,   412,    96,   273,
     150,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   151,   152,   267,   211,   111,    31,   128,
      55,    56,    33,    34,    35,    36,   135,   136,   113,   244,
     245,    37,    72,    73,    38,    39,    40,    41,   118,    58,
      59,   122,   297,   231,   232,   233,   413,   298,   187,   326,
     327,   328,   329,   330,    42,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    43,    44,    45,   130
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     114,   114,   121,   153,   224,   120,   112,   112,   127,   133,
     110,    32,   110,   238,    57,   114,   304,   251,   230,   162,
     241,   112,   186,   129,   163,   164,   440,    69,   117,    46,
     131,    51,    70,    48,   132,    70,   138,   114,   123,   179,
     137,    49,    62,   112,    60,    61,   115,   116,    51,    70,
      64,    65,    66,   140,    32,   390,   183,   165,   166,   124,
     184,   153,   185,   153,   114,   303,   114,   223,    50,   161,
     112,   194,   112,   237,   193,    51,   212,   275,   440,    51,
      51,   225,    51,   154,   120,   134,   114,   114,   141,   182,
     255,   188,   112,   112,   142,   114,   226,   114,   295,   274,
     114,   112,   110,   112,    52,   196,   112,   138,   138,    47,
     196,   137,   137,   250,    53,   340,   352,   180,   249,   246,
      51,    52,    63,   251,   241,   302,   320,    54,   269,   435,
     436,    53,   185,   277,   278,   279,   120,   148,   334,   169,
     170,   252,   229,   253,   349,   269,   254,   149,    52,   321,
     305,   242,   331,   331,   306,    52,   184,   184,    53,   176,
     110,   177,    53,   223,   304,   350,   392,   212,   167,   168,
     314,   243,   155,   156,   157,   339,   309,   175,   333,   346,
     368,   324,   247,   325,   178,   183,   120,   380,   248,   184,
     193,   114,   375,    52,   229,    53,   242,   112,   181,   398,
       8,     9,    10,    53,   110,   189,   397,   395,   357,   447,
     358,   332,   138,   396,   269,   448,   137,   363,   171,   172,
     348,   284,   285,   286,   287,   173,   174,   268,   269,   385,
     386,   387,   190,   119,   337,   338,   361,   362,   191,   158,
     367,   360,   192,   159,   373,   160,   270,   379,    53,   269,
     364,   120,   431,   269,   271,   193,   276,   423,   120,   432,
     269,   433,   269,   444,   445,   307,   389,   471,   269,   223,
     473,   269,   126,   439,   308,   382,   310,   384,   475,   269,
     333,   404,   311,   133,   405,   316,   110,   280,   281,   288,
     289,    97,   193,    97,   282,   283,   312,   313,   315,   317,
     223,   318,   393,   415,   335,   341,   336,   342,   114,   418,
     351,   353,   419,   110,   112,   354,   229,   422,   463,   355,
     193,   428,   144,   146,   147,   439,   416,   356,   120,   409,
     388,   246,   193,   365,   366,   369,   223,   381,   391,   370,
     383,    97,   229,   394,   402,   403,   406,   229,   407,   359,
     430,   417,   458,   460,   462,   420,   421,   424,   425,   434,
     470,   429,   437,   290,   452,   441,   442,   453,   443,   446,
     477,   465,   449,   450,   451,   193,   454,   468,   469,   291,
     239,   223,   292,    97,   464,   293,   195,   466,   223,   294,
     408,   139,   401,   414,   323,    68,     0,   114,   455,   456,
     457,     0,   399,   112,     0,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,     0,     0,     0,   472,     0,   474,     0,
       0,     0,     0,     0,     0,     0,     0,   476,     0,     0,
     478,    97,   479,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,    75,    76,    77,    78,    79,     0,    80,    81,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,     0,     0,     0,     0,    97,     0,     1,    82,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    97,   198,   199,   200,     0,   201,   202,
     203,   204,   205,   206,   207,   208,    26,    83,    27,    84,
      28,    29,    30,    85,     0,     0,     0,     0,     0,     0,
     125,   209,    86,    87,    88,    89,    90,    91,   266,     0,
       0,     0,     0,     0,     0,     0,   210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     1,    82,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   198,   199,   200,     0,   201,
     202,   203,   204,   205,   206,   207,   208,    26,    83,    27,
      84,    28,    29,    30,    85,     0,     0,     0,     0,     0,
       0,   125,   322,    86,    87,    88,    89,    90,    91,     0,
       0,    74,    75,    76,    77,    78,    79,   210,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    82,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   197,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,    26,    83,    27,
      84,    28,    29,    30,    85,     0,     0,     0,     0,     0,
       0,     0,    82,    86,    87,    88,    89,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,   210,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,   198,   199,
     200,     0,   201,   202,   203,   204,   205,   206,   207,   208,
       0,    83,     0,    84,     0,     0,    82,    85,     0,     0,
       0,     0,     0,     0,   125,     0,    86,    87,    88,    89,
      90,    91,     0,     0,    74,    75,    76,    77,    78,    79,
     210,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
       0,    85,    82,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,   319,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,    84,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     0,     0,    74,    75,    76,    77,    78,    79,
     210,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    82,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    27,    84,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,   234,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,   299,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,    83,
     119,    84,     0,     0,    82,    85,     0,   343,     0,     0,
     235,     8,     9,    10,    86,   236,    88,    89,    90,    91,
       0,    83,   119,    84,     0,     0,     0,    85,     0,     0,
       0,     0,   300,     0,     0,     0,    86,   301,    88,    89,
      90,    91,     0,    83,   119,    84,     0,     0,     0,    85,
       0,     0,     0,     0,   344,     0,     0,     0,    86,   345,
      88,    89,    90,    91,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,   371,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,   376,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,    83,   119,    84,     0,     0,    82,    85,     0,   426,
       0,     0,   372,     8,     9,    10,    86,    87,    88,    89,
      90,    91,     0,    83,   119,    84,     0,     0,     0,    85,
       0,     0,     0,     0,   377,     0,     0,     0,    86,   378,
      88,    89,    90,    91,     0,    83,   119,    84,     0,     0,
       0,    85,     0,     0,     0,     0,   427,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,   119,    84,     0,     0,    82,    85,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,    83,     0,    84,     0,     0,
       0,    85,     0,     0,     0,   324,     0,   325,   222,   438,
      86,    87,    88,    89,    90,    91,     0,    83,     0,    84,
       0,     0,     0,    85,     0,     0,     0,   324,     0,   325,
     222,   467,    86,    87,    88,    89,    90,    91,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
      82,    85,     0,     0,     0,   324,     0,   325,   222,     0,
      86,    87,    88,    89,    90,    91,     0,    83,     0,    84,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
     222,     0,    86,    87,    88,    89,    90,    91,     0,    83,
       0,    84,     0,     0,     0,    85,   272,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    84,
       0,     0,    82,    85,     0,     0,     0,     0,     0,     0,
     359,     0,    86,    87,    88,    89,    90,    91,     0,    83,
       0,    84,     0,     0,     0,    85,   459,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,    83,     0,    84,     0,     0,     0,    85,   461,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,    84,     0,     0,    82,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,    83,     0,    84,     0,     0,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    51,    83,     0,    84,     0,     0,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,   331,   296,     0,     0,   184,
       0,     0,     0,     0,     0,    53,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   227,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,     1,   228,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   126,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,   183,   296,
       0,     1,   184,     0,     0,     0,     0,     0,    53,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    29,     0,     0,     1,     0,
       0,     0,     0,     0,     0,   240,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   347,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     1,   125,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,     1,
     374,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,    29,    30,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     1,
      30,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    26,     0,
      27,     0,    28,     0,    30,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,    27,     0,
       0,    29,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,   410,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,    27,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      48,    49,    53,    85,   126,    53,    48,    49,    57,    59,
      48,     0,    50,   132,    32,    63,   185,   141,   131,    86,
     135,    63,   113,    57,    91,    92,   395,    83,    50,     3,
      76,     3,     3,    76,    80,     3,    63,    85,    78,    19,
      63,    76,     3,    85,    33,    34,    48,    49,     3,     3,
      39,    40,    41,    98,    43,   315,    76,    87,    88,    99,
      80,   143,   113,   145,   112,   184,   114,   126,    76,    98,
     112,   122,   114,   132,   122,     3,   125,   159,   447,     3,
       3,   130,     3,    85,   132,    83,   134,   135,    78,   112,
     149,   114,   134,   135,    84,   143,   130,   145,   180,   158,
     148,   143,   140,   145,    76,   123,   148,   134,   135,    83,
     128,   134,   135,    84,    86,   234,    84,    97,   140,   137,
       3,    76,    83,   247,   239,   184,   208,    99,    78,   389,
     390,    86,   183,   162,   163,   164,   184,    76,   229,    14,
      15,   143,   131,   145,    78,    78,   148,    76,    76,    99,
      76,    79,    76,    76,    80,    76,    80,    80,    86,    95,
     198,    96,    86,   222,   333,    99,    99,   216,    12,    13,
     203,    99,     9,    10,    11,   234,   198,    85,   229,   238,
     299,    80,    78,    82,    18,    76,   234,   306,    84,    80,
     238,   239,   305,    76,   183,    86,    79,   239,    77,    98,
      38,    39,    40,    86,   242,    77,   328,    78,   267,    78,
     269,   229,   239,    84,    78,    84,   239,    81,    93,    94,
     242,   169,   170,   171,   172,    16,    17,    77,    78,   311,
     312,   313,    77,    71,    77,    78,    77,    78,    78,    76,
     299,   270,    77,    80,   303,    82,    77,   306,    86,    78,
      79,   299,    77,    78,     3,   303,     3,   376,   306,    77,
      78,    77,    78,    77,    78,     6,   315,    77,    78,   328,
      77,    78,    98,   395,    79,   308,    79,   310,    77,    78,
     331,   340,    76,   333,   343,     3,   324,   165,   166,   173,
     174,    48,   340,    50,   167,   168,    76,    76,    76,    99,
     359,    99,   324,   362,    77,    81,    78,    81,   356,   368,
      79,    77,   371,   351,   356,    77,   305,   376,   440,    77,
     368,   380,    79,    80,    81,   447,   364,    78,   376,   351,
      62,   349,   380,    77,    77,    81,   395,    77,    99,    81,
      79,    98,   331,     3,     3,    81,    81,   336,    81,    83,
     383,    81,   434,   435,   436,    81,    77,    81,    81,    76,
      60,    99,    81,   175,   423,    81,    81,   426,    79,    79,
      99,   445,    81,    81,    81,   423,    81,    81,    81,   176,
     134,   440,   177,   140,   443,   178,   123,   446,   447,   179,
     349,    69,   336,   359,   216,    43,    -1,   445,   431,   432,
     433,    -1,   329,   445,    -1,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,    -1,    -1,    -1,   459,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,
     473,   198,   475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   270,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   364,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    31,    76,    -1,    34,    -1,    -1,
      81,    38,    39,    40,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,    34,
      -1,    -1,    81,    38,    39,    40,    85,    86,    87,    88,
      89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,     0,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    30,    77,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    98,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      -1,    30,    80,    -1,    -1,    -1,    -1,    -1,    86,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    84,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    83,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    30,
      77,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    30,
      75,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    69,    -1,
      71,    -1,    73,    -1,    75,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    71,    -1,
      -1,    74,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   128,   129,   132,   133,   134,   135,   141,   144,   145,
     146,   147,   164,   174,   175,   176,     3,    83,    76,    76,
      76,     3,    76,    86,    99,   130,   131,   148,   149,   150,
     129,   129,     3,    83,   129,   129,   129,     0,   175,    83,
       3,   103,   142,   143,     3,     4,     5,     6,     7,     8,
      10,    11,    31,    70,    72,    76,    85,    86,    87,    88,
      89,    90,   101,   102,   104,   105,   108,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   127,   133,   138,   145,   156,   156,   127,   148,    71,
     145,   150,   151,    78,    99,    83,    98,   128,   129,   167,
     177,    76,    80,   149,    83,   136,   137,   138,   164,   142,
      98,    78,    84,    76,   110,    76,   110,   110,    76,    76,
     110,   123,   124,   126,   156,     9,    10,    11,    76,    80,
      82,   112,    86,    91,    92,    87,    88,    12,    13,    14,
      15,    93,    94,    16,    17,    85,    95,    96,    18,    19,
      97,    77,   138,    76,    80,   150,   157,   158,   138,    77,
      77,    78,    77,   145,   150,   131,   148,     3,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    68,    84,
      99,   126,   128,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    83,   124,   159,   128,   167,     3,    77,   129,
     152,   153,   154,   155,    34,    81,    86,   124,   151,   136,
      84,   137,    79,    99,   139,   140,   148,    78,    84,   127,
      84,   143,   156,   156,   156,   124,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    98,   125,    77,    78,
      77,     3,    77,   109,   124,   126,     3,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   118,   119,   120,   121,   126,    77,   152,   157,    34,
      81,    86,   124,   151,   158,    76,    80,     6,    79,   127,
      79,    76,    76,    76,   165,    76,     3,    99,    99,    99,
     126,    99,    84,   169,    80,    82,   159,   160,   161,   162,
     163,    76,   148,   150,   157,    77,    78,    77,    78,   124,
     151,    81,    81,    34,    81,    86,   124,    84,   127,    78,
      99,    79,    84,    77,    77,    77,    78,   124,   124,    83,
     112,    77,    78,    81,    79,    77,    77,   124,   151,    81,
      81,    34,    81,   124,    77,   152,    34,    81,    86,   124,
     151,    77,   165,    79,   165,   126,   126,   126,    62,   128,
     170,    99,    99,   127,     3,    78,    84,   159,    98,   163,
      56,   154,     3,    81,   124,   124,    81,    81,   140,   127,
      58,   106,   107,   156,   160,   124,   123,    81,   124,   124,
      81,    77,   124,   151,    81,    81,    34,    81,   124,    99,
     165,    77,    77,    77,    76,   170,   170,    81,    84,   159,
     161,    81,    81,    79,    77,    78,    79,    78,    84,    81,
      81,    81,   124,   124,    81,   165,   165,   165,   126,    77,
     126,    77,   126,   159,   124,   107,   124,    84,    81,    81,
      60,    77,   165,    77,   165,    77,   165,    99,   165,   165
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   150,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   154,   154,   155,   155,   156,   156,
     157,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   160,   160,   160,
     160,   161,   162,   162,   163,   163,   164,   165,   165,   165,
     165,   165,   165,   166,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   171,   172,   172,   172,
     172,   172,   172,   173,   173,   173,   173,   173,   174,   174,
     175,   175,   176,   176,   177,   177
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     4,
       5,     5,     6,     2,     1,     3,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     1,     2,
       1,     1,     1,     2,     7,     5,     5,     5,     7,     6,
       7,     6,     7,     3,     2,     2,     2,     3,     1,     2,
       1,     1,     4,     3,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER  */
#line 59 "c.y"
                     { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("Identifer",(yyvsp[0].node));}
#line 2019 "c.tab.cpp"
    break;

  case 3: /* primary_expression: constant  */
#line 60 "c.y"
                   { (yyval.node)= (yyvsp[0].node);}
#line 2025 "c.tab.cpp"
    break;

  case 4: /* primary_expression: string  */
#line 61 "c.y"
                 { (yyval.node)= (yyvsp[0].node);}
#line 2031 "c.tab.cpp"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 62 "c.y"
                             { (yyval.node)= (yyvsp[-1].node);}
#line 2037 "c.tab.cpp"
    break;

  case 6: /* primary_expression: generic_selection  */
#line 63 "c.y"
                            { (yyval.node)= (yyvsp[0].node);}
#line 2043 "c.tab.cpp"
    break;

  case 7: /* constant: I_CONSTANT  */
#line 67 "c.y"
                                { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2049 "c.tab.cpp"
    break;

  case 8: /* constant: F_CONSTANT  */
#line 68 "c.y"
                        { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2055 "c.tab.cpp"
    break;

  case 9: /* constant: ENUMERATION_CONSTANT  */
#line 69 "c.y"
                                 { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2061 "c.tab.cpp"
    break;

  case 10: /* enumeration_constant: IDENTIFIER  */
#line 73 "c.y"
                     { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("enumeration_constant", (yyvsp[0].node)); }
#line 2067 "c.tab.cpp"
    break;

  case 11: /* string: STRING_LITERAL  */
#line 77 "c.y"
                         { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2073 "c.tab.cpp"
    break;

  case 12: /* string: FUNC_NAME  */
#line 78 "c.y"
                    { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2079 "c.tab.cpp"
    break;

  case 13: /* generic_selection: GENERIC '(' assignment_expression ',' generic_assoc_list ')'  */
#line 82 "c.y"
                                                                        { (yyvsp[-5].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("generic_selection", (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2085 "c.tab.cpp"
    break;

  case 14: /* generic_assoc_list: generic_association  */
#line 86 "c.y"
                              { (yyval.node)= new ASTNode("generic_assoc_list", (yyvsp[0].node)); }
#line 2091 "c.tab.cpp"
    break;

  case 15: /* generic_assoc_list: generic_assoc_list ',' generic_association  */
#line 87 "c.y"
                                                     { (yyval.node)= new ASTNode("generic_assoc_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2097 "c.tab.cpp"
    break;

  case 16: /* generic_association: type_name ':' assignment_expression  */
#line 91 "c.y"
                                              { (yyval.node)= new ASTNode("generic_association", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2103 "c.tab.cpp"
    break;

  case 17: /* generic_association: DEFAULT ':' assignment_expression  */
#line 92 "c.y"
                                            { (yyvsp[-2].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("generic_association_default", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2109 "c.tab.cpp"
    break;

  case 18: /* postfix_expression: primary_expression  */
#line 96 "c.y"
                             { (yyval.node)= new ASTNode("postfix_expression_primary", (yyvsp[0].node)); }
#line 2115 "c.tab.cpp"
    break;

  case 19: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 97 "c.y"
                                                { (yyval.node)= new ASTNode("postfix_expression_exp", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2121 "c.tab.cpp"
    break;

  case 20: /* postfix_expression: postfix_expression '(' ')'  */
#line 98 "c.y"
                                     { (yyval.node)= new ASTNode("postfix_expression", (yyvsp[-2].node)); }
#line 2127 "c.tab.cpp"
    break;

  case 21: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 99 "c.y"
                                                              { (yyval.node)= new ASTNode("postfix_expression_list", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2133 "c.tab.cpp"
    break;

  case 22: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 100 "c.y"
                                            { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("postfix_expression_ident", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2139 "c.tab.cpp"
    break;

  case 23: /* postfix_expression: postfix_expression PTR_OP IDENTIFIER  */
#line 101 "c.y"
                                               { (yyvsp[-1].node) = new ASTNode(yylval.str); (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("postfix_expression_ptr", (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2145 "c.tab.cpp"
    break;

  case 24: /* postfix_expression: postfix_expression INC_OP  */
#line 102 "c.y"
                                    { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("postfix_expression_exp_inc", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2151 "c.tab.cpp"
    break;

  case 25: /* postfix_expression: postfix_expression DEC_OP  */
#line 103 "c.y"
                                    { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("postfix_expression_exp_dec", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2157 "c.tab.cpp"
    break;

  case 26: /* postfix_expression: '(' type_name ')' '{' initializer_list '}'  */
#line 104 "c.y"
                                                     { (yyval.node)= new ASTNode("postfix_expression_init_brace", (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 2163 "c.tab.cpp"
    break;

  case 27: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 105 "c.y"
                                                          { (yyval.node)= new ASTNode("postfix_expression_init_comma", (yyvsp[-5].node), (yyvsp[-2].node)); }
#line 2169 "c.tab.cpp"
    break;

  case 28: /* argument_expression_list: assignment_expression  */
#line 109 "c.y"
                                 { (yyval.node)= new ASTNode("argument_expression_list", (yyvsp[0].node)); }
#line 2175 "c.tab.cpp"
    break;

  case 29: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 110 "c.y"
                                                               { (yyval.node)= new ASTNode("argument_expression_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2181 "c.tab.cpp"
    break;

  case 30: /* unary_expression: postfix_expression  */
#line 114 "c.y"
                             { (yyval.node)=  (yyvsp[0].node); }
#line 2187 "c.tab.cpp"
    break;

  case 31: /* unary_expression: INC_OP unary_expression  */
#line 115 "c.y"
                                  { (yyvsp[-1].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("unary_expression_inc", (yyvsp[-1].node)); }
#line 2193 "c.tab.cpp"
    break;

  case 32: /* unary_expression: DEC_OP unary_expression  */
#line 116 "c.y"
                                  { (yyvsp[-1].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("unary_expression_dec", (yyvsp[-1].node)); }
#line 2199 "c.tab.cpp"
    break;

  case 33: /* unary_expression: unary_operator cast_expression  */
#line 117 "c.y"
                                         { (yyval.node)= new ASTNode("unary_expression", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2205 "c.tab.cpp"
    break;

  case 34: /* unary_expression: SIZEOF unary_expression  */
#line 118 "c.y"
                                  { (yyvsp[-1].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("unary_expression_size", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2211 "c.tab.cpp"
    break;

  case 35: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 119 "c.y"
                                   { (yyvsp[-3].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("unary_expression_size_type", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2217 "c.tab.cpp"
    break;

  case 36: /* unary_expression: ALIGNOF '(' type_name ')'  */
#line 120 "c.y"
                                   { (yyvsp[-3].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("unary_expression_size_align", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2223 "c.tab.cpp"
    break;

  case 37: /* unary_operator: '&'  */
#line 124 "c.y"
              { (yyval.node)= new ASTNode("&"); }
#line 2229 "c.tab.cpp"
    break;

  case 38: /* unary_operator: '*'  */
#line 125 "c.y"
              { (yyval.node)= new ASTNode("*"); }
#line 2235 "c.tab.cpp"
    break;

  case 39: /* unary_operator: '+'  */
#line 126 "c.y"
              { (yyval.node)= new ASTNode("+"); }
#line 2241 "c.tab.cpp"
    break;

  case 40: /* unary_operator: '-'  */
#line 127 "c.y"
              { (yyval.node)= new ASTNode("-"); }
#line 2247 "c.tab.cpp"
    break;

  case 41: /* unary_operator: '~'  */
#line 128 "c.y"
              { (yyval.node)= new ASTNode("~"); }
#line 2253 "c.tab.cpp"
    break;

  case 42: /* unary_operator: '!'  */
#line 129 "c.y"
              { (yyval.node)= new ASTNode("!"); }
#line 2259 "c.tab.cpp"
    break;

  case 43: /* cast_expression: unary_expression  */
#line 133 "c.y"
                           {(yyval.node) =(yyvsp[0].node);}
#line 2265 "c.tab.cpp"
    break;

  case 44: /* cast_expression: '(' type_name ')' cast_expression  */
#line 134 "c.y"
                                            {(yyval.node) = new ASTNode("cast_expression", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2271 "c.tab.cpp"
    break;

  case 45: /* multiplicative_expression: cast_expression  */
#line 138 "c.y"
                          {(yyval.node) = (yyvsp[0].node);}
#line 2277 "c.tab.cpp"
    break;

  case 46: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 139 "c.y"
                                                        {(yyval.node) = new ASTNode("multiplicative_expression_mult", (yyvsp[-2].node), new ASTNode("*"), (yyvsp[0].node));}
#line 2283 "c.tab.cpp"
    break;

  case 47: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 140 "c.y"
                                                        {(yyval.node) = new ASTNode("multiplicative_expression_div", (yyvsp[-2].node), new ASTNode("/"), (yyvsp[0].node));}
#line 2289 "c.tab.cpp"
    break;

  case 48: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 141 "c.y"
                                                        {(yyval.node) = new ASTNode("multiplicative_expression_mod", (yyvsp[-2].node), new ASTNode("%"), (yyvsp[0].node));}
#line 2295 "c.tab.cpp"
    break;

  case 49: /* additive_expression: multiplicative_expression  */
#line 145 "c.y"
                                    {(yyval.node) = (yyvsp[0].node);}
#line 2301 "c.tab.cpp"
    break;

  case 50: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 146 "c.y"
                                                             {(yyval.node) = new ASTNode("additive_expression_add", (yyvsp[-2].node), new ASTNode("+"), (yyvsp[0].node));}
#line 2307 "c.tab.cpp"
    break;

  case 51: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 147 "c.y"
                                                            {(yyval.node) = new ASTNode("additive_expression_sub", (yyvsp[-2].node), new ASTNode("-"), (yyvsp[0].node));}
#line 2313 "c.tab.cpp"
    break;

  case 52: /* shift_expression: additive_expression  */
#line 151 "c.y"
                              {(yyval.node) = new ASTNode("shift_expression", (yyvsp[0].node));}
#line 2319 "c.tab.cpp"
    break;

  case 53: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 152 "c.y"
                                                       {(yyval.node) = new ASTNode("shift_expression", (yyvsp[-2].node),  new ASTNode("<<"), (yyvsp[0].node));}
#line 2325 "c.tab.cpp"
    break;

  case 54: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 153 "c.y"
                                                        {(yyval.node) = new ASTNode("shift_expression", (yyvsp[-2].node), new ASTNode(">>") ,(yyvsp[0].node));}
#line 2331 "c.tab.cpp"
    break;

  case 55: /* relational_expression: shift_expression  */
#line 157 "c.y"
                           {(yyval.node) = (yyvsp[0].node);}
#line 2337 "c.tab.cpp"
    break;

  case 56: /* relational_expression: relational_expression '<' shift_expression  */
#line 158 "c.y"
                                                     {(yyval.node) = new ASTNode("lesser_expression", (yyvsp[-2].node), new ASTNode("<"), (yyvsp[0].node));}
#line 2343 "c.tab.cpp"
    break;

  case 57: /* relational_expression: relational_expression '>' shift_expression  */
#line 159 "c.y"
                                                     {(yyval.node) = new ASTNode("greater_expression", (yyvsp[-2].node), new ASTNode(">"), (yyvsp[0].node));}
#line 2349 "c.tab.cpp"
    break;

  case 58: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 160 "c.y"
                                                       {(yyval.node) = new ASTNode("leq_expression", (yyvsp[-2].node),  new ASTNode("<="), (yyvsp[0].node));}
#line 2355 "c.tab.cpp"
    break;

  case 59: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 161 "c.y"
                                                       {(yyval.node) = new ASTNode("geq_expression", (yyvsp[-2].node),  new ASTNode(">="), (yyvsp[0].node));}
#line 2361 "c.tab.cpp"
    break;

  case 60: /* equality_expression: relational_expression  */
#line 165 "c.y"
                                {(yyval.node) =  (yyvsp[0].node);}
#line 2367 "c.tab.cpp"
    break;

  case 61: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 166 "c.y"
                                                          {(yyval.node) = new ASTNode("equality_expression", (yyvsp[-2].node),  new ASTNode("=="), (yyvsp[0].node));}
#line 2373 "c.tab.cpp"
    break;

  case 62: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 167 "c.y"
                                                          {(yyval.node) = new ASTNode("no_equality_expression", (yyvsp[-2].node),  new ASTNode("!="), (yyvsp[0].node));}
#line 2379 "c.tab.cpp"
    break;

  case 63: /* and_expression: equality_expression  */
#line 171 "c.y"
                              {(yyval.node) =(yyvsp[0].node);}
#line 2385 "c.tab.cpp"
    break;

  case 64: /* and_expression: and_expression '&' equality_expression  */
#line 172 "c.y"
                                                 {(yyval.node) = new ASTNode("and_expression", (yyvsp[-2].node),new ASTNode("&"), (yyvsp[0].node));}
#line 2391 "c.tab.cpp"
    break;

  case 65: /* exclusive_or_expression: and_expression  */
#line 176 "c.y"
                         { (yyval.node)=  (yyvsp[0].node); }
#line 2397 "c.tab.cpp"
    break;

  case 66: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 177 "c.y"
                                                      { (yyval.node)= new ASTNode("exclusive_or_expression", (yyvsp[-2].node), new ASTNode("^"),(yyvsp[0].node)); }
#line 2403 "c.tab.cpp"
    break;

  case 67: /* inclusive_or_expression: exclusive_or_expression  */
#line 181 "c.y"
                                  { (yyval.node)=  (yyvsp[0].node); }
#line 2409 "c.tab.cpp"
    break;

  case 68: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 182 "c.y"
                                                              { (yyval.node)= new ASTNode("inclusive_or_expression", (yyvsp[-2].node), new ASTNode("|"), (yyvsp[0].node)); }
#line 2415 "c.tab.cpp"
    break;

  case 69: /* logical_and_expression: inclusive_or_expression  */
#line 186 "c.y"
                                  { (yyval.node)= (yyvsp[0].node); }
#line 2421 "c.tab.cpp"
    break;

  case 70: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 187 "c.y"
                                                                { (yyvsp[-1].node)= new ASTNode(yylval.str); (yyval.node)= new ASTNode("logical_and_expression", (yyvsp[-2].node),  new ASTNode("&&"), (yyvsp[0].node)); }
#line 2427 "c.tab.cpp"
    break;

  case 71: /* logical_or_expression: logical_and_expression  */
#line 191 "c.y"
                                 { (yyval.node)= (yyvsp[0].node); }
#line 2433 "c.tab.cpp"
    break;

  case 72: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 192 "c.y"
                                                              {  (yyval.node)= new ASTNode("logical_or_expression", (yyvsp[-2].node), new ASTNode("||"), (yyvsp[0].node)); }
#line 2439 "c.tab.cpp"
    break;

  case 73: /* conditional_expression: logical_or_expression  */
#line 196 "c.y"
                                { (yyval.node)= (yyvsp[0].node); }
#line 2445 "c.tab.cpp"
    break;

  case 74: /* conditional_expression: logical_or_expression '?' expression ':' conditional_expression  */
#line 197 "c.y"
                                                                          { (yyval.node)= new ASTNode("conditional_expression", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2451 "c.tab.cpp"
    break;

  case 75: /* assignment_expression: conditional_expression  */
#line 201 "c.y"
                                 { (yyval.node)= new ASTNode("assignment_expression", (yyvsp[0].node)); }
#line 2457 "c.tab.cpp"
    break;

  case 76: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 202 "c.y"
                                                                      { (yyval.node)= new ASTNode("assignment_expression", (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2463 "c.tab.cpp"
    break;

  case 77: /* assignment_operator: '='  */
#line 206 "c.y"
               { (yyval.node)= new ASTNode("="); }
#line 2469 "c.tab.cpp"
    break;

  case 78: /* assignment_operator: MUL_ASSIGN  */
#line 207 "c.y"
                     { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2475 "c.tab.cpp"
    break;

  case 79: /* assignment_operator: DIV_ASSIGN  */
#line 208 "c.y"
                     { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2481 "c.tab.cpp"
    break;

  case 80: /* assignment_operator: MOD_ASSIGN  */
#line 209 "c.y"
                     { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2487 "c.tab.cpp"
    break;

  case 81: /* assignment_operator: ADD_ASSIGN  */
#line 210 "c.y"
                     { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2493 "c.tab.cpp"
    break;

  case 82: /* assignment_operator: SUB_ASSIGN  */
#line 211 "c.y"
                     { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2499 "c.tab.cpp"
    break;

  case 83: /* assignment_operator: LEFT_ASSIGN  */
#line 212 "c.y"
                      { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2505 "c.tab.cpp"
    break;

  case 84: /* assignment_operator: RIGHT_ASSIGN  */
#line 213 "c.y"
                       { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2511 "c.tab.cpp"
    break;

  case 85: /* assignment_operator: AND_ASSIGN  */
#line 214 "c.y"
                     { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2517 "c.tab.cpp"
    break;

  case 86: /* assignment_operator: XOR_ASSIGN  */
#line 215 "c.y"
                     { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2523 "c.tab.cpp"
    break;

  case 87: /* assignment_operator: OR_ASSIGN  */
#line 216 "c.y"
                    { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2529 "c.tab.cpp"
    break;

  case 88: /* expression: assignment_expression  */
#line 220 "c.y"
                                 { (yyval.node)= new ASTNode("expression", (yyvsp[0].node)); }
#line 2535 "c.tab.cpp"
    break;

  case 89: /* expression: expression ',' assignment_expression  */
#line 221 "c.y"
                                               { (yyval.node)= new ASTNode("expression", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2541 "c.tab.cpp"
    break;

  case 90: /* constant_expression: conditional_expression  */
#line 225 "c.y"
                                                               { (yyval.node)= new ASTNode("Constant_expression", (yyvsp[0].node)); }
#line 2547 "c.tab.cpp"
    break;

  case 91: /* declaration: declaration_specifiers ';'  */
#line 229 "c.y"
                                     { (yyval.node)= new ASTNode("Decl", (yyvsp[-1].node)); }
#line 2553 "c.tab.cpp"
    break;

  case 92: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 230 "c.y"
                                                          { (yyval.node)= new ASTNode("Decl", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2559 "c.tab.cpp"
    break;

  case 93: /* declaration: static_assert_declaration  */
#line 231 "c.y"
                                    { (yyval.node)= new ASTNode("Decl", (yyvsp[0].node)); }
#line 2565 "c.tab.cpp"
    break;

  case 94: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 235 "c.y"
                                                         { (yyval.node)= new ASTNode("Decl_specifiers", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2571 "c.tab.cpp"
    break;

  case 95: /* declaration_specifiers: storage_class_specifier  */
#line 236 "c.y"
                                  { (yyval.node)= (yyvsp[0].node); }
#line 2577 "c.tab.cpp"
    break;

  case 96: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 237 "c.y"
                                                { (yyval.node)= new ASTNode("Decl_specifiers", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2583 "c.tab.cpp"
    break;

  case 97: /* declaration_specifiers: type_specifier  */
#line 238 "c.y"
                        { (yyval.node)= new ASTNode("Decl_specifiers", (yyvsp[0].node)); }
#line 2589 "c.tab.cpp"
    break;

  case 98: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 239 "c.y"
                                                { (yyval.node)= new ASTNode("Decl_specifiers", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2595 "c.tab.cpp"
    break;

  case 99: /* declaration_specifiers: type_qualifier  */
#line 240 "c.y"
                         { (yyval.node)= new ASTNode("Decl_specifiers", (yyvsp[0].node)); }
#line 2601 "c.tab.cpp"
    break;

  case 100: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 241 "c.y"
                                                    { (yyval.node)= new ASTNode("Decl_specifiers", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2607 "c.tab.cpp"
    break;

  case 101: /* declaration_specifiers: function_specifier  */
#line 242 "c.y"
                             { (yyval.node)= new ASTNode("Decl_specifiers", (yyvsp[0].node)); }
#line 2613 "c.tab.cpp"
    break;

  case 102: /* declaration_specifiers: alignment_specifier declaration_specifiers  */
#line 243 "c.y"
                                                     { (yyval.node)= new ASTNode("Decl_specifiers", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2619 "c.tab.cpp"
    break;

  case 103: /* declaration_specifiers: alignment_specifier  */
#line 244 "c.y"
                              { (yyval.node)= new ASTNode("Decl_specifiers", (yyvsp[0].node)); }
#line 2625 "c.tab.cpp"
    break;

  case 104: /* init_declarator_list: init_declarator  */
#line 248 "c.y"
                           { (yyval.node)= new ASTNode("init_dec_list", (yyvsp[0].node)); }
#line 2631 "c.tab.cpp"
    break;

  case 105: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 249 "c.y"
                                                    { (yyval.node)= new ASTNode("init_dec_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2637 "c.tab.cpp"
    break;

  case 106: /* init_declarator: declarator '=' initializer  */
#line 253 "c.y"
                                     { (yyval.node)= new ASTNode("init_dec", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2643 "c.tab.cpp"
    break;

  case 107: /* init_declarator: declarator  */
#line 254 "c.y"
                     { (yyval.node)= new ASTNode("init_dec", (yyvsp[0].node)); }
#line 2649 "c.tab.cpp"
    break;

  case 108: /* storage_class_specifier: TYPEDEF  */
#line 258 "c.y"
                        { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2655 "c.tab.cpp"
    break;

  case 109: /* storage_class_specifier: EXTERN  */
#line 259 "c.y"
                 { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2661 "c.tab.cpp"
    break;

  case 110: /* storage_class_specifier: STATIC  */
#line 260 "c.y"
                 { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2667 "c.tab.cpp"
    break;

  case 111: /* storage_class_specifier: THREAD_LOCAL  */
#line 261 "c.y"
                       { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2673 "c.tab.cpp"
    break;

  case 112: /* storage_class_specifier: AUTO  */
#line 262 "c.y"
               { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2679 "c.tab.cpp"
    break;

  case 113: /* storage_class_specifier: REGISTER  */
#line 263 "c.y"
                   { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2685 "c.tab.cpp"
    break;

  case 114: /* type_specifier: VOID  */
#line 267 "c.y"
               { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2691 "c.tab.cpp"
    break;

  case 115: /* type_specifier: CHAR  */
#line 268 "c.y"
               { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2697 "c.tab.cpp"
    break;

  case 116: /* type_specifier: SHORT  */
#line 269 "c.y"
                { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2703 "c.tab.cpp"
    break;

  case 117: /* type_specifier: INT  */
#line 270 "c.y"
              { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2709 "c.tab.cpp"
    break;

  case 118: /* type_specifier: LONG  */
#line 271 "c.y"
               { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2715 "c.tab.cpp"
    break;

  case 119: /* type_specifier: FLOAT  */
#line 272 "c.y"
                { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2721 "c.tab.cpp"
    break;

  case 120: /* type_specifier: DOUBLE  */
#line 273 "c.y"
                 { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2727 "c.tab.cpp"
    break;

  case 121: /* type_specifier: SIGNED  */
#line 274 "c.y"
                 { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2733 "c.tab.cpp"
    break;

  case 122: /* type_specifier: UNSIGNED  */
#line 275 "c.y"
                   { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2739 "c.tab.cpp"
    break;

  case 123: /* type_specifier: BOOL  */
#line 276 "c.y"
               { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2745 "c.tab.cpp"
    break;

  case 124: /* type_specifier: COMPLEX  */
#line 277 "c.y"
                  { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2751 "c.tab.cpp"
    break;

  case 125: /* type_specifier: IMAGINARY  */
#line 278 "c.y"
                          { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2757 "c.tab.cpp"
    break;

  case 126: /* type_specifier: atomic_type_specifier  */
#line 279 "c.y"
                                { (yyval.node)= (yyvsp[0].node); }
#line 2763 "c.tab.cpp"
    break;

  case 127: /* type_specifier: struct_or_union_specifier  */
#line 280 "c.y"
                                    { (yyval.node)= (yyvsp[0].node); }
#line 2769 "c.tab.cpp"
    break;

  case 128: /* type_specifier: enum_specifier  */
#line 281 "c.y"
                         { (yyval.node)= (yyvsp[0].node); }
#line 2775 "c.tab.cpp"
    break;

  case 129: /* type_specifier: TYPEDEF_NAME  */
#line 282 "c.y"
                        { (yyvsp[0].node) = new ASTNode(yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2781 "c.tab.cpp"
    break;

  case 130: /* struct_or_union_specifier: struct_or_union '{' struct_declaration_list '}'  */
#line 286 "c.y"
                                                          { (yyval.node)= new ASTNode("struct_or_union_specifier", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2787 "c.tab.cpp"
    break;

  case 131: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 287 "c.y"
                                                                     { (yyvsp[-3].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("struct_or_union_specifier", (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2793 "c.tab.cpp"
    break;

  case 132: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 288 "c.y"
                                     { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("struct_or_union_specifier", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2799 "c.tab.cpp"
    break;

  case 133: /* struct_or_union: STRUCT  */
#line 292 "c.y"
                 { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= (yyvsp[0].node); }
#line 2805 "c.tab.cpp"
    break;

  case 134: /* struct_or_union: UNION  */
#line 293 "c.y"
                {(yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node) = (yyvsp[0].node); }
#line 2811 "c.tab.cpp"
    break;

  case 135: /* struct_declaration_list: struct_declaration  */
#line 297 "c.y"
                             { (yyval.node) = new ASTNode("struct_declaration_list", (yyvsp[0].node)); }
#line 2817 "c.tab.cpp"
    break;

  case 136: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 298 "c.y"
                                                     { (yyval.node) = new ASTNode("struct_declaration_list", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2823 "c.tab.cpp"
    break;

  case 137: /* struct_declaration: specifier_qualifier_list ';'  */
#line 302 "c.y"
                                                                         { (yyval.node) = new ASTNode("struct_declaration", (yyvsp[-1].node)); }
#line 2829 "c.tab.cpp"
    break;

  case 138: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 303 "c.y"
                                                              { (yyval.node) = new ASTNode("struct_declaration", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2835 "c.tab.cpp"
    break;

  case 139: /* struct_declaration: static_assert_declaration  */
#line 304 "c.y"
                                    { (yyval.node) = new ASTNode("struct_declaration", (yyvsp[0].node)); }
#line 2841 "c.tab.cpp"
    break;

  case 140: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 308 "c.y"
                                                  { (yyval.node) = new ASTNode("specifier_qualifier_list", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2847 "c.tab.cpp"
    break;

  case 141: /* specifier_qualifier_list: type_specifier  */
#line 309 "c.y"
                         { (yyval.node) = new ASTNode("specifier_qualifier_list", (yyvsp[0].node)); }
#line 2853 "c.tab.cpp"
    break;

  case 142: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 310 "c.y"
                                                  { (yyval.node) = new ASTNode("specifier_qualifier_list", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2859 "c.tab.cpp"
    break;

  case 143: /* specifier_qualifier_list: type_qualifier  */
#line 311 "c.y"
                         { (yyval.node) = new ASTNode("specifier_qualifier_list", (yyvsp[0].node)); }
#line 2865 "c.tab.cpp"
    break;

  case 144: /* struct_declarator_list: struct_declarator  */
#line 315 "c.y"
                            { (yyval.node) = new ASTNode("struct_declarator_list", (yyvsp[0].node)); }
#line 2871 "c.tab.cpp"
    break;

  case 145: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 316 "c.y"
                                                       { (yyval.node) = new ASTNode("struct_declarator_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2877 "c.tab.cpp"
    break;

  case 146: /* struct_declarator: ':' constant_expression  */
#line 320 "c.y"
                                  { (yyval.node) = new ASTNode("struct_declarator", (yyvsp[0].node)); }
#line 2883 "c.tab.cpp"
    break;

  case 147: /* struct_declarator: declarator ':' constant_expression  */
#line 321 "c.y"
                                             { (yyval.node) = new ASTNode("struct_declarator", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2889 "c.tab.cpp"
    break;

  case 148: /* struct_declarator: declarator  */
#line 322 "c.y"
                     { (yyval.node) = new ASTNode("struct_declarator", (yyvsp[0].node)); }
#line 2895 "c.tab.cpp"
    break;

  case 149: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 326 "c.y"
                                        { (yyval.node) = new ASTNode("enum_specifier", (yyvsp[-1].node)); }
#line 2901 "c.tab.cpp"
    break;

  case 150: /* enum_specifier: ENUM '{' enumerator_list ',' '}'  */
#line 327 "c.y"
                                           { (yyval.node) = new ASTNode("enum_specifier", (yyvsp[-2].node)); }
#line 2907 "c.tab.cpp"
    break;

  case 151: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 328 "c.y"
                                                   { (yyvsp[-3].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("enum_specifier", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2913 "c.tab.cpp"
    break;

  case 152: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list ',' '}'  */
#line 329 "c.y"
                                                       { (yyvsp[-4].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("enum_specifier", (yyvsp[-4].node), (yyvsp[-2].node)); }
#line 2919 "c.tab.cpp"
    break;

  case 153: /* enum_specifier: ENUM IDENTIFIER  */
#line 330 "c.y"
                           { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("enum_specifier", (yyvsp[0].node)); }
#line 2925 "c.tab.cpp"
    break;

  case 154: /* enumerator_list: enumerator  */
#line 334 "c.y"
                      { (yyval.node) = new ASTNode("enumerator_list", (yyvsp[0].node)); }
#line 2931 "c.tab.cpp"
    break;

  case 155: /* enumerator_list: enumerator_list ',' enumerator  */
#line 335 "c.y"
                                         { (yyval.node) = new ASTNode("enumerator_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2937 "c.tab.cpp"
    break;

  case 156: /* enumerator: enumeration_constant '=' constant_expression  */
#line 339 "c.y"
                                                       { (yyval.node) = new ASTNode("enumerator", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2943 "c.tab.cpp"
    break;

  case 157: /* enumerator: enumeration_constant  */
#line 340 "c.y"
                               { (yyval.node) = new ASTNode("enumerator", (yyvsp[0].node)); }
#line 2949 "c.tab.cpp"
    break;

  case 158: /* atomic_type_specifier: ATOMIC '(' type_name ')'  */
#line 344 "c.y"
                                    { (yyval.node) = new ASTNode("atomic_type_specifier", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2955 "c.tab.cpp"
    break;

  case 159: /* type_qualifier: CONST  */
#line 348 "c.y"
                { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= (yyvsp[0].node); }
#line 2961 "c.tab.cpp"
    break;

  case 160: /* type_qualifier: RESTRICT  */
#line 349 "c.y"
                   { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= (yyvsp[0].node); }
#line 2967 "c.tab.cpp"
    break;

  case 161: /* type_qualifier: VOLATILE  */
#line 350 "c.y"
                   { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= (yyvsp[0].node); }
#line 2973 "c.tab.cpp"
    break;

  case 162: /* type_qualifier: ATOMIC  */
#line 351 "c.y"
                 { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= (yyvsp[0].node); }
#line 2979 "c.tab.cpp"
    break;

  case 163: /* function_specifier: INLINE  */
#line 355 "c.y"
                 { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= (yyvsp[0].node); }
#line 2985 "c.tab.cpp"
    break;

  case 164: /* function_specifier: NORETURN  */
#line 356 "c.y"
                   { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= (yyvsp[0].node); }
#line 2991 "c.tab.cpp"
    break;

  case 165: /* alignment_specifier: ALIGNAS '(' type_name ')'  */
#line 360 "c.y"
                                     { (yyvsp[-3].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("alignment_specifier", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2997 "c.tab.cpp"
    break;

  case 166: /* alignment_specifier: ALIGNAS '(' constant_expression ')'  */
#line 361 "c.y"
                                              { (yyvsp[-3].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("alignment_specifier", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 3003 "c.tab.cpp"
    break;

  case 167: /* declarator: pointer direct_declarator  */
#line 365 "c.y"
                                      { (yyval.node) = new ASTNode("declarator", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3009 "c.tab.cpp"
    break;

  case 168: /* declarator: direct_declarator  */
#line 366 "c.y"
                            { (yyval.node) = new ASTNode("declarator", (yyvsp[0].node)); }
#line 3015 "c.tab.cpp"
    break;

  case 169: /* direct_declarator: IDENTIFIER  */
#line 370 "c.y"
                      { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("direct_declarator_identifier",  new ASTNode("Identifer",(yyvsp[0].node))); }
#line 3021 "c.tab.cpp"
    break;

  case 170: /* direct_declarator: '(' declarator ')'  */
#line 371 "c.y"
                             { (yyval.node) = new ASTNode("direct_declarator", (yyvsp[-1].node)); }
#line 3027 "c.tab.cpp"
    break;

  case 171: /* direct_declarator: direct_declarator '[' ']'  */
#line 372 "c.y"
                                     { (yyval.node) = (yyvsp[-2].node); }
#line 3033 "c.tab.cpp"
    break;

  case 172: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 373 "c.y"
                                         { (yyval.node) =  (yyvsp[-3].node); }
#line 3039 "c.tab.cpp"
    break;

  case 173: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 374 "c.y"
                                                                                     { (yyvsp[-3].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("direct_declarator_static", (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3045 "c.tab.cpp"
    break;

  case 174: /* direct_declarator: direct_declarator '[' STATIC assignment_expression ']'  */
#line 375 "c.y"
                                                                 { (yyvsp[-2].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("direct_declarator_static", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3051 "c.tab.cpp"
    break;

  case 175: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 376 "c.y"
                                                            { (yyval.node) = new ASTNode("direct_declarator", (yyvsp[-4].node), (yyvsp[-2].node)); }
#line 3057 "c.tab.cpp"
    break;

  case 176: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 377 "c.y"
                                                                                     { (yyvsp[-2].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("direct_declarator", (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3063 "c.tab.cpp"
    break;

  case 177: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 378 "c.y"
                                                                              { (yyval.node) = new ASTNode("direct_declarator", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3069 "c.tab.cpp"
    break;

  case 178: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 379 "c.y"
                                                        { (yyval.node) = new ASTNode("direct_declarator", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 3075 "c.tab.cpp"
    break;

  case 179: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 380 "c.y"
                                                          { (yyval.node) = new ASTNode("direct_declarator", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 3081 "c.tab.cpp"
    break;

  case 180: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 381 "c.y"
                                                       { (yyval.node) = new ASTNode("direct_declarator", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 3087 "c.tab.cpp"
    break;

  case 181: /* direct_declarator: direct_declarator '(' ')'  */
#line 382 "c.y"
                                     { (yyval.node) = new ASTNode("direct_declarator", (yyvsp[-2].node)); }
#line 3093 "c.tab.cpp"
    break;

  case 182: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 383 "c.y"
                                                    { (yyval.node) = new ASTNode("direct_declarator", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 3099 "c.tab.cpp"
    break;

  case 183: /* pointer: '*' type_qualifier_list pointer  */
#line 387 "c.y"
                                          { (yyval.node) = new ASTNode("pointer", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3105 "c.tab.cpp"
    break;

  case 184: /* pointer: '*' type_qualifier_list  */
#line 388 "c.y"
                                  { (yyval.node) = new ASTNode("pointer_list", (yyvsp[0].node)); }
#line 3111 "c.tab.cpp"
    break;

  case 185: /* pointer: '*' pointer  */
#line 389 "c.y"
                      { (yyval.node) = new ASTNode("pointer", (yyvsp[0].node)); }
#line 3117 "c.tab.cpp"
    break;

  case 186: /* pointer: '*'  */
#line 390 "c.y"
              {  (yyval.node)= new ASTNode("pointer");}
#line 3123 "c.tab.cpp"
    break;

  case 187: /* type_qualifier_list: type_qualifier  */
#line 394 "c.y"
                         { (yyval.node)= new ASTNode("type_qualifier_list", (yyvsp[0].node)); }
#line 3129 "c.tab.cpp"
    break;

  case 188: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 395 "c.y"
                                             { (yyval.node)= new ASTNode("type_qualifier_list", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3135 "c.tab.cpp"
    break;

  case 189: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 400 "c.y"
                                      { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("parameter_type_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3141 "c.tab.cpp"
    break;

  case 190: /* parameter_type_list: parameter_list  */
#line 401 "c.y"
                         { (yyval.node) = new ASTNode("parameter_type_list", (yyvsp[0].node)); }
#line 3147 "c.tab.cpp"
    break;

  case 191: /* parameter_list: parameter_declaration  */
#line 405 "c.y"
                                { (yyval.node)= new ASTNode("parameter_list", (yyvsp[0].node)); }
#line 3153 "c.tab.cpp"
    break;

  case 192: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 406 "c.y"
                                                   { (yyval.node)= new ASTNode("parameter_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3159 "c.tab.cpp"
    break;

  case 193: /* parameter_declaration: declaration_specifiers declarator  */
#line 410 "c.y"
                                            { (yyval.node)= new ASTNode("parameter_declaration", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3165 "c.tab.cpp"
    break;

  case 194: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 411 "c.y"
                                                     { (yyval.node)= new ASTNode("parameter_declaration", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3171 "c.tab.cpp"
    break;

  case 195: /* parameter_declaration: declaration_specifiers  */
#line 412 "c.y"
                                 { (yyval.node)= new ASTNode("parameter_declaration", (yyvsp[0].node)); }
#line 3177 "c.tab.cpp"
    break;

  case 196: /* identifier_list: IDENTIFIER  */
#line 416 "c.y"
                     { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("identifier_list", (yyvsp[0].node)); }
#line 3183 "c.tab.cpp"
    break;

  case 197: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 417 "c.y"
                                         { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("identifier_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3189 "c.tab.cpp"
    break;

  case 198: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 421 "c.y"
                                                       { (yyval.node)= new ASTNode("type_name", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3195 "c.tab.cpp"
    break;

  case 199: /* type_name: specifier_qualifier_list  */
#line 422 "c.y"
                                   { (yyval.node)= new ASTNode("type_name", (yyvsp[0].node)); }
#line 3201 "c.tab.cpp"
    break;

  case 200: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 426 "c.y"
                                             { (yyval.node)= new ASTNode("abstract_declarator", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3207 "c.tab.cpp"
    break;

  case 201: /* abstract_declarator: pointer  */
#line 427 "c.y"
                  { (yyval.node)= new ASTNode("abstract_declarator", (yyvsp[0].node)); }
#line 3213 "c.tab.cpp"
    break;

  case 202: /* abstract_declarator: direct_abstract_declarator  */
#line 428 "c.y"
                                     { (yyval.node)= new ASTNode("abstract_declarator", (yyvsp[0].node)); }
#line 3219 "c.tab.cpp"
    break;

  case 203: /* direct_abstract_declarator: '(' abstract_declarator ')'  */
#line 432 "c.y"
                                      { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-1].node)); }
#line 3225 "c.tab.cpp"
    break;

  case 204: /* direct_abstract_declarator: '[' ']'  */
#line 433 "c.y"
                  {}
#line 3231 "c.tab.cpp"
    break;

  case 205: /* direct_abstract_declarator: '[' '*' ']'  */
#line 434 "c.y"
                      {}
#line 3237 "c.tab.cpp"
    break;

  case 206: /* direct_abstract_declarator: '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 435 "c.y"
                                                                   { (yyvsp[-3].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-3].node), (yyvsp[-2].node)); }
#line 3243 "c.tab.cpp"
    break;

  case 207: /* direct_abstract_declarator: '[' STATIC assignment_expression ']'  */
#line 436 "c.y"
                                                { (yyvsp[-2].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3249 "c.tab.cpp"
    break;

  case 208: /* direct_abstract_declarator: '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 437 "c.y"
                                                                    { (yyvsp[-2].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3255 "c.tab.cpp"
    break;

  case 209: /* direct_abstract_declarator: '[' type_qualifier_list assignment_expression ']'  */
#line 438 "c.y"
                                                             { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3261 "c.tab.cpp"
    break;

  case 210: /* direct_abstract_declarator: '[' type_qualifier_list ']'  */
#line 439 "c.y"
                                       { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-1].node)); }
#line 3267 "c.tab.cpp"
    break;

  case 211: /* direct_abstract_declarator: '[' assignment_expression ']'  */
#line 440 "c.y"
                                         { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-1].node)); }
#line 3273 "c.tab.cpp"
    break;

  case 212: /* direct_abstract_declarator: direct_abstract_declarator '[' ']'  */
#line 441 "c.y"
                                              { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-2].node)); }
#line 3279 "c.tab.cpp"
    break;

  case 213: /* direct_abstract_declarator: direct_abstract_declarator '[' '*' ']'  */
#line 442 "c.y"
                                                  { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-3].node)); }
#line 3285 "c.tab.cpp"
    break;

  case 214: /* direct_abstract_declarator: direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 443 "c.y"
                                                                                               { (yyvsp[-3].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3291 "c.tab.cpp"
    break;

  case 215: /* direct_abstract_declarator: direct_abstract_declarator '[' STATIC assignment_expression ']'  */
#line 444 "c.y"
                                                                           { (yyvsp[-2].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3297 "c.tab.cpp"
    break;

  case 216: /* direct_abstract_declarator: direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 445 "c.y"
                                                                                        { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3303 "c.tab.cpp"
    break;

  case 217: /* direct_abstract_declarator: direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 446 "c.y"
                                                                                               { (yyvsp[-2].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 3309 "c.tab.cpp"
    break;

  case 218: /* direct_abstract_declarator: direct_abstract_declarator '[' type_qualifier_list ']'  */
#line 447 "c.y"
                                                                 { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 3315 "c.tab.cpp"
    break;

  case 219: /* direct_abstract_declarator: direct_abstract_declarator '[' assignment_expression ']'  */
#line 448 "c.y"
                                                                   { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 3321 "c.tab.cpp"
    break;

  case 220: /* direct_abstract_declarator: '(' ')'  */
#line 449 "c.y"
                  {}
#line 3327 "c.tab.cpp"
    break;

  case 221: /* direct_abstract_declarator: '(' parameter_type_list ')'  */
#line 450 "c.y"
                                      { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-1].node)); }
#line 3333 "c.tab.cpp"
    break;

  case 222: /* direct_abstract_declarator: direct_abstract_declarator '(' ')'  */
#line 451 "c.y"
                                             { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-2].node)); }
#line 3339 "c.tab.cpp"
    break;

  case 223: /* direct_abstract_declarator: direct_abstract_declarator '(' parameter_type_list ')'  */
#line 452 "c.y"
                                                                 { (yyval.node)= new ASTNode("direct_abstract_declarator", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 3345 "c.tab.cpp"
    break;

  case 224: /* initializer: '{' initializer_list '}'  */
#line 456 "c.y"
                                   { (yyval.node)= new ASTNode("init", (yyvsp[-1].node)); }
#line 3351 "c.tab.cpp"
    break;

  case 225: /* initializer: '{' initializer_list ',' '}'  */
#line 457 "c.y"
                                       { (yyval.node)= new ASTNode("init", (yyvsp[-2].node)); }
#line 3357 "c.tab.cpp"
    break;

  case 226: /* initializer: assignment_expression  */
#line 458 "c.y"
                                { (yyval.node)= new ASTNode("ass_exp", (yyvsp[0].node)); }
#line 3363 "c.tab.cpp"
    break;

  case 227: /* initializer_list: designation initializer  */
#line 462 "c.y"
                                  { (yyval.node)= new ASTNode("init_list", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3369 "c.tab.cpp"
    break;

  case 228: /* initializer_list: initializer  */
#line 463 "c.y"
                       { (yyval.node)= new ASTNode("init_list", (yyvsp[0].node)); }
#line 3375 "c.tab.cpp"
    break;

  case 229: /* initializer_list: initializer_list ',' designation initializer  */
#line 464 "c.y"
                                                       { (yyval.node)= new ASTNode("init_list", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 3381 "c.tab.cpp"
    break;

  case 230: /* initializer_list: initializer_list ',' initializer  */
#line 465 "c.y"
                                           { (yyval.node)= new ASTNode("init_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 3387 "c.tab.cpp"
    break;

  case 231: /* designation: designator_list '='  */
#line 469 "c.y"
                              { (yyval.node)= new ASTNode("designation", (yyvsp[-1].node)); }
#line 3393 "c.tab.cpp"
    break;

  case 232: /* designator_list: designator  */
#line 473 "c.y"
                      { (yyval.node)= new ASTNode("desig_list", (yyvsp[0].node)); }
#line 3399 "c.tab.cpp"
    break;

  case 233: /* designator_list: designator_list designator  */
#line 474 "c.y"
                                     { (yyval.node)= new ASTNode("desig_list", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3405 "c.tab.cpp"
    break;

  case 234: /* designator: '[' constant_expression ']'  */
#line 478 "c.y"
                                       { (yyval.node)= new ASTNode("designator", (yyvsp[-1].node)); }
#line 3411 "c.tab.cpp"
    break;

  case 235: /* designator: '.' IDENTIFIER  */
#line 479 "c.y"
                            { (yyvsp[0].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("designator", (yyvsp[0].node)); }
#line 3417 "c.tab.cpp"
    break;

  case 236: /* static_assert_declaration: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'  */
#line 483 "c.y"
                                                                           { (yyvsp[-6].node) = new ASTNode(yylval.str); (yyvsp[-2].node) = new ASTNode(yylval.str); (yyval.node)= new ASTNode("static_assert_declaration", (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node));}
#line 3423 "c.tab.cpp"
    break;

  case 237: /* statement: labeled_statement  */
#line 487 "c.y"
                            {(yyval.node) = (yyvsp[0].node);}
#line 3429 "c.tab.cpp"
    break;

  case 238: /* statement: compound_statement  */
#line 488 "c.y"
                             {(yyval.node) =  (yyvsp[0].node);}
#line 3435 "c.tab.cpp"
    break;

  case 239: /* statement: expression_statement  */
#line 489 "c.y"
                               {(yyval.node) = (yyvsp[0].node);}
#line 3441 "c.tab.cpp"
    break;

  case 240: /* statement: selection_statement  */
#line 490 "c.y"
                              {(yyval.node) = (yyvsp[0].node);}
#line 3447 "c.tab.cpp"
    break;

  case 241: /* statement: iteration_statement  */
#line 491 "c.y"
                              {(yyval.node) = (yyvsp[0].node);}
#line 3453 "c.tab.cpp"
    break;

  case 242: /* statement: jump_statement  */
#line 492 "c.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 3459 "c.tab.cpp"
    break;

  case 243: /* labeled_statement: IDENTIFIER ':' statement  */
#line 496 "c.y"
                                   {(yyvsp[-2].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("labeled_statement", (yyvsp[-2].node), (yyvsp[0].node));}
#line 3465 "c.tab.cpp"
    break;

  case 244: /* labeled_statement: CASE constant_expression ':' statement  */
#line 497 "c.y"
                                                 {(yyvsp[-3].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("labeled_statement", (yyvsp[-2].node), (yyvsp[0].node));}
#line 3471 "c.tab.cpp"
    break;

  case 245: /* labeled_statement: DEFAULT ':' statement  */
#line 498 "c.y"
                                {(yyvsp[-2].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("labeled_statement", (yyvsp[0].node));}
#line 3477 "c.tab.cpp"
    break;

  case 246: /* compound_statement: '{' '}'  */
#line 502 "c.y"
                  {(yyval.node) = nullptr;}
#line 3483 "c.tab.cpp"
    break;

  case 247: /* compound_statement: '{' block_item_list '}'  */
#line 503 "c.y"
                                   {(yyval.node) = new ASTNode("compound_statement", (yyvsp[-1].node));}
#line 3489 "c.tab.cpp"
    break;

  case 248: /* block_item_list: block_item  */
#line 507 "c.y"
                     {(yyval.node) = new ASTNode("block_item_list", (yyvsp[0].node));}
#line 3495 "c.tab.cpp"
    break;

  case 249: /* block_item_list: block_item_list block_item  */
#line 508 "c.y"
                                     {(yyval.node) = new ASTNode("block_item_list", (yyvsp[-1].node), (yyvsp[0].node));}
#line 3501 "c.tab.cpp"
    break;

  case 250: /* block_item: declaration  */
#line 512 "c.y"
                      {(yyval.node) = new ASTNode("block_item", (yyvsp[0].node));}
#line 3507 "c.tab.cpp"
    break;

  case 251: /* block_item: statement  */
#line 513 "c.y"
                    {(yyval.node) = new ASTNode("block_item", (yyvsp[0].node));}
#line 3513 "c.tab.cpp"
    break;

  case 252: /* expression_statement: ';'  */
#line 517 "c.y"
              {(yyval.node) = nullptr;}
#line 3519 "c.tab.cpp"
    break;

  case 253: /* expression_statement: expression ';'  */
#line 518 "c.y"
                         {(yyval.node) = new ASTNode("expression_statement", (yyvsp[-1].node));}
#line 3525 "c.tab.cpp"
    break;

  case 254: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 522 "c.y"
                                                         {(yyval.node) = new ASTNode("ITE", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));}
#line 3531 "c.tab.cpp"
    break;

  case 255: /* selection_statement: IF '(' expression ')' statement  */
#line 523 "c.y"
                                          {(yyval.node) = new ASTNode("IT", (yyvsp[-2].node), (yyvsp[0].node));}
#line 3537 "c.tab.cpp"
    break;

  case 256: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 524 "c.y"
                                              {(yyval.node) = new ASTNode("SWITCH", (yyvsp[-2].node), (yyvsp[0].node));}
#line 3543 "c.tab.cpp"
    break;

  case 257: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 528 "c.y"
                                             {(yyvsp[-4].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("iteration_statement", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));}
#line 3549 "c.tab.cpp"
    break;

  case 258: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 529 "c.y"
                                                    {(yyvsp[-6].node) = new ASTNode(yylval.str); (yyvsp[-5].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("iteration_statement", (yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-2].node));}
#line 3555 "c.tab.cpp"
    break;

  case 259: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 530 "c.y"
                                                                          {(yyvsp[-5].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("iteration_statement", (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));}
#line 3561 "c.tab.cpp"
    break;

  case 260: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 531 "c.y"
                                                                                     {(yyvsp[-6].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("iteration_statement", (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));}
#line 3567 "c.tab.cpp"
    break;

  case 261: /* iteration_statement: FOR '(' declaration expression_statement ')' statement  */
#line 532 "c.y"
                                                                 {(yyvsp[-5].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("iteration_statement", (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));}
#line 3573 "c.tab.cpp"
    break;

  case 262: /* iteration_statement: FOR '(' declaration expression_statement expression ')' statement  */
#line 533 "c.y"
                                                                            {(yyvsp[-6].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("iteration_statement", (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));}
#line 3579 "c.tab.cpp"
    break;

  case 263: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 537 "c.y"
                              {(yyvsp[-2].node) = new ASTNode(yylval.str); (yyvsp[-1].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("jump_statement", (yyvsp[-2].node), (yyvsp[-1].node));}
#line 3585 "c.tab.cpp"
    break;

  case 264: /* jump_statement: CONTINUE ';'  */
#line 538 "c.y"
                       {(yyvsp[-1].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("jump_statement", (yyvsp[-1].node));}
#line 3591 "c.tab.cpp"
    break;

  case 265: /* jump_statement: BREAK ';'  */
#line 539 "c.y"
                    {(yyvsp[-1].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("jump_statement", (yyvsp[-1].node));}
#line 3597 "c.tab.cpp"
    break;

  case 266: /* jump_statement: RETURN ';'  */
#line 540 "c.y"
                    {(yyvsp[-1].node) = new ASTNode(yylval.str); (yyval.node) = new ASTNode("jump_statement", (yyvsp[-1].node));}
#line 3603 "c.tab.cpp"
    break;

  case 267: /* jump_statement: RETURN expression ';'  */
#line 541 "c.y"
                                {(yyval.node) = new ASTNode("return", (yyvsp[-1].node));}
#line 3609 "c.tab.cpp"
    break;

  case 268: /* translation_unit: external_declaration  */
#line 545 "c.y"
                               {(yyval.node) = new ASTNode("Trans_unit", (yyvsp[0].node)); tree = (yyval.node);}
#line 3615 "c.tab.cpp"
    break;

  case 269: /* translation_unit: translation_unit external_declaration  */
#line 546 "c.y"
                                                {(yyval.node) = new ASTNode("Trans_unit", (yyvsp[-1].node), (yyvsp[0].node)); tree = (yyval.node); }
#line 3621 "c.tab.cpp"
    break;

  case 270: /* external_declaration: function_definition  */
#line 550 "c.y"
                              { (yyval.node)= new ASTNode("Ext_Dec", (yyvsp[0].node)); }
#line 3627 "c.tab.cpp"
    break;

  case 271: /* external_declaration: declaration  */
#line 551 "c.y"
                      { (yyval.node)= new ASTNode("Ext_Dec", (yyvsp[0].node)); }
#line 3633 "c.tab.cpp"
    break;

  case 272: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 555 "c.y"
                                                                                { (yyval.node)= new ASTNode("function_definition", (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3639 "c.tab.cpp"
    break;

  case 273: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 556 "c.y"
                                                               { (yyval.node)= new ASTNode("function_definition", (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3645 "c.tab.cpp"
    break;

  case 274: /* declaration_list: declaration  */
#line 560 "c.y"
                      { (yyval.node)= new ASTNode("decl_list", (yyvsp[0].node)); }
#line 3651 "c.tab.cpp"
    break;

  case 275: /* declaration_list: declaration_list declaration  */
#line 561 "c.y"
                                       { (yyval.node)= new ASTNode("decl_list", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 3657 "c.tab.cpp"
    break;


#line 3661 "c.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 564 "c.y"

#include <stdio.h>

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}
