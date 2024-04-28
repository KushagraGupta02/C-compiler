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

#line 89 "c.tab.cpp"

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
  YYSYMBOL_start = 101,                    /* start  */
  YYSYMBOL_primary_expression = 102,       /* primary_expression  */
  YYSYMBOL_constant = 103,                 /* constant  */
  YYSYMBOL_enumeration_constant = 104,     /* enumeration_constant  */
  YYSYMBOL_string = 105,                   /* string  */
  YYSYMBOL_generic_selection = 106,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 107,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 108,      /* generic_association  */
  YYSYMBOL_postfix_expression = 109,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 110, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 111,         /* unary_expression  */
  YYSYMBOL_unary_operator = 112,           /* unary_operator  */
  YYSYMBOL_cast_expression = 113,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 114, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 115,      /* additive_expression  */
  YYSYMBOL_shift_expression = 116,         /* shift_expression  */
  YYSYMBOL_relational_expression = 117,    /* relational_expression  */
  YYSYMBOL_equality_expression = 118,      /* equality_expression  */
  YYSYMBOL_and_expression = 119,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 120,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 121,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 122,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 123,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 124,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 125,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 126,      /* assignment_operator  */
  YYSYMBOL_expression = 127,               /* expression  */
  YYSYMBOL_constant_expression = 128,      /* constant_expression  */
  YYSYMBOL_declaration = 129,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 130,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 131,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 132,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 133,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 134,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 135, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 136,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 137,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 138,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 139, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 140,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 141,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 142,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 143,          /* enumerator_list  */
  YYSYMBOL_enumerator = 144,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 145,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 146,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 147,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 148,      /* alignment_specifier  */
  YYSYMBOL_declarator = 149,               /* declarator  */
  YYSYMBOL_direct_declarator = 150,        /* direct_declarator  */
  YYSYMBOL_pointer = 151,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 152,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 153,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 154,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 155,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 156,          /* identifier_list  */
  YYSYMBOL_type_name = 157,                /* type_name  */
  YYSYMBOL_abstract_declarator = 158,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 159, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 160,              /* initializer  */
  YYSYMBOL_initializer_list = 161,         /* initializer_list  */
  YYSYMBOL_designation = 162,              /* designation  */
  YYSYMBOL_designator_list = 163,          /* designator_list  */
  YYSYMBOL_designator = 164,               /* designator  */
  YYSYMBOL_static_assert_declaration = 165, /* static_assert_declaration  */
  YYSYMBOL_statement = 166,                /* statement  */
  YYSYMBOL_labeled_statement = 167,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 168,       /* compound_statement  */
  YYSYMBOL_block_item_list = 169,          /* block_item_list  */
  YYSYMBOL_block_item = 170,               /* block_item  */
  YYSYMBOL_expression_statement = 171,     /* expression_statement  */
  YYSYMBOL_selection_statement = 172,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 173,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 174,           /* jump_statement  */
  YYSYMBOL_translation_unit = 175,         /* translation_unit  */
  YYSYMBOL_external_declaration = 176,     /* external_declaration  */
  YYSYMBOL_function_definition = 177,      /* function_definition  */
  YYSYMBOL_declaration_list = 178          /* declaration_list  */
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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2362

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  278
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  483

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
       0,    65,    65,    73,    74,    75,    76,    77,    81,    82,
      83,    87,    91,    92,    96,   100,   101,   105,   106,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   124,
     125,   129,   130,   131,   132,   133,   134,   135,   139,   140,
     141,   142,   143,   144,   147,   148,   152,   153,   154,   155,
     159,   160,   161,   165,   166,   167,   171,   172,   173,   174,
     175,   179,   180,   181,   185,   186,   190,   191,   195,   196,
     200,   201,   205,   206,   210,   211,   215,   216,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   234,
     235,   239,   243,   244,   257,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   274,   275,   279,   280,   284,
     285,   286,   287,   288,   289,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   312,   313,   314,   318,   319,   323,   324,   328,   329,
     330,   334,   335,   336,   337,   341,   342,   346,   347,   348,
     352,   353,   354,   355,   356,   360,   361,   365,   366,   370,
     374,   375,   376,   377,   381,   382,   386,   387,   391,   402,
     406,   407,   408,   409,   410,   411,   412,   413,   415,   416,
     417,   420,   426,   429,   433,   434,   435,   436,   440,   441,
     446,   447,   451,   452,   456,   457,   464,   465,   466,   470,
     471,   475,   476,   480,   481,   482,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   510,   516,   517,
     521,   522,   523,   524,   528,   532,   533,   537,   538,   542,
     546,   547,   548,   549,   550,   551,   555,   556,   557,   561,
     562,   570,   571,   575,   576,   580,   581,   589,   593,   596,
     600,   603,   604,   605,   612,   613,   617,   618,   619,   620,
     621,   625,   626,   630,   631,   635,   636,   640,   641
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
  "$accept", "start", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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

#define YYPACT_NINF (-329)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2092,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,    29,   -19,   -17,  -329,    -7,
    -329,    25,  -329,    55,  2182,  2182,  -329,    35,  -329,  -329,
    2182,  2182,  2182,  -329,  2092,  -329,  -329,    11,   140,   874,
    2291,  1622,  -329,  -329,    20,   134,  -329,    45,  -329,  1778,
     118,    44,  -329,  -329,    46,  2220,  -329,  -329,  -329,  -329,
     140,  -329,    70,    67,  -329,  -329,  -329,  -329,  -329,  -329,
    1644,  1666,  1666,  -329,    84,   120,   874,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,   253,  -329,  1622,
    -329,   -46,    -9,   172,    39,   195,   114,   113,   122,   224,
      17,  -329,   177,  2291,   102,  2291,   184,   194,   171,   196,
    -329,  -329,  -329,   134,    20,  -329,   431,  1380,  -329,    55,
    -329,  1994,  1732,   962,   118,  2220,  1894,  -329,    48,  -329,
      78,  1622,    21,  -329,   874,  -329,   874,  -329,  -329,  2291,
    1622,   212,  -329,  -329,   139,   198,   276,  -329,  -329,  1402,
    1622,   282,  -329,  1622,  1622,  1622,  1622,  1622,  1622,  1622,
    1622,  1622,  1622,  1622,  1622,  1622,  1622,  1622,  1622,  1622,
    1622,  1622,  -329,  -329,  1845,   984,   121,  -329,   126,  -329,
    -329,  -329,   297,  -329,  -329,  -329,  -329,   206,   226,  1622,
     227,   232,   236,   237,   694,   240,   319,   225,   229,   738,
    -329,  -329,    47,  -329,  -329,  -329,  -329,   551,  -329,  -329,
    -329,  -329,  -329,  1358,  -329,  -329,  -329,  -329,  -329,  -329,
      62,   255,   252,  -329,   148,  1226,  -329,   256,   257,  1006,
    1941,  -329,  -329,  1622,  -329,    71,  -329,   261,    32,  -329,
    -329,  -329,  -329,   259,   264,   266,   267,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  1622,  -329,
    1622,  1490,  -329,  -329,   150,  -329,   -51,  -329,  -329,  -329,
    -329,   -46,   -46,    -9,    -9,   172,   172,   172,   172,    39,
      39,   195,   114,   113,   122,   224,   168,  -329,   269,   270,
    1226,  -329,   268,   271,  1094,   126,  2046,  1116,   273,   694,
     279,   694,  1622,  1622,  1622,   299,   641,   260,  -329,  -329,
    -329,    81,  -329,  -329,  -329,  1622,   359,  -329,    97,  1380,
     -54,  -329,   283,    77,  -329,  -329,  2138,  -329,   361,   284,
    1226,  -329,  -329,  1622,  -329,   285,   286,  -329,  -329,    85,
    -329,  1622,  -329,   287,   287,  -329,  2257,  -329,  -329,  1358,
    -329,  -329,  1622,  -329,  1622,  -329,  -329,   288,  1226,  -329,
    -329,  1622,  -329,   290,  -329,   291,  1226,  -329,   292,   293,
    1138,   278,  -329,   694,  -329,   175,   179,   182,   296,   784,
     784,  -329,  -329,   316,  -329,  1248,  -329,  -329,  -329,  -329,
     317,  -329,  -329,  -329,  -329,  -329,   320,   321,  -329,  -329,
    -329,  -329,   325,   191,  -329,   327,   105,  -329,  -329,  -329,
     326,   328,  -329,  -329,   329,  1226,  -329,  -329,  1622,  -329,
     330,  -329,  -329,   694,   694,   694,  1622,  1512,  1534,  -329,
    -329,  -329,  1380,  -329,  -329,  -329,  1622,  -329,  2257,  1622,
    1270,  -329,  -329,  -329,  -329,   331,   332,  -329,   318,  -329,
    -329,   200,   694,   204,   694,   222,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,   694,   301,  -329,   694,  -329,   694,  -329,
    -329,  -329,  -329
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   130,   109,   110,   111,   113,   114,   164,   160,   161,
     162,   124,   116,   117,   118,   119,   122,   123,   120,   121,
     115,   125,   126,   134,   135,     0,     0,   163,   165,     0,
     112,     0,   274,     0,    96,    98,   128,     0,   129,   127,
     100,   102,   104,    94,     2,   271,   273,   154,     0,     0,
       0,     0,     1,   170,     0,   187,    92,     0,   105,   108,
     169,     0,    95,    97,   133,     0,    99,   101,   103,   272,
       0,    11,   158,     0,   155,     3,     8,     9,    12,    13,
       0,     0,     0,    10,     0,     0,     0,    38,    39,    40,
      41,    42,    43,    19,     4,     5,     7,    31,    44,     0,
      46,    50,    53,    56,    61,    64,    66,    68,    70,    72,
      74,    91,     0,   142,   202,   144,     0,     0,     0,     0,
     163,   188,   186,   185,     0,    93,     0,     0,   277,     0,
     276,     0,     0,     0,   168,     0,     0,   136,     0,   140,
       0,     0,     0,   150,     0,    35,     0,    32,    33,     0,
       0,    44,    76,    89,     0,     0,     0,    25,    26,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,   141,     0,     0,   204,   201,   205,   143,
     166,   159,     0,   171,   189,   184,   106,   108,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     249,   255,     0,   253,   254,   240,   241,     0,   251,   242,
     243,   244,   245,     0,   229,   107,   278,   275,   199,   182,
     197,     0,   191,   192,     0,     0,   172,    39,     0,     0,
       0,   131,   137,     0,   138,     0,   145,   149,     0,   152,
     157,   151,   156,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    78,     0,     6,
       0,     0,    24,    21,     0,    29,     0,    23,    47,    48,
      49,    51,    52,    54,    55,    59,    60,    57,    58,    62,
      63,    65,    67,    69,    71,    73,     0,   223,     0,     0,
       0,   207,    39,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,   268,
     269,     0,   256,   250,   252,     0,     0,   231,     0,     0,
       0,   235,   194,   204,   196,   181,     0,   183,     0,     0,
       0,   173,   180,     0,   179,    39,     0,   132,   147,     0,
     139,     0,   153,    36,     0,    37,     0,    77,    90,     0,
      45,    22,     0,    20,     0,   224,   206,     0,     0,   208,
     214,     0,   213,     0,   225,     0,     0,   215,    39,     0,
       0,     0,   246,     0,   248,     0,     0,     0,     0,     0,
       0,   266,   270,     0,   238,     0,   227,   230,   234,   236,
       0,   195,   190,   193,   200,   175,     0,     0,   176,   178,
     146,   148,     0,     0,    15,     0,     0,    30,    75,   210,
       0,     0,   212,   226,     0,     0,   216,   222,     0,   221,
       0,   239,   247,     0,     0,     0,     0,     0,     0,   237,
     228,   233,     0,   198,   174,   177,     0,    14,     0,     0,
       0,    27,   209,   211,   218,     0,     0,   219,   258,   259,
     260,     0,     0,     0,     0,     0,   232,    18,    16,    17,
      28,   217,   220,     0,     0,   264,     0,   262,     0,   257,
     261,   265,   263
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,   -34,  -329,
    -329,   216,  -329,   -92,   123,   125,    51,   127,   241,   239,
     242,   244,   238,  -329,   -30,   -20,  -329,   -83,   -33,   -50,
       8,  -329,   295,  -329,   -45,  -329,  -329,   289,  -123,   -53,
    -329,    72,  -329,   355,  -120,  -329,   -49,  -329,  -329,   -23,
     366,   -21,  -100,  -169,  -329,    92,  -329,     6,  -155,  -175,
    -125,    73,  -328,  -329,   101,   -26,  -190,  -329,   -42,  -329,
     223,  -213,  -329,  -329,  -329,  -329,   389,  -329,  -329
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    31,    93,    94,    72,    95,    96,   413,   414,    97,
     274,   151,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   152,   153,   268,   212,   112,    32,
     129,    57,    58,    34,    35,    36,    37,   136,   137,   114,
     245,   246,    38,    73,    74,    39,    40,    41,    42,   197,
      60,    61,   123,   231,   232,   233,   234,   415,   187,   188,
     327,   328,   329,   330,   331,    43,   214,   215,   216,   217,
     218,   219,   220,   221,   222,    44,    45,    46,   131
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     115,   115,   225,   154,   113,   113,   121,   162,    33,   128,
      59,   305,   138,   242,   315,   298,   115,   130,   118,   111,
     113,   111,   252,    53,    71,    52,   325,   270,   326,   299,
     363,   119,    47,   239,   122,    71,   180,   115,    64,   139,
     163,   113,    62,    63,   398,   164,   165,    53,    66,    67,
      68,    53,    33,   170,   171,   116,   117,    49,    53,    50,
     183,   154,   189,   154,   115,   332,   115,   442,   113,    51,
     113,   278,   279,   280,   194,   334,   213,   276,   166,   167,
     401,   226,   138,   138,   121,   304,   115,   115,    53,   227,
     113,   113,   155,   186,    70,   115,    54,   115,   296,   113,
     115,   113,   195,   390,   113,   251,    55,   224,   250,   139,
     139,   111,    48,   238,   181,   247,   352,   242,    65,   382,
      54,   384,   442,   124,    54,   270,   321,   243,   252,   135,
     256,    54,   172,   173,    55,   340,   121,   375,   184,   275,
     230,    55,   185,    71,   125,   142,   322,   244,    55,   349,
     253,   143,   254,   184,    56,   255,   248,   185,   305,   270,
     149,    54,   249,   186,   243,   303,   310,   213,   141,   111,
     350,    55,     8,     9,    10,   395,   437,   438,   184,   360,
     392,   396,   185,   450,   168,   169,   121,   138,    55,   451,
     194,   115,   230,   432,   132,   113,   150,   184,   133,   176,
     368,   185,   306,   224,   397,   120,   307,   380,   177,   333,
     348,   174,   175,   111,   139,   339,   269,   270,   178,   346,
      55,   285,   286,   287,   288,   337,   338,   361,   362,   385,
     386,   387,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   179,   458,   459,   460,   270,   364,   357,   192,
     358,   121,   433,   270,   182,   194,   434,   270,   121,   435,
     270,   190,   156,   157,   158,    98,   389,    98,   447,   448,
     441,   191,   475,   193,   477,   271,   425,   474,   270,   272,
     367,   476,   270,   479,   373,   277,   481,   379,   482,   281,
     282,   194,   393,   283,   284,   111,   145,   147,   148,   478,
     270,   289,   290,   308,   127,   309,   311,   115,   312,   224,
     267,   113,   313,   314,   230,    98,   316,   466,   411,   194,
     406,   111,   317,   407,   318,   441,   247,   121,   319,   159,
     336,   194,   335,   160,   418,   161,   353,   341,   342,   224,
     351,   354,   417,   355,   230,   356,   365,   366,   420,   369,
     381,   421,   370,   461,   463,   465,   424,    98,   383,   391,
     430,   388,   394,   400,   404,   405,   408,   409,   423,   419,
     359,   422,   436,   426,   427,   224,   194,   431,   473,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,   439,   443,   115,
     480,   444,   445,   113,   446,   455,   449,   452,   456,   453,
     454,   457,   471,   472,   468,    98,   292,   291,   295,   196,
     293,   410,   224,   294,   240,   140,   467,   134,   403,   469,
     224,   399,   416,    69,   198,    76,    77,    78,    79,    80,
     324,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     1,    83,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    98,   199,   200,
     201,     0,   202,   203,   204,   205,   206,   207,   208,   209,
      26,    84,    27,    85,    28,    29,    30,    86,     0,     0,
       0,     0,     0,     0,   126,   210,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
     211,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   198,    76,    77,    78,    79,    80,
       0,    81,    82,     0,     0,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     1,    83,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,   199,   200,
     201,     0,   202,   203,   204,   205,   206,   207,   208,   209,
      26,    84,    27,    85,    28,    29,    30,    86,     0,     0,
       0,     0,     0,     0,   126,   323,    87,    88,    89,    90,
      91,    92,     0,     0,    75,    76,    77,    78,    79,    80,
     211,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    83,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   198,    76,    77,
      78,    79,    80,     0,    81,    82,     0,     0,     0,     0,
      26,    84,    27,    85,    28,    29,    30,    86,     0,     0,
       0,     0,     0,     0,     0,    83,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
     211,    75,    76,    77,    78,    79,    80,     0,    81,    82,
       0,   199,   200,   201,     0,   202,   203,   204,   205,   206,
     207,   208,   209,     0,    84,     0,    85,     0,     0,    83,
      86,     0,     0,     0,     0,     0,     0,   126,     0,    87,
      88,    89,    90,    91,    92,     0,     0,    75,    76,    77,
      78,    79,    80,   211,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
      85,     0,     0,     0,    86,    83,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,     0,
       0,     0,     0,     0,     0,     0,     0,   320,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,    85,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,     0,     0,    75,    76,    77,
      78,    79,    80,   211,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,    83,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    27,    85,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,    75,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,   235,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    83,    81,    82,   300,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,    84,   120,    85,     0,     0,    83,    86,     0,
     343,     0,     0,   236,     8,     9,    10,    87,   237,    89,
      90,    91,    92,     0,    84,   120,    85,     0,     0,     0,
      86,     0,     0,     0,     0,   301,     0,     0,     0,    87,
     302,    89,    90,    91,    92,     0,    84,   120,    85,     0,
       0,     0,    86,     0,     0,     0,     0,   344,     0,     0,
       0,    87,   345,    89,    90,    91,    92,    75,    76,    77,
      78,    79,    80,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    83,    81,    82,   371,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    83,    81,    82,
     376,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,    84,   120,    85,     0,     0,    83,
      86,     0,   428,     0,     0,   372,     8,     9,    10,    87,
      88,    89,    90,    91,    92,     0,    84,   120,    85,     0,
       0,     0,    86,     0,     0,     0,     0,   377,     0,     0,
       0,    87,   378,    89,    90,    91,    92,     0,    84,   120,
      85,     0,     0,     0,    86,     0,     0,     0,     0,   429,
       0,     0,     0,    87,    88,    89,    90,    91,    92,    75,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    83,    81,    82,
       0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,   120,    85,     0,
       0,    83,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,     0,    84,     0,
      85,     0,     0,     0,    86,     0,     0,     0,   325,     0,
     326,   223,   440,    87,    88,    89,    90,    91,    92,     0,
      84,     0,    85,     0,     0,     0,    86,     0,     0,     0,
     325,     0,   326,   223,   470,    87,    88,    89,    90,    91,
      92,    75,    76,    77,    78,    79,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    83,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
      85,     0,     0,    83,    86,     0,     0,     0,   325,     0,
     326,   223,     0,    87,    88,    89,    90,    91,    92,     0,
      84,     0,    85,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,   223,     0,    87,    88,    89,    90,    91,
      92,     0,    84,     0,    85,     0,     0,     0,    86,   273,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,    75,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    83,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,    85,     0,     0,    83,    86,     0,     0,     0,
       0,     0,     0,   359,     0,    87,    88,    89,    90,    91,
      92,     0,    84,     0,    85,     0,     0,     0,    86,   462,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,     0,    84,     0,    85,     0,     0,     0,
      86,   464,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,    75,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    83,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,    85,     0,     0,    83,    86,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,     0,    84,     0,    85,     0,     0,     0,
     144,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,   228,    84,     0,    85,     0,
       0,     0,   146,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,     1,   229,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   127,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,   184,   297,     0,     1,   185,     0,     0,     0,     0,
       0,    55,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    29,     0,
       0,     1,     0,     0,     0,     0,     0,     0,   241,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     1,   347,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     1,   126,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    30,     1,   374,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,    29,    30,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   402,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     1,    30,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    26,     0,    27,     0,    28,     0,    30,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,    27,     0,     0,    29,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,   412,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,    27,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      49,    50,   127,    86,    49,    50,    55,    99,     0,    59,
      33,   186,    65,   136,   204,   184,    65,    59,    51,    49,
      65,    51,   142,     3,     3,     0,    80,    78,    82,   184,
      81,    54,     3,   133,    55,     3,    19,    86,     3,    65,
      86,    86,    34,    35,    98,    91,    92,     3,    40,    41,
      42,     3,    44,    14,    15,    49,    50,    76,     3,    76,
     113,   144,   115,   146,   113,     3,   115,   395,   113,    76,
     115,   163,   164,   165,   123,   230,   126,   160,    87,    88,
       3,   131,   135,   136,   133,   185,   135,   136,     3,   131,
     135,   136,    86,   114,    83,   144,    76,   146,   181,   144,
     149,   146,   123,   316,   149,    84,    86,   127,   141,   135,
     136,   141,    83,   133,    97,   138,    84,   240,    83,   309,
      76,   311,   450,    78,    76,    78,   209,    79,   248,    83,
     150,    76,    93,    94,    86,   235,   185,   306,    76,   159,
     132,    86,    80,     3,    99,    78,    99,    99,    86,    78,
     144,    84,   146,    76,    99,   149,    78,    80,   333,    78,
      76,    76,    84,   184,    79,   185,   199,   217,    98,   199,
      99,    86,    38,    39,    40,    78,   389,   390,    76,   271,
      99,    84,    80,    78,    12,    13,   235,   240,    86,    84,
     239,   240,   184,   383,    76,   240,    76,    76,    80,    85,
     300,    80,    76,   223,   329,    71,    80,   307,    95,   230,
     243,    16,    17,   243,   240,   235,    77,    78,    96,   239,
      86,   170,   171,   172,   173,    77,    78,    77,    78,   312,
     313,   314,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    18,   433,   434,   435,    78,    79,   268,    78,
     270,   300,    77,    78,    77,   304,    77,    78,   307,    77,
      78,    77,     9,    10,    11,    49,   316,    51,    77,    78,
     395,    77,   462,    77,   464,    77,   376,    77,    78,     3,
     300,    77,    78,   473,   304,     3,   476,   307,   478,   166,
     167,   340,   325,   168,   169,   325,    80,    81,    82,    77,
      78,   174,   175,     6,    98,    79,    79,   356,    76,   329,
      98,   356,    76,    76,   306,    99,    76,   442,   351,   368,
     340,   351,     3,   343,    99,   450,   349,   376,    99,    76,
      78,   380,    77,    80,   364,    82,    77,    81,    81,   359,
      79,    77,   362,    77,   336,    78,    77,    77,   368,    81,
      77,   371,    81,   436,   437,   438,   376,   141,    79,    99,
     380,    62,     3,    80,     3,    81,    81,    81,    77,    81,
      83,    81,    76,    81,    81,   395,   425,    99,    60,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,    81,    81,   448,
      99,    81,    81,   448,    79,   425,    79,    81,   428,    81,
      81,    81,    81,    81,   448,   199,   177,   176,   180,   124,
     178,   349,   442,   179,   135,    70,   446,    61,   336,   449,
     450,   330,   359,    44,     3,     4,     5,     6,     7,     8,
     217,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,   271,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     364,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,    31,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,     3,     4,     5,
       6,     7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,     3,     4,     5,
       6,     7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,
      34,    -1,    -1,    81,    38,    39,    40,    85,    86,    87,
      88,    89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,
      76,    -1,    34,    -1,    -1,    81,    38,    39,    40,    85,
      86,    87,    88,    89,    90,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    80,    -1,
      82,    83,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    30,    77,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    98,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    -1,    30,    80,    -1,    -1,    -1,    -1,
      -1,    86,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    84,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    84,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    83,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    30,    77,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    30,    75,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    69,    -1,    71,    -1,    73,    -1,    75,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    71,    -1,    -1,    74,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    71,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   101,   129,   130,   133,   134,   135,   136,   142,   145,
     146,   147,   148,   165,   175,   176,   177,     3,    83,    76,
      76,    76,     0,     3,    76,    86,    99,   131,   132,   149,
     150,   151,   130,   130,     3,    83,   130,   130,   130,   176,
      83,     3,   104,   143,   144,     3,     4,     5,     6,     7,
       8,    10,    11,    31,    70,    72,    76,    85,    86,    87,
      88,    89,    90,   102,   103,   105,   106,   109,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   128,   134,   139,   146,   157,   157,   128,   149,
      71,   146,   151,   152,    78,    99,    83,    98,   129,   130,
     168,   178,    76,    80,   150,    83,   137,   138,   139,   165,
     143,    98,    78,    84,    76,   111,    76,   111,   111,    76,
      76,   111,   124,   125,   127,   157,     9,    10,    11,    76,
      80,    82,   113,    86,    91,    92,    87,    88,    12,    13,
      14,    15,    93,    94,    16,    17,    85,    95,    96,    18,
      19,    97,    77,   139,    76,    80,   151,   158,   159,   139,
      77,    77,    78,    77,   146,   151,   132,   149,     3,    57,
      58,    59,    61,    62,    63,    64,    65,    66,    67,    68,
      84,    99,   127,   129,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    83,   125,   160,   129,   168,     3,    77,
     130,   153,   154,   155,   156,    34,    81,    86,   125,   152,
     137,    84,   138,    79,    99,   140,   141,   149,    78,    84,
     128,    84,   144,   157,   157,   157,   125,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    98,   126,    77,
      78,    77,     3,    77,   110,   125,   127,     3,   113,   113,
     113,   114,   114,   115,   115,   116,   116,   116,   116,   117,
     117,   118,   119,   120,   121,   122,   127,    77,   153,   158,
      34,    81,    86,   125,   152,   159,    76,    80,     6,    79,
     128,    79,    76,    76,    76,   166,    76,     3,    99,    99,
      99,   127,    99,    84,   170,    80,    82,   160,   161,   162,
     163,   164,     3,   151,   158,    77,    78,    77,    78,   125,
     152,    81,    81,    34,    81,    86,   125,    84,   128,    78,
      99,    79,    84,    77,    77,    77,    78,   125,   125,    83,
     113,    77,    78,    81,    79,    77,    77,   125,   152,    81,
      81,    34,    81,   125,    77,   153,    34,    81,    86,   125,
     152,    77,   166,    79,   166,   127,   127,   127,    62,   129,
     171,    99,    99,   128,     3,    78,    84,   160,    98,   164,
      80,     3,    56,   155,     3,    81,   125,   125,    81,    81,
     141,   128,    58,   107,   108,   157,   161,   125,   124,    81,
     125,   125,    81,    77,   125,   152,    81,    81,    34,    81,
     125,    99,   166,    77,    77,    77,    76,   171,   171,    81,
      84,   160,   162,    81,    81,    81,    79,    77,    78,    79,
      78,    84,    81,    81,    81,   125,   125,    81,   166,   166,
     166,   127,    77,   127,    77,   127,   160,   125,   108,   125,
      84,    81,    81,    60,    77,   166,    77,   166,    77,   166,
      99,   166,   166
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   105,   105,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   111,   111,   111,   111,   111,   111,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   114,   114,
     115,   115,   115,   116,   116,   116,   117,   117,   117,   117,
     117,   118,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   127,
     127,   128,   129,   129,   129,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   132,   132,   133,
     133,   133,   133,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   139,   139,   140,   140,   141,   141,   141,
     142,   142,   142,   142,   142,   143,   143,   144,   144,   145,
     146,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   151,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   155,   155,   155,   156,
     156,   157,   157,   158,   158,   158,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   160,   160,   160,
     161,   161,   161,   161,   162,   163,   163,   164,   164,   165,
     166,   166,   166,   166,   166,   166,   167,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   172,   172,   172,
     173,   173,   173,   173,   173,   173,   174,   174,   174,   174,
     174,   175,   175,   176,   176,   177,   177,   178,   178
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     3,     3,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     5,     2,     1,     1,     1,     2,     2,     3,
       1,     2,     1,     2,     1,     1,     3,     2,     3,     1,
       4,     5,     5,     6,     2,     1,     3,     3,     1,     4,
       1,     1,     1,     1,     1,     1,     4,     4,     2,     1,
       1,     3,     3,     4,     6,     5,     5,     6,     5,     4,
       4,     4,     3,     4,     3,     2,     2,     1,     1,     2,
       3,     1,     1,     3,     2,     3,     2,     1,     4,     1,
       3,     2,     1,     2,     1,     1,     3,     2,     3,     5,
       4,     5,     4,     3,     3,     3,     4,     6,     5,     5,
       6,     4,     4,     2,     3,     3,     4,     3,     4,     1,
       2,     1,     4,     3,     2,     1,     2,     3,     2,     7,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     7,     5,     5,
       5,     7,     6,     7,     6,     7,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     1,     2
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
  case 2: /* start: translation_unit  */
#line 65 "c.y"
                           {ASTNode* root = new ASTNode(ASTNode::TRANSLATION_UNIT, "START"); (yyval.node) = root; 
	for(int i = 0; i < (yyvsp[0].list)->nodelist.size(); i++) {
			(yyval.node)->addChild((yyvsp[0].list)->nodelist[i]);
		}
	tree = (yyval.node);}
#line 2002 "c.tab.cpp"
    break;

  case 3: /* primary_expression: IDENTIFIER  */
#line 73 "c.y"
                     { (yyvsp[0].node) = new ASTNode(ASTNode::IDENTIFIER, yylval.str); (yyval.node)= (yyvsp[0].node);}
#line 2008 "c.tab.cpp"
    break;

  case 4: /* primary_expression: constant  */
#line 74 "c.y"
                   { (yyval.node)= (yyvsp[0].node);}
#line 2014 "c.tab.cpp"
    break;

  case 5: /* primary_expression: string  */
#line 75 "c.y"
                 { (yyval.node)= (yyvsp[0].node);}
#line 2020 "c.tab.cpp"
    break;

  case 6: /* primary_expression: '(' expression ')'  */
#line 76 "c.y"
                             { (yyval.node)= (yyvsp[-1].list)->nodelist[0];}
#line 2026 "c.tab.cpp"
    break;

  case 7: /* primary_expression: generic_selection  */
#line 77 "c.y"
                            { (yyval.node)= (yyvsp[0].node);}
#line 2032 "c.tab.cpp"
    break;

  case 8: /* constant: I_CONSTANT  */
#line 81 "c.y"
                                { (yyvsp[0].node) = new ASTNode(ASTNode::INT, yylval.str); (yyval.node)= (yyvsp[0].node);}
#line 2038 "c.tab.cpp"
    break;

  case 9: /* constant: F_CONSTANT  */
#line 82 "c.y"
                        { (yyvsp[0].node) = new ASTNode(ASTNode::FLOAT, yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2044 "c.tab.cpp"
    break;

  case 10: /* constant: ENUMERATION_CONSTANT  */
#line 83 "c.y"
                                 { (yyvsp[0].node) = new ASTNode(ASTNode::ENUM, yylval.str); (yyval.node)= (yyvsp[0].node);}
#line 2050 "c.tab.cpp"
    break;

  case 11: /* enumeration_constant: IDENTIFIER  */
#line 87 "c.y"
                     { (yyvsp[0].node) = new ASTNode(ASTNode::TYPE, yylval.str), (yyval.node)=(yyvsp[0].node); }
#line 2056 "c.tab.cpp"
    break;

  case 12: /* string: STRING_LITERAL  */
#line 91 "c.y"
                         { (yyvsp[0].node) = new ASTNode(ASTNode::STRING, yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2062 "c.tab.cpp"
    break;

  case 13: /* string: FUNC_NAME  */
#line 92 "c.y"
                    { (yyvsp[0].node) = new ASTNode(ASTNode::FUNC_NAME, yylval.str);(yyval.node)= (yyvsp[0].node);}
#line 2068 "c.tab.cpp"
    break;

  case 19: /* postfix_expression: primary_expression  */
#line 111 "c.y"
                             { (yyval.node)= (yyvsp[0].node); }
#line 2074 "c.tab.cpp"
    break;

  case 25: /* postfix_expression: postfix_expression INC_OP  */
#line 117 "c.y"
                                    {(yyval.node) = new ASTNode(ASTNode::UNEXP, "POSTINCR", (yyvsp[-1].node));}
#line 2080 "c.tab.cpp"
    break;

  case 26: /* postfix_expression: postfix_expression DEC_OP  */
#line 118 "c.y"
                                    {(yyval.node) = new ASTNode(ASTNode::UNEXP, "POSTDECR", (yyvsp[-1].node));}
#line 2086 "c.tab.cpp"
    break;

  case 38: /* unary_operator: '&'  */
#line 139 "c.y"
              {(yyval.node) = new ASTNode(ASTNode::UNOP, "&");}
#line 2092 "c.tab.cpp"
    break;

  case 39: /* unary_operator: '*'  */
#line 140 "c.y"
              {(yyval.node) = new ASTNode(ASTNode::UNOP, "*");}
#line 2098 "c.tab.cpp"
    break;

  case 40: /* unary_operator: '+'  */
#line 141 "c.y"
              {(yyval.node) = new ASTNode(ASTNode::UNOP, "+");}
#line 2104 "c.tab.cpp"
    break;

  case 41: /* unary_operator: '-'  */
#line 142 "c.y"
              {(yyval.node) = new ASTNode(ASTNode::UNOP, "-");}
#line 2110 "c.tab.cpp"
    break;

  case 42: /* unary_operator: '~'  */
#line 143 "c.y"
              {(yyval.node) = new ASTNode(ASTNode::UNOP, "~");}
#line 2116 "c.tab.cpp"
    break;

  case 43: /* unary_operator: '!'  */
#line 144 "c.y"
              {(yyval.node) = new ASTNode(ASTNode::UNOP, "!");}
#line 2122 "c.tab.cpp"
    break;

  case 44: /* cast_expression: unary_expression  */
#line 147 "c.y"
                           {(yyval.node) = (yyvsp[0].node);}
#line 2128 "c.tab.cpp"
    break;

  case 46: /* multiplicative_expression: cast_expression  */
#line 152 "c.y"
                          {(yyval.node) = (yyvsp[0].node);}
#line 2134 "c.tab.cpp"
    break;

  case 47: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 153 "c.y"
                                                        {(yyval.node) = new ASTNode(ASTNode::BINEXP, "TIMES", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2140 "c.tab.cpp"
    break;

  case 48: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 154 "c.y"
                                                        {(yyval.node) = new ASTNode(ASTNode::BINEXP, "DIV", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2146 "c.tab.cpp"
    break;

  case 49: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 155 "c.y"
                                                        {(yyval.node) = new ASTNode(ASTNode::BINEXP, "MOD", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2152 "c.tab.cpp"
    break;

  case 50: /* additive_expression: multiplicative_expression  */
#line 159 "c.y"
                                    {(yyval.node) = (yyvsp[0].node);}
#line 2158 "c.tab.cpp"
    break;

  case 51: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 160 "c.y"
                                                            {(yyval.node) = new ASTNode(ASTNode::BINEXP, "PLUS", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2164 "c.tab.cpp"
    break;

  case 52: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 161 "c.y"
                                                            {(yyval.node) = new ASTNode(ASTNode::BINEXP, "MINUS", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2170 "c.tab.cpp"
    break;

  case 53: /* shift_expression: additive_expression  */
#line 165 "c.y"
                              {(yyval.node) = (yyvsp[0].node);}
#line 2176 "c.tab.cpp"
    break;

  case 54: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 166 "c.y"
                                                       {(yyval.node) = new ASTNode(ASTNode::BINEXP, "<<", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2182 "c.tab.cpp"
    break;

  case 55: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 167 "c.y"
                                                        {(yyval.node) = new ASTNode(ASTNode::BINEXP, ">>", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2188 "c.tab.cpp"
    break;

  case 56: /* relational_expression: shift_expression  */
#line 171 "c.y"
                           {(yyval.node) = (yyvsp[0].node);}
#line 2194 "c.tab.cpp"
    break;

  case 57: /* relational_expression: relational_expression '<' shift_expression  */
#line 172 "c.y"
                                                     {(yyval.node) = new ASTNode(ASTNode::BINEXP, "LT", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2200 "c.tab.cpp"
    break;

  case 58: /* relational_expression: relational_expression '>' shift_expression  */
#line 173 "c.y"
                                                     {(yyval.node) = new ASTNode(ASTNode::BINEXP, "GT", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2206 "c.tab.cpp"
    break;

  case 59: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 174 "c.y"
                                                       {(yyval.node) = new ASTNode(ASTNode::BINEXP, "LE", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2212 "c.tab.cpp"
    break;

  case 60: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 175 "c.y"
                                                       {(yyval.node) = new ASTNode(ASTNode::BINEXP, "GE", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2218 "c.tab.cpp"
    break;

  case 61: /* equality_expression: relational_expression  */
#line 179 "c.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 2224 "c.tab.cpp"
    break;

  case 62: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 180 "c.y"
                                                          {(yyval.node) = new ASTNode(ASTNode::BINEXP, "EQ", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2230 "c.tab.cpp"
    break;

  case 63: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 181 "c.y"
                                                          {(yyval.node) = new ASTNode(ASTNode::BINEXP, "NEQ", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2236 "c.tab.cpp"
    break;

  case 64: /* and_expression: equality_expression  */
#line 185 "c.y"
                              {(yyval.node) = (yyvsp[0].node);}
#line 2242 "c.tab.cpp"
    break;

  case 65: /* and_expression: and_expression '&' equality_expression  */
#line 186 "c.y"
                                                 {(yyval.node) = new ASTNode(ASTNode::BINEXP, "&", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2248 "c.tab.cpp"
    break;

  case 66: /* exclusive_or_expression: and_expression  */
#line 190 "c.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 2254 "c.tab.cpp"
    break;

  case 67: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 191 "c.y"
                                                     {(yyval.node) = new ASTNode(ASTNode::BINEXP, "XOR", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2260 "c.tab.cpp"
    break;

  case 68: /* inclusive_or_expression: exclusive_or_expression  */
#line 195 "c.y"
                                  {(yyval.node) = (yyvsp[0].node);}
#line 2266 "c.tab.cpp"
    break;

  case 69: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 196 "c.y"
                                                              {(yyval.node) = new ASTNode(ASTNode::BINEXP, "IOR", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2272 "c.tab.cpp"
    break;

  case 70: /* logical_and_expression: inclusive_or_expression  */
#line 200 "c.y"
                                  {(yyval.node) = (yyvsp[0].node);}
#line 2278 "c.tab.cpp"
    break;

  case 71: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 201 "c.y"
                                                                {(yyval.node) = new ASTNode(ASTNode::BINEXP, "AND", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2284 "c.tab.cpp"
    break;

  case 72: /* logical_or_expression: logical_and_expression  */
#line 205 "c.y"
                                 {(yyval.node) = (yyvsp[0].node);}
#line 2290 "c.tab.cpp"
    break;

  case 73: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 206 "c.y"
                                                             {(yyval.node) = new ASTNode(ASTNode::BINEXP, "OR", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2296 "c.tab.cpp"
    break;

  case 74: /* conditional_expression: logical_or_expression  */
#line 210 "c.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 2302 "c.tab.cpp"
    break;

  case 76: /* assignment_expression: conditional_expression  */
#line 215 "c.y"
                                 {(yyval.node) = (yyvsp[0].node);}
#line 2308 "c.tab.cpp"
    break;

  case 77: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 216 "c.y"
                                                                     {(yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "ASSIGN", (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2314 "c.tab.cpp"
    break;

  case 78: /* assignment_operator: '='  */
#line 220 "c.y"
                                {(yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "=");}
#line 2320 "c.tab.cpp"
    break;

  case 79: /* assignment_operator: MUL_ASSIGN  */
#line 221 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "*=");}
#line 2326 "c.tab.cpp"
    break;

  case 80: /* assignment_operator: DIV_ASSIGN  */
#line 222 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "/=");}
#line 2332 "c.tab.cpp"
    break;

  case 81: /* assignment_operator: MOD_ASSIGN  */
#line 223 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "%=");}
#line 2338 "c.tab.cpp"
    break;

  case 82: /* assignment_operator: ADD_ASSIGN  */
#line 224 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "+=");}
#line 2344 "c.tab.cpp"
    break;

  case 83: /* assignment_operator: SUB_ASSIGN  */
#line 225 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "-=");}
#line 2350 "c.tab.cpp"
    break;

  case 86: /* assignment_operator: AND_ASSIGN  */
#line 228 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "&=");}
#line 2356 "c.tab.cpp"
    break;

  case 87: /* assignment_operator: XOR_ASSIGN  */
#line 229 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "^=");}
#line 2362 "c.tab.cpp"
    break;

  case 88: /* assignment_operator: OR_ASSIGN  */
#line 230 "c.y"
                                {(yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "|=");}
#line 2368 "c.tab.cpp"
    break;

  case 89: /* expression: assignment_expression  */
#line 234 "c.y"
                                {(yyval.list) = new ASTNodeList((yyvsp[0].node));}
#line 2374 "c.tab.cpp"
    break;

  case 90: /* expression: expression ',' assignment_expression  */
#line 235 "c.y"
                                               {(yyvsp[-2].list)->nodelist.push_back((yyvsp[0].node)); (yyval.list) = (yyvsp[-2].list);}
#line 2380 "c.tab.cpp"
    break;

  case 93: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 244 "c.y"
                                                          { std::cout << "declaration entered" <<std::endl;
		(yyval.node) = new ASTNode(ASTNode::VARDEC, "DECLARATIONS");
		std::cout << "declaration1" <<std::endl;
		(yyval.node)->addChild((yyvsp[-2].node));
		std::cout << "declaration2" <<std::endl;
		int i = 0;
		while (i < (yyvsp[-1].list)->nodelist.size()) {
			(yyval.node)->addChild((yyvsp[-1].list)->nodelist[i]);
			i++;
			std::cout << "declaration" << i <<std::endl;
		}
		std::cout << "declaration exited" <<std::endl;
	}
#line 2398 "c.tab.cpp"
    break;

  case 98: /* declaration_specifiers: type_specifier  */
#line 264 "c.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 2404 "c.tab.cpp"
    break;

  case 100: /* declaration_specifiers: type_qualifier  */
#line 266 "c.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 2410 "c.tab.cpp"
    break;

  case 105: /* init_declarator_list: init_declarator  */
#line 274 "c.y"
                          {(yyval.list) = new ASTNodeList((yyvsp[0].node)); std::cout << "init_declarator_list" <<std::endl;}
#line 2416 "c.tab.cpp"
    break;

  case 106: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 275 "c.y"
                                                   {(yyvsp[-2].list)->nodelist.push_back((yyvsp[0].node)); (yyval.list) = (yyvsp[-2].list); std::cout << "init_declarator_list_decl" <<std::endl;}
#line 2422 "c.tab.cpp"
    break;

  case 107: /* init_declarator: declarator '=' initializer  */
#line 279 "c.y"
                                     {ASTNode* tmp = new ASTNode(ASTNode::ASSIGNEXP, "="); (yyval.node) = new ASTNode(ASTNode::ASSIGNEXP, "ASSIGN", (yyvsp[-2].node), tmp, (yyvsp[0].node));}
#line 2428 "c.tab.cpp"
    break;

  case 108: /* init_declarator: declarator  */
#line 280 "c.y"
                     {(yyval.node) = (yyvsp[0].node);}
#line 2434 "c.tab.cpp"
    break;

  case 115: /* type_specifier: VOID  */
#line 293 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "VOID");}
#line 2440 "c.tab.cpp"
    break;

  case 116: /* type_specifier: CHAR  */
#line 294 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "CHAR");}
#line 2446 "c.tab.cpp"
    break;

  case 117: /* type_specifier: SHORT  */
#line 295 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "SHORT");}
#line 2452 "c.tab.cpp"
    break;

  case 118: /* type_specifier: INT  */
#line 296 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "INT");}
#line 2458 "c.tab.cpp"
    break;

  case 119: /* type_specifier: LONG  */
#line 297 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "LONG");}
#line 2464 "c.tab.cpp"
    break;

  case 120: /* type_specifier: FLOAT  */
#line 298 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "FLOAT");}
#line 2470 "c.tab.cpp"
    break;

  case 121: /* type_specifier: DOUBLE  */
#line 299 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "DOUBLE");}
#line 2476 "c.tab.cpp"
    break;

  case 122: /* type_specifier: SIGNED  */
#line 300 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "SIGNED");}
#line 2482 "c.tab.cpp"
    break;

  case 123: /* type_specifier: UNSIGNED  */
#line 301 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "UNSIGNED");}
#line 2488 "c.tab.cpp"
    break;

  case 124: /* type_specifier: BOOL  */
#line 302 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "BOOL");}
#line 2494 "c.tab.cpp"
    break;

  case 125: /* type_specifier: COMPLEX  */
#line 303 "c.y"
                        {(yyval.node) = new ASTNode(ASTNode::TYPE, "COMPLEX");}
#line 2500 "c.tab.cpp"
    break;

  case 168: /* declarator: pointer direct_declarator  */
#line 391 "c.y"
                                    {int np = (yyvsp[-1].i);
	ASTNode* pointer = new ASTNode(ASTNode::POINTER, "POINTER");
	(yyval.node) = pointer;
	ASTNode* tmp1;
	for(int i = 0; i < np-1; i++) {
		tmp1 = new ASTNode(ASTNode::POINTER, "POINTER");
		pointer->addChild(tmp1);
		pointer = tmp1;
	}
	pointer -> addChild((yyvsp[0].node));
	}
#line 2516 "c.tab.cpp"
    break;

  case 169: /* declarator: direct_declarator  */
#line 402 "c.y"
                            {(yyval.node) = (yyvsp[0].node);}
#line 2522 "c.tab.cpp"
    break;

  case 170: /* direct_declarator: IDENTIFIER  */
#line 406 "c.y"
                     {(yyval.node) = new ASTNode(ASTNode::IDENTIFIER, yylval.str); std::cout << yylval.str << endl;}
#line 2528 "c.tab.cpp"
    break;

  case 172: /* direct_declarator: direct_declarator '[' ']'  */
#line 408 "c.y"
                                    {(yyval.node) = new ASTNode(ASTNode::ARRAY, "ARRAY"); (yyval.node)->addChild((yyvsp[-2].node)); }
#line 2534 "c.tab.cpp"
    break;

  case 180: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 417 "c.y"
                                                          {(yyval.node) = new ASTNode(ASTNode::ARRAY, "ARRAY", (yyvsp[-3].node), (yyvsp[-1].node));
	}
#line 2541 "c.tab.cpp"
    break;

  case 181: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 420 "c.y"
                                                        {(yyval.node) = new ASTNode(ASTNode::FUNCDEF, "FUNCDEF"); 
	(yyval.node)->addChild((yyvsp[-3].node)); 
	for(int i = 0; i < (yyvsp[-1].list)->nodelist.size(); i++) {
			(yyval.node)->addChild((yyvsp[-1].list)->nodelist[i]);
		}
	}
#line 2552 "c.tab.cpp"
    break;

  case 182: /* direct_declarator: direct_declarator '(' ')'  */
#line 426 "c.y"
                                    {(yyval.node) = new ASTNode(ASTNode::FUNCDEF, "FUNCDEF"); 
	(yyval.node)->addChild((yyvsp[-2].node)); 
	}
#line 2560 "c.tab.cpp"
    break;

  case 186: /* pointer: '*' pointer  */
#line 435 "c.y"
                      {(yyval.i) = (yyvsp[0].i) + 1;}
#line 2566 "c.tab.cpp"
    break;

  case 187: /* pointer: '*'  */
#line 436 "c.y"
              {(yyval.i) = 1;}
#line 2572 "c.tab.cpp"
    break;

  case 191: /* parameter_type_list: parameter_list  */
#line 447 "c.y"
                         {(yyval.list) = (yyvsp[0].list);}
#line 2578 "c.tab.cpp"
    break;

  case 192: /* parameter_list: parameter_declaration  */
#line 451 "c.y"
                                {(yyval.list) = new ASTNodeList((yyvsp[0].node));}
#line 2584 "c.tab.cpp"
    break;

  case 193: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 452 "c.y"
                                                   {(yyvsp[-2].list)->nodelist.push_back((yyvsp[0].node)); (yyval.list) = (yyvsp[-2].list);}
#line 2590 "c.tab.cpp"
    break;

  case 194: /* parameter_declaration: declaration_specifiers IDENTIFIER  */
#line 456 "c.y"
                                            {(yyval.node) = new ASTNode(ASTNode::PARAM, "PARAM"); (yyval.node)->addChild((yyvsp[-1].node)); ASTNode* id = new ASTNode(ASTNode::IDENTIFIER, yylval.str); (yyval.node)->addChild(id);}
#line 2596 "c.tab.cpp"
    break;

  case 195: /* parameter_declaration: declaration_specifiers pointer IDENTIFIER  */
#line 457 "c.y"
                                                    {(yyval.node) = new ASTNode(ASTNode::PARAM, "PARAM"); 
	int ptrs = (yyvsp[-1].i);
	for(int i =0; i<ptrs; i++){
		(yyvsp[-2].node)->val = (yyvsp[-2].node)->val + "*";
	}
	(yyval.node)->addChild((yyvsp[-2].node)); 
	ASTNode* id = new ASTNode(ASTNode::IDENTIFIER, yylval.str); (yyval.node)->addChild(id);}
#line 2608 "c.tab.cpp"
    break;

  case 198: /* parameter_declaration: declaration_specifiers IDENTIFIER '[' ']'  */
#line 466 "c.y"
                                                    {(yyval.node) = new ASTNode(ASTNode::PARAM, "PARAM", (yyvsp[-3].node)); ASTNode* id = new ASTNode(ASTNode::IDENTIFIER, yylval.str); ASTNode* arr = new ASTNode(ASTNode::ARRAY, "ARRAY", id); (yyval.node)->addChild(arr);}
#line 2614 "c.tab.cpp"
    break;

  case 227: /* initializer: '{' initializer_list '}'  */
#line 510 "c.y"
                                  {	
		(yyval.node) = new ASTNode(ASTNode::LIST, "LIST");	
		for(int i = 0; i < (yyvsp[-1].list)->nodelist.size(); i++) {
			(yyval.node)->addChild((yyvsp[-1].list)->nodelist[i]);
		}
		}
#line 2625 "c.tab.cpp"
    break;

  case 229: /* initializer: assignment_expression  */
#line 517 "c.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 2631 "c.tab.cpp"
    break;

  case 231: /* initializer_list: initializer  */
#line 522 "c.y"
                      {(yyval.list) = new ASTNodeList((yyvsp[0].node));}
#line 2637 "c.tab.cpp"
    break;

  case 233: /* initializer_list: initializer_list ',' initializer  */
#line 524 "c.y"
                                           {(yyvsp[-2].list)->nodelist.push_back((yyvsp[0].node)); (yyval.list) = (yyvsp[-2].list);}
#line 2643 "c.tab.cpp"
    break;

  case 240: /* statement: labeled_statement  */
#line 546 "c.y"
                            {(yyval.node) = (yyvsp[0].node);}
#line 2649 "c.tab.cpp"
    break;

  case 241: /* statement: compound_statement  */
#line 547 "c.y"
                             {(yyval.node) = (yyvsp[0].node);}
#line 2655 "c.tab.cpp"
    break;

  case 242: /* statement: expression_statement  */
#line 548 "c.y"
                               {(yyval.node) = (yyvsp[0].node);}
#line 2661 "c.tab.cpp"
    break;

  case 243: /* statement: selection_statement  */
#line 549 "c.y"
                              {(yyval.node) = (yyvsp[0].node);}
#line 2667 "c.tab.cpp"
    break;

  case 244: /* statement: iteration_statement  */
#line 550 "c.y"
                              {(yyval.node) = (yyvsp[0].node);}
#line 2673 "c.tab.cpp"
    break;

  case 245: /* statement: jump_statement  */
#line 551 "c.y"
                         {(yyval.node) = (yyvsp[0].node);}
#line 2679 "c.tab.cpp"
    break;

  case 249: /* compound_statement: '{' '}'  */
#line 561 "c.y"
                  {(yyval.node) = new ASTNode(ASTNode::BLOCK, "STBLOCK"); std::cout << "BLOCK" << endl;}
#line 2685 "c.tab.cpp"
    break;

  case 250: /* compound_statement: '{' block_item_list '}'  */
#line 562 "c.y"
                                   {(yyval.node) = new ASTNode(ASTNode::BLOCK, "STBLOCK");
		for(int i = 0; i < (yyvsp[-1].list)->nodelist.size(); i++) {
			(yyval.node)->addChild((yyvsp[-1].list)->nodelist[i]);
		}
	}
#line 2695 "c.tab.cpp"
    break;

  case 251: /* block_item_list: block_item  */
#line 570 "c.y"
                     {(yyval.list) = new ASTNodeList((yyvsp[0].node));}
#line 2701 "c.tab.cpp"
    break;

  case 252: /* block_item_list: block_item_list block_item  */
#line 571 "c.y"
                                     {(yyvsp[-1].list)->nodelist.push_back((yyvsp[0].node)); (yyval.list) = (yyvsp[-1].list);}
#line 2707 "c.tab.cpp"
    break;

  case 253: /* block_item: declaration  */
#line 575 "c.y"
                      {(yyval.node) = (yyvsp[0].node);}
#line 2713 "c.tab.cpp"
    break;

  case 254: /* block_item: statement  */
#line 576 "c.y"
                    {(yyval.node) = (yyvsp[0].node);}
#line 2719 "c.tab.cpp"
    break;

  case 256: /* expression_statement: expression ';'  */
#line 581 "c.y"
                         {(yyval.node) = new ASTNode(ASTNode::EXPRESSION, "EXPBLOCK");
		for(int i = 0; i < (yyvsp[-1].list)->nodelist.size(); i++) {
			(yyval.node)->addChild((yyvsp[-1].list)->nodelist[i]);
		}
	}
#line 2729 "c.tab.cpp"
    break;

  case 257: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 589 "c.y"
                                                         {(yyval.node) = new ASTNode(ASTNode::ITE, "ITE"); 
		(yyval.node)->addChild((yyvsp[-4].list)->nodelist[0]);
		(yyval.node)->addChild((yyvsp[-2].node)); (yyval.node)->addChild((yyvsp[0].node));
	}
#line 2738 "c.tab.cpp"
    break;

  case 258: /* selection_statement: IF '(' expression ')' statement  */
#line 593 "c.y"
                                          {(yyval.node) = new ASTNode(ASTNode::ITE, "ITE"); 
		(yyval.node)->addChild((yyvsp[-2].list)->nodelist[0]); (yyval.node)->addChild((yyvsp[0].node));
	}
#line 2746 "c.tab.cpp"
    break;

  case 260: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 600 "c.y"
                                             { (yyval.node) = new ASTNode(ASTNode::WHILE, "WHILE");
		(yyval.node)->addChild((yyvsp[-2].list)->nodelist[0]);
		(yyval.node)->addChild((yyvsp[0].node)); }
#line 2754 "c.tab.cpp"
    break;

  case 263: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 606 "c.y"
        { (yyval.node) = new ASTNode(ASTNode::FOR, "FOR");
		(yyval.node)->addChild((yyvsp[-4].node));
		(yyval.node)->addChild((yyvsp[-3].node)); 
		(yyval.node)->addChild((yyvsp[-2].list)->nodelist[0]);
		(yyval.node)->addChild((yyvsp[0].node)); 
		}
#line 2765 "c.tab.cpp"
    break;

  case 266: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 617 "c.y"
                              {ASTNode* child = new ASTNode(ASTNode::IDENTIFIER, yylval.str); (yyval.node) = new ASTNode(ASTNode::GOTO, "GOTO", child); }
#line 2771 "c.tab.cpp"
    break;

  case 269: /* jump_statement: RETURN ';'  */
#line 620 "c.y"
                     {}
#line 2777 "c.tab.cpp"
    break;

  case 270: /* jump_statement: RETURN expression ';'  */
#line 621 "c.y"
                                {(yyval.node) = new ASTNode(ASTNode::RETURN, "RETURN",(yyvsp[-1].list)->nodelist[0]);}
#line 2783 "c.tab.cpp"
    break;

  case 271: /* translation_unit: external_declaration  */
#line 625 "c.y"
                               {(yyval.list) = new ASTNodeList((yyvsp[0].node));}
#line 2789 "c.tab.cpp"
    break;

  case 272: /* translation_unit: translation_unit external_declaration  */
#line 626 "c.y"
                                                {(yyvsp[-1].list)->nodelist.push_back((yyvsp[0].node)); (yyval.list) = (yyvsp[-1].list);}
#line 2795 "c.tab.cpp"
    break;

  case 273: /* external_declaration: function_definition  */
#line 630 "c.y"
                              {(yyval.node) = (yyvsp[0].node);}
#line 2801 "c.tab.cpp"
    break;

  case 274: /* external_declaration: declaration  */
#line 631 "c.y"
                      {(yyval.node) = (yyvsp[0].node);}
#line 2807 "c.tab.cpp"
    break;

  case 275: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 635 "c.y"
                                                                                {(yyval.node) = new ASTNode(ASTNode::FUNC_NAME, "FUNCTION"); (yyval.node)->addChild((yyvsp[-3].node)); (yyval.node)->addChild((yyvsp[-2].node)); (yyval.node)->addChild((yyvsp[-1].node)); (yyval.node)->addChild((yyvsp[0].node));}
#line 2813 "c.tab.cpp"
    break;

  case 276: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 636 "c.y"
                                                               {(yyval.node) = new ASTNode(ASTNode::FUNC_NAME, "FUNCTION"); (yyval.node)->addChild((yyvsp[-2].node)); (yyval.node)->addChild((yyvsp[-1].node)); (yyval.node)->addChild((yyvsp[0].node)); }
#line 2819 "c.tab.cpp"
    break;


#line 2823 "c.tab.cpp"

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

#line 644 "c.y"

#include <stdio.h>

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}
