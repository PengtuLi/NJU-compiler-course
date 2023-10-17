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
#line 3 "./syntax.y"

#include "node.h"
typedef unsigned char uint8_t;
int yylex();
int yyerror(const char* msg, ...);

uint8_t right = 1;

int ignore_line = 0;
int syserr = 0;
int myerr = 0;
Node* root;

#line 85 "./syntax.tab.c"

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

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ASSIGNOP = 3,                   /* ASSIGNOP  */
  YYSYMBOL_OR = 4,                         /* OR  */
  YYSYMBOL_AND = 5,                        /* AND  */
  YYSYMBOL_RELOP = 6,                      /* RELOP  */
  YYSYMBOL_PLUS = 7,                       /* PLUS  */
  YYSYMBOL_MINUS = 8,                      /* MINUS  */
  YYSYMBOL_STAR = 9,                       /* STAR  */
  YYSYMBOL_DIV = 10,                       /* DIV  */
  YYSYMBOL_NOT = 11,                       /* NOT  */
  YYSYMBOL_LP = 12,                        /* LP  */
  YYSYMBOL_RP = 13,                        /* RP  */
  YYSYMBOL_LB = 14,                        /* LB  */
  YYSYMBOL_RB = 15,                        /* RB  */
  YYSYMBOL_DOT = 16,                       /* DOT  */
  YYSYMBOL_INT = 17,                       /* INT  */
  YYSYMBOL_FLOAT = 18,                     /* FLOAT  */
  YYSYMBOL_ID = 19,                        /* ID  */
  YYSYMBOL_STRUCT = 20,                    /* STRUCT  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_TYPE = 25,                      /* TYPE  */
  YYSYMBOL_SEMI = 26,                      /* SEMI  */
  YYSYMBOL_COMMA = 27,                     /* COMMA  */
  YYSYMBOL_LC = 28,                        /* LC  */
  YYSYMBOL_RC = 29,                        /* RC  */
  YYSYMBOL_YYACCEPT = 30,                  /* $accept  */
  YYSYMBOL_Program = 31,                   /* Program  */
  YYSYMBOL_ExtDefList = 32,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 33,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 34,                /* ExtDecList  */
  YYSYMBOL_Specifier = 35,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 36,           /* StructSpecifier  */
  YYSYMBOL_OptTag = 37,                    /* OptTag  */
  YYSYMBOL_Tag = 38,                       /* Tag  */
  YYSYMBOL_VarDec = 39,                    /* VarDec  */
  YYSYMBOL_FunDec = 40,                    /* FunDec  */
  YYSYMBOL_VarList = 41,                   /* VarList  */
  YYSYMBOL_ParamDec = 42,                  /* ParamDec  */
  YYSYMBOL_CompSt = 43,                    /* CompSt  */
  YYSYMBOL_StmtList = 44,                  /* StmtList  */
  YYSYMBOL_Stmt = 45,                      /* Stmt  */
  YYSYMBOL_DefList = 46,                   /* DefList  */
  YYSYMBOL_Def = 47,                       /* Def  */
  YYSYMBOL_DecList = 48,                   /* DecList  */
  YYSYMBOL_Dec = 49,                       /* Dec  */
  YYSYMBOL_Exp = 50,                       /* Exp  */
  YYSYMBOL_Args = 51                       /* Args  */
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
typedef yytype_uint8 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   459

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    44,    45,    47,    48,    49,    50,    51,
      53,    54,    55,    56,    60,    61,    63,    64,    65,    67,
      68,    70,    74,    75,    76,    77,    79,    80,    81,    82,
      84,    85,    87,    91,    92,    94,    95,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   110,   111,   113,
     114,   116,   117,   118,   119,   121,   122,   123,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   161,   162
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ASSIGNOP", "OR",
  "AND", "RELOP", "PLUS", "MINUS", "STAR", "DIV", "NOT", "LP", "RP", "LB",
  "RB", "DOT", "INT", "FLOAT", "ID", "STRUCT", "RETURN", "IF", "ELSE",
  "WHILE", "TYPE", "SEMI", "COMMA", "LC", "RC", "$accept", "Program",
  "ExtDefList", "ExtDef", "ExtDecList", "Specifier", "StructSpecifier",
  "OptTag", "Tag", "VarDec", "FunDec", "VarList", "ParamDec", "CompSt",
  "StmtList", "Stmt", "DefList", "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-52)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     113,    -1,    14,  -135,    56,  -135,   113,   126,  -135,  -135,
      32,    48,  -135,  -135,  -135,    74,    80,  -135,    73,    18,
      87,    30,    26,   148,  -135,   110,     7,   110,    46,  -135,
     107,     2,   114,    26,   110,   118,   117,   138,  -135,   149,
    -135,  -135,   152,   155,  -135,   134,    61,  -135,   139,    88,
     145,    22,  -135,  -135,   158,  -135,    26,  -135,  -135,  -135,
    -135,  -135,   165,   181,   193,   205,  -135,  -135,   162,   217,
     163,   166,  -135,   167,    61,   102,  -135,   229,  -135,   110,
     110,  -135,  -135,  -135,     1,  -135,     1,   182,   354,   168,
     171,   116,   129,   129,  -135,  -135,  -135,   241,   253,   265,
     277,   289,   301,   313,   325,   337,   183,  -135,  -135,   410,
    -135,  -135,  -135,  -135,    -4,  -135,   150,   190,  -135,  -135,
    -135,   368,   382,  -135,   410,  -135,   422,  -135,   433,  -135,
     443,  -135,   174,  -135,   174,  -135,     1,  -135,     1,   124,
     396,  -135,  -135,  -135,   129,  -135,    76,    76,  -135,  -135,
    -135,  -135,   184,  -135,    76,  -135
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    19,    14,     0,     2,     0,     0,    15,     8,
      21,     0,    17,     1,     4,     9,    22,     6,     0,     0,
       0,     0,     0,     0,     5,    13,     0,     0,     0,     7,
       0,     0,     0,    47,     0,     0,    31,     0,    27,     0,
      22,    12,    25,     0,    11,     0,     0,    18,     0,    55,
       0,     0,    16,    48,    32,    29,     0,    28,    26,    24,
      23,    34,     0,     0,     0,     0,    74,    75,    73,     0,
       0,     0,    38,     0,     0,     0,    50,     0,    49,    54,
       0,    30,    43,    85,    67,    86,    68,     0,     0,     0,
       0,     0,     0,     0,    33,    36,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    57,    56,
      53,    52,    84,    66,     0,    70,    92,     0,    46,    45,
      39,     0,     0,    76,    58,    78,    60,    77,    59,    79,
      61,    80,    62,    81,    63,    82,    64,    83,    65,     0,
       0,    72,    87,    88,     0,    69,     0,     0,    89,    90,
      71,    91,    40,    42,     0,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,   202,  -135,    -9,     5,  -135,  -135,  -135,   -27,
    -135,   -13,  -135,   189,   140,  -134,    68,  -135,    55,  -135,
     -63,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    18,    31,     8,    11,    12,    19,
      20,    35,    36,    72,    73,    74,    32,    33,    50,    51,
      75,   117
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,    86,    88,    48,    49,     7,    91,    54,    42,   142,
      39,     7,   152,   153,   109,   105,    41,   106,    44,    25,
     155,    40,   143,    79,    43,     9,   116,    34,    34,   121,
     122,    30,    26,    10,   124,   126,   128,   130,   132,   134,
     136,   138,   140,    81,   -10,    27,     2,    45,   -51,    80,
       2,     3,    49,    49,   -47,     3,    13,   -47,   -47,   -47,
     -20,    34,    62,   -47,   -47,   -47,     2,   -47,   -47,    63,
     -47,     3,    64,    65,   -47,   -47,    21,    62,    66,    67,
      68,   116,    69,    70,    63,    71,    22,    64,    65,    28,
     -35,    77,    23,    66,    67,    68,    46,    69,    70,    24,
      71,    53,    26,    96,    28,    97,    98,    99,   100,   101,
     102,   103,   104,    -3,     1,    28,   105,   119,   106,    97,
      98,    99,   100,   101,   102,   103,   104,    15,   107,    40,
     105,    55,   106,     2,   110,   111,    47,    63,     3,   148,
      64,    65,   120,    52,    56,    16,    66,    67,    68,    37,
     149,    57,    17,    97,    98,    99,   100,   101,   102,   103,
     104,    38,    58,    61,   105,    76,   106,    59,     2,   114,
      60,    78,    26,     3,    89,    92,    63,   144,    93,    64,
      65,   115,    83,   103,   104,    66,    67,    68,   105,    63,
     106,    82,    64,    65,    85,   112,    94,   118,    66,    67,
      68,    63,   141,   145,    64,    65,    87,   154,    14,    29,
      66,    67,    68,    63,    95,   151,    64,    65,    90,     0,
       0,     0,    66,    67,    68,    63,     0,     0,    64,    65,
     108,     0,     0,     0,    66,    67,    68,    63,     0,     0,
      64,    65,   123,     0,     0,     0,    66,    67,    68,    63,
       0,     0,    64,    65,   125,     0,     0,     0,    66,    67,
      68,    63,     0,     0,    64,    65,   127,     0,     0,     0,
      66,    67,    68,    63,     0,     0,    64,    65,   129,     0,
       0,     0,    66,    67,    68,    63,     0,     0,    64,    65,
     131,     0,     0,     0,    66,    67,    68,    63,     0,     0,
      64,    65,   133,     0,     0,     0,    66,    67,    68,    63,
       0,     0,    64,    65,   135,     0,     0,     0,    66,    67,
      68,    63,     0,     0,    64,    65,   137,     0,     0,     0,
      66,    67,    68,    63,     0,     0,    64,    65,   139,     0,
       0,     0,    66,    67,    68,    63,     0,     0,    64,    65,
       0,     0,     0,     0,    66,    67,    68,    97,    98,    99,
     100,   101,   102,   103,   104,     0,     0,   113,   105,     0,
     106,    97,    98,    99,   100,   101,   102,   103,   104,     0,
       0,   146,   105,     0,   106,    97,    98,    99,   100,   101,
     102,   103,   104,     0,     0,   147,   105,     0,   106,    97,
      98,    99,   100,   101,   102,   103,   104,     0,     0,     0,
     105,   150,   106,    97,    98,    99,   100,   101,   102,   103,
     104,     0,     0,     0,   105,     0,   106,    99,   100,   101,
     102,   103,   104,     0,     0,     0,   105,     0,   106,   100,
     101,   102,   103,   104,     0,     0,     0,   105,     0,   106,
     101,   102,   103,   104,     0,     0,     0,   105,     0,   106
};

static const yytype_int16 yycheck[] =
{
      63,    64,    65,     1,    31,     0,    69,    34,     1,    13,
      23,     6,   146,   147,    77,    14,    25,    16,    27,     1,
     154,    19,    26,     1,    17,    26,    89,    22,    23,    92,
      93,     1,    14,    19,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    56,    26,    27,    20,     1,    26,    27,
      20,    25,    79,    80,     8,    25,     0,    11,    12,    29,
      28,    56,     1,    17,    18,    19,    20,    21,    22,     8,
      24,    25,    11,    12,    28,    29,    28,     1,    17,    18,
      19,   144,    21,    22,     8,    24,    12,    11,    12,    28,
      29,     3,    12,    17,    18,    19,    28,    21,    22,    26,
      24,    33,    14,     1,    28,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     1,    28,    14,     1,    16,     3,
       4,     5,     6,     7,     8,     9,    10,     1,    26,    19,
      14,    13,    16,    20,    79,    80,    29,     8,    25,    15,
      11,    12,    26,    29,    27,    19,    17,    18,    19,     1,
      26,    13,    26,     3,     4,     5,     6,     7,     8,     9,
      10,    13,    13,    29,    14,    26,    16,    15,    20,     1,
      15,    26,    14,    25,    12,    12,     8,    27,    12,    11,
      12,    13,     1,     9,    10,    17,    18,    19,    14,     8,
      16,    26,    11,    12,     1,    13,    29,    26,    17,    18,
      19,     8,    19,    13,    11,    12,     1,    23,     6,    20,
      17,    18,    19,     8,    74,   144,    11,    12,     1,    -1,
      -1,    -1,    17,    18,    19,     8,    -1,    -1,    11,    12,
       1,    -1,    -1,    -1,    17,    18,    19,     8,    -1,    -1,
      11,    12,     1,    -1,    -1,    -1,    17,    18,    19,     8,
      -1,    -1,    11,    12,     1,    -1,    -1,    -1,    17,    18,
      19,     8,    -1,    -1,    11,    12,     1,    -1,    -1,    -1,
      17,    18,    19,     8,    -1,    -1,    11,    12,     1,    -1,
      -1,    -1,    17,    18,    19,     8,    -1,    -1,    11,    12,
       1,    -1,    -1,    -1,    17,    18,    19,     8,    -1,    -1,
      11,    12,     1,    -1,    -1,    -1,    17,    18,    19,     8,
      -1,    -1,    11,    12,     1,    -1,    -1,    -1,    17,    18,
      19,     8,    -1,    -1,    11,    12,     1,    -1,    -1,    -1,
      17,    18,    19,     8,    -1,    -1,    11,    12,     1,    -1,
      -1,    -1,    17,    18,    19,     8,    -1,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    14,    -1,
      16,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    16,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    16,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    16,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    16,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    20,    25,    31,    32,    33,    35,    36,    26,
      19,    37,    38,     0,    32,     1,    19,    26,    34,    39,
      40,    28,    12,    12,    26,     1,    14,    27,    28,    43,
       1,    35,    46,    47,    35,    41,    42,     1,    13,    41,
      19,    34,     1,    17,    34,     1,    46,    29,     1,    39,
      48,    49,    29,    46,    39,    13,    27,    13,    13,    15,
      15,    29,     1,     8,    11,    12,    17,    18,    19,    21,
      22,    24,    43,    44,    45,    50,    26,     3,    26,     1,
      27,    41,    26,     1,    50,     1,    50,     1,    50,    12,
       1,    50,    12,    12,    29,    44,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    14,    16,    26,     1,    50,
      48,    48,    13,    13,     1,    13,    50,    51,    26,     1,
      26,    50,    50,     1,    50,     1,    50,     1,    50,     1,
      50,     1,    50,     1,    50,     1,    50,     1,    50,     1,
      50,    19,    13,    26,    27,    13,    13,    13,    15,    26,
      15,    51,    45,    45,    23,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    33,    33,    33,    33,    33,
      34,    34,    34,    34,    35,    35,    36,    36,    36,    37,
      37,    38,    39,    39,    39,    39,    40,    40,    40,    40,
      41,    41,    42,    43,    43,    44,    44,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    46,    46,    47,
      47,    48,    48,    48,    48,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    51,    51
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     2,     3,     2,     2,
       1,     3,     3,     2,     1,     1,     5,     2,     5,     0,
       1,     1,     1,     4,     4,     3,     4,     3,     4,     4,
       3,     1,     2,     4,     3,     0,     2,     2,     1,     3,
       5,     7,     5,     2,     2,     3,     3,     0,     2,     3,
       3,     1,     3,     3,     2,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     4,
       3,     4,     3,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     4,     4,     4,
       4,     3,     1
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: ExtDefList  */
#line 42 "./syntax.y"
                     {root = newNode("Program", 1, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 1670 "./syntax.tab.c"
    break;

  case 3: /* ExtDefList: %empty  */
#line 44 "./syntax.y"
                        {(yyval.node) = newNode("ExtDefList", 1, Null);}
#line 1676 "./syntax.tab.c"
    break;

  case 4: /* ExtDefList: ExtDef ExtDefList  */
#line 45 "./syntax.y"
                        {(yyval.node) = newNode("ExtDefList", 2, Nter, 2, (yylsp[-1]).first_line, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1682 "./syntax.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 47 "./syntax.y"
                                    {(yyval.node) = newNode("ExtDef", 1, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1688 "./syntax.tab.c"
    break;

  case 6: /* ExtDef: Specifier SEMI  */
#line 48 "./syntax.y"
                                    {(yyval.node) = newNode("ExtDef", 2, Nter, 2, (yylsp[-1]).first_line, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1694 "./syntax.tab.c"
    break;

  case 7: /* ExtDef: Specifier FunDec CompSt  */
#line 49 "./syntax.y"
                                    {(yyval.node) = newNode("ExtDef", 3, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1700 "./syntax.tab.c"
    break;

  case 8: /* ExtDef: error SEMI  */
#line 50 "./syntax.y"
                                    {yyerror("Missing type or Wrong type", (yylsp[-1]).first_line); yyerrok;}
#line 1706 "./syntax.tab.c"
    break;

  case 9: /* ExtDef: Specifier error  */
#line 51 "./syntax.y"
                                    {yyerror("Possibly missing \";\" at this or last line", (yylsp[0]).first_line); yyerrok;}
#line 1712 "./syntax.tab.c"
    break;

  case 10: /* ExtDecList: VarDec  */
#line 53 "./syntax.y"
                                {(yyval.node) = newNode("ExtDecList", 1, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 1718 "./syntax.tab.c"
    break;

  case 11: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 54 "./syntax.y"
                                {(yyval.node) = newNode("ExtDecList", 2, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1724 "./syntax.tab.c"
    break;

  case 12: /* ExtDecList: VarDec error ExtDecList  */
#line 55 "./syntax.y"
                                {yyerror("Missing \",\"", (yylsp[-1]).first_line); yyerrok;}
#line 1730 "./syntax.tab.c"
    break;

  case 13: /* ExtDecList: VarDec error  */
#line 56 "./syntax.y"
                                {yyerror("Possibly missing \";\" at this or last line", (yylsp[0]).first_line); yyerrok;}
#line 1736 "./syntax.tab.c"
    break;

  case 14: /* Specifier: TYPE  */
#line 60 "./syntax.y"
                        {(yyval.node) = newNode("Specifier", 1, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node)); (yyval.node)->no = 1;}
#line 1742 "./syntax.tab.c"
    break;

  case 15: /* Specifier: StructSpecifier  */
#line 61 "./syntax.y"
                        {(yyval.node) = newNode("Specifier", 2, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node)); (yyval.node)->no = 2;}
#line 1748 "./syntax.tab.c"
    break;

  case 16: /* StructSpecifier: STRUCT OptTag LC DefList RC  */
#line 63 "./syntax.y"
                                                {(yyval.node) = newNode("StructSpecifier", 1, Nter, 5, (yylsp[-4]).first_line, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1754 "./syntax.tab.c"
    break;

  case 17: /* StructSpecifier: STRUCT Tag  */
#line 64 "./syntax.y"
                                                {(yyval.node) = newNode("StructSpecifier", 2, Nter, 2, (yylsp[-1]).first_line, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1760 "./syntax.tab.c"
    break;

  case 18: /* StructSpecifier: STRUCT OptTag LC error RC  */
#line 65 "./syntax.y"
                                                {yyerror("Wrong struct definition", (yylsp[-3]).first_line); yyerrok;}
#line 1766 "./syntax.tab.c"
    break;

  case 19: /* OptTag: %empty  */
#line 67 "./syntax.y"
            {(yyval.node) = newNode("OptTag", 1, Null);}
#line 1772 "./syntax.tab.c"
    break;

  case 20: /* OptTag: ID  */
#line 68 "./syntax.y"
            {(yyval.node) = newNode("OptTag", 2, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 1778 "./syntax.tab.c"
    break;

  case 21: /* Tag: ID  */
#line 70 "./syntax.y"
            {(yyval.node) = newNode("Tag", 1, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 1784 "./syntax.tab.c"
    break;

  case 22: /* VarDec: ID  */
#line 74 "./syntax.y"
                            {(yyval.node) = newNode("VarDec", 1, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 1790 "./syntax.tab.c"
    break;

  case 23: /* VarDec: VarDec LB INT RB  */
#line 75 "./syntax.y"
                            {(yyval.node) = newNode("VarDec", 2, Nter, 4, (yylsp[-3]).first_line, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1796 "./syntax.tab.c"
    break;

  case 24: /* VarDec: VarDec LB error RB  */
#line 76 "./syntax.y"
                            {yyerror("Missing \"]\"", (yylsp[-1]).first_line); yyerrok;}
#line 1802 "./syntax.tab.c"
    break;

  case 25: /* VarDec: VarDec LB error  */
#line 77 "./syntax.y"
                            {yyerror("Missing \"]\"", (yylsp[0]).first_line); yyerrok;}
#line 1808 "./syntax.tab.c"
    break;

  case 26: /* FunDec: ID LP VarList RP  */
#line 79 "./syntax.y"
                            {(yyval.node) = newNode("FunDec", 1, Nter, 4, (yylsp[-3]).first_line, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1814 "./syntax.tab.c"
    break;

  case 27: /* FunDec: ID LP RP  */
#line 80 "./syntax.y"
                            {(yyval.node) = newNode("FunDec", 2, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1820 "./syntax.tab.c"
    break;

  case 28: /* FunDec: ID LP error RP  */
#line 81 "./syntax.y"
                            {yyerror("Wrong argument(s)", (yylsp[-1]).first_line); yyerrok;}
#line 1826 "./syntax.tab.c"
    break;

  case 29: /* FunDec: error LP VarList RP  */
#line 82 "./syntax.y"
                            {yyerror("Wrong function name", (yylsp[-3]).first_line); yyerrok;}
#line 1832 "./syntax.tab.c"
    break;

  case 30: /* VarList: ParamDec COMMA VarList  */
#line 84 "./syntax.y"
                                    {(yyval.node) = newNode("VarList", 1, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1838 "./syntax.tab.c"
    break;

  case 31: /* VarList: ParamDec  */
#line 85 "./syntax.y"
                                    {(yyval.node) = newNode("VarList", 2, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 1844 "./syntax.tab.c"
    break;

  case 32: /* ParamDec: Specifier VarDec  */
#line 87 "./syntax.y"
                            {(yyval.node) = newNode("ParamDec", 1, Nter, 2, (yylsp[-1]).first_line, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1850 "./syntax.tab.c"
    break;

  case 33: /* CompSt: LC DefList StmtList RC  */
#line 91 "./syntax.y"
                                {(yyval.node) = newNode("CompSt", 1, Nter, 4, (yylsp[-3]).first_line, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1856 "./syntax.tab.c"
    break;

  case 34: /* CompSt: LC error RC  */
#line 92 "./syntax.y"
                                   {yyerror("Wrong statement(s)", (yylsp[-2]).first_line); yyerrok;}
#line 1862 "./syntax.tab.c"
    break;

  case 35: /* StmtList: %empty  */
#line 94 "./syntax.y"
                    {{(yyval.node) = newNode("StmtList", 1, Null);}}
#line 1868 "./syntax.tab.c"
    break;

  case 36: /* StmtList: Stmt StmtList  */
#line 95 "./syntax.y"
                    {(yyval.node) = newNode("StmtList", 2, Nter, 2, (yylsp[-1]).first_line, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1874 "./syntax.tab.c"
    break;

  case 37: /* Stmt: Exp SEMI  */
#line 97 "./syntax.y"
                                    {(yyval.node) = newNode("Stmt", 1, Nter, 2, (yylsp[-1]).first_line, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1880 "./syntax.tab.c"
    break;

  case 38: /* Stmt: CompSt  */
#line 98 "./syntax.y"
                                    {(yyval.node) = newNode("Stmt", 2, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 1886 "./syntax.tab.c"
    break;

  case 39: /* Stmt: RETURN Exp SEMI  */
#line 99 "./syntax.y"
                                    {(yyval.node) = newNode("Stmt", 3, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1892 "./syntax.tab.c"
    break;

  case 40: /* Stmt: IF LP Exp RP Stmt  */
#line 100 "./syntax.y"
                                    {(yyval.node) = newNode("Stmt", 4, Nter, 5, (yylsp[-4]).first_line, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1898 "./syntax.tab.c"
    break;

  case 41: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 101 "./syntax.y"
                                    {(yyval.node) = newNode("Stmt", 5, Nter, 7, (yylsp[-6]).first_line, (yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1904 "./syntax.tab.c"
    break;

  case 42: /* Stmt: WHILE LP Exp RP Stmt  */
#line 102 "./syntax.y"
                                    {(yyval.node) = newNode("Stmt", 6, Nter, 5, (yylsp[-4]).first_line, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1910 "./syntax.tab.c"
    break;

  case 43: /* Stmt: error SEMI  */
#line 103 "./syntax.y"
                                    {yyerror("Wrong expression or Definition after statement", (yylsp[-1]).first_line); yyerrok;}
#line 1916 "./syntax.tab.c"
    break;

  case 44: /* Stmt: Exp error  */
#line 104 "./syntax.y"
                                    {if ((yylsp[-1]).first_line != ignore_line) {yyerror("Possibly missing \";\" at this or last line", (yylsp[-1]).first_line); yyerrok;} yyerrok;}
#line 1922 "./syntax.tab.c"
    break;

  case 45: /* Stmt: RETURN Exp error  */
#line 105 "./syntax.y"
                                    {yyerror("Possibly missing \";\" at this or last line", (yylsp[0]).first_line); yyerrok;}
#line 1928 "./syntax.tab.c"
    break;

  case 46: /* Stmt: RETURN error SEMI  */
#line 106 "./syntax.y"
                                    {yyerror("Wrong return value", (yylsp[-1]).first_line);}
#line 1934 "./syntax.tab.c"
    break;

  case 47: /* DefList: %empty  */
#line 110 "./syntax.y"
                    {{(yyval.node) = newNode("DefList", 1, Null);}}
#line 1940 "./syntax.tab.c"
    break;

  case 48: /* DefList: Def DefList  */
#line 111 "./syntax.y"
                    {(yyval.node) = newNode("DefList", 2, Nter, 2, (yylsp[-1]).first_line, (yyvsp[-1].node), (yyvsp[0].node));}
#line 1946 "./syntax.tab.c"
    break;

  case 49: /* Def: Specifier DecList SEMI  */
#line 113 "./syntax.y"
                                {(yyval.node) = newNode("Def", 1, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1952 "./syntax.tab.c"
    break;

  case 50: /* Def: Specifier error SEMI  */
#line 114 "./syntax.y"
                                {yyerror("Possibly missing ID", (yylsp[-1]).first_line);}
#line 1958 "./syntax.tab.c"
    break;

  case 51: /* DecList: Dec  */
#line 116 "./syntax.y"
                        {(yyval.node) = newNode("DecList", 1, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 1964 "./syntax.tab.c"
    break;

  case 52: /* DecList: Dec COMMA DecList  */
#line 117 "./syntax.y"
                        {(yyval.node) = newNode("DecList", 2, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1970 "./syntax.tab.c"
    break;

  case 53: /* DecList: Dec error DecList  */
#line 118 "./syntax.y"
                        {yyerror("Missing \",\"", (yylsp[-1]).first_line);}
#line 1976 "./syntax.tab.c"
    break;

  case 54: /* DecList: Dec error  */
#line 119 "./syntax.y"
                        {yyerror("Possibly missing \";\" at this or last line", (yylsp[0]).first_line); yyerrok;}
#line 1982 "./syntax.tab.c"
    break;

  case 55: /* Dec: VarDec  */
#line 121 "./syntax.y"
                            {(yyval.node) = newNode("Dec", 1, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 1988 "./syntax.tab.c"
    break;

  case 56: /* Dec: VarDec ASSIGNOP Exp  */
#line 122 "./syntax.y"
                            {(yyval.node) = newNode("Dec", 2, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 1994 "./syntax.tab.c"
    break;

  case 57: /* Dec: VarDec ASSIGNOP error  */
#line 123 "./syntax.y"
                              {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2000 "./syntax.tab.c"
    break;

  case 58: /* Exp: Exp ASSIGNOP Exp  */
#line 127 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 1, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); (yyval.node)->no = 1;}
#line 2006 "./syntax.tab.c"
    break;

  case 59: /* Exp: Exp AND Exp  */
#line 128 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 2, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); (yyval.node)->no = 2;}
#line 2012 "./syntax.tab.c"
    break;

  case 60: /* Exp: Exp OR Exp  */
#line 129 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 3, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); (yyval.node)->no = 3;}
#line 2018 "./syntax.tab.c"
    break;

  case 61: /* Exp: Exp RELOP Exp  */
#line 130 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 4, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)); (yyval.node)->no = 4;}
#line 2024 "./syntax.tab.c"
    break;

  case 62: /* Exp: Exp PLUS Exp  */
#line 131 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 5, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2030 "./syntax.tab.c"
    break;

  case 63: /* Exp: Exp MINUS Exp  */
#line 132 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 6, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2036 "./syntax.tab.c"
    break;

  case 64: /* Exp: Exp STAR Exp  */
#line 133 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 7, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2042 "./syntax.tab.c"
    break;

  case 65: /* Exp: Exp DIV Exp  */
#line 134 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 8, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2048 "./syntax.tab.c"
    break;

  case 66: /* Exp: LP Exp RP  */
#line 135 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 9, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2054 "./syntax.tab.c"
    break;

  case 67: /* Exp: MINUS Exp  */
#line 136 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 10, Nter, 2, (yylsp[-1]).first_line, (yyvsp[-1].node), (yyvsp[0].node));}
#line 2060 "./syntax.tab.c"
    break;

  case 68: /* Exp: NOT Exp  */
#line 137 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 11, Nter, 2, (yylsp[-1]).first_line, (yyvsp[-1].node), (yyvsp[0].node));}
#line 2066 "./syntax.tab.c"
    break;

  case 69: /* Exp: ID LP Args RP  */
#line 138 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 12, Nter, 4, (yylsp[-3]).first_line, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2072 "./syntax.tab.c"
    break;

  case 70: /* Exp: ID LP RP  */
#line 139 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 13, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2078 "./syntax.tab.c"
    break;

  case 71: /* Exp: Exp LB Exp RB  */
#line 140 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 14, Nter, 4, (yylsp[-3]).first_line, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2084 "./syntax.tab.c"
    break;

  case 72: /* Exp: Exp DOT ID  */
#line 141 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 15, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2090 "./syntax.tab.c"
    break;

  case 73: /* Exp: ID  */
#line 142 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 16, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 2096 "./syntax.tab.c"
    break;

  case 74: /* Exp: INT  */
#line 143 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 17, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 2102 "./syntax.tab.c"
    break;

  case 75: /* Exp: FLOAT  */
#line 144 "./syntax.y"
                            {(yyval.node) = newNode("Exp", 18, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 2108 "./syntax.tab.c"
    break;

  case 76: /* Exp: Exp ASSIGNOP error  */
#line 145 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2114 "./syntax.tab.c"
    break;

  case 77: /* Exp: Exp AND error  */
#line 146 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2120 "./syntax.tab.c"
    break;

  case 78: /* Exp: Exp OR error  */
#line 147 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2126 "./syntax.tab.c"
    break;

  case 79: /* Exp: Exp RELOP error  */
#line 148 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2132 "./syntax.tab.c"
    break;

  case 80: /* Exp: Exp PLUS error  */
#line 149 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2138 "./syntax.tab.c"
    break;

  case 81: /* Exp: Exp MINUS error  */
#line 150 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2144 "./syntax.tab.c"
    break;

  case 82: /* Exp: Exp STAR error  */
#line 151 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2150 "./syntax.tab.c"
    break;

  case 83: /* Exp: Exp DIV error  */
#line 152 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2156 "./syntax.tab.c"
    break;

  case 84: /* Exp: LP error RP  */
#line 153 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[-1]).first_line);}
#line 2162 "./syntax.tab.c"
    break;

  case 85: /* Exp: MINUS error  */
#line 154 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2168 "./syntax.tab.c"
    break;

  case 86: /* Exp: NOT error  */
#line 155 "./syntax.y"
                            {yyerror("Wrong expression", (yylsp[0]).first_line); yyerrok;}
#line 2174 "./syntax.tab.c"
    break;

  case 87: /* Exp: ID LP error RP  */
#line 156 "./syntax.y"
                            {yyerror("Wrong argument(s)", (yylsp[-1]).first_line); yyerrok;}
#line 2180 "./syntax.tab.c"
    break;

  case 88: /* Exp: ID LP error SEMI  */
#line 157 "./syntax.y"
                            {yyerror("Missing \")\"", (yylsp[-1]).first_line); ignore_line = (yylsp[-1]).first_line;}
#line 2186 "./syntax.tab.c"
    break;

  case 89: /* Exp: Exp LB error RB  */
#line 158 "./syntax.y"
                            {yyerror("Missing \"]\"", (yylsp[-1]).first_line);}
#line 2192 "./syntax.tab.c"
    break;

  case 90: /* Exp: Exp LB error SEMI  */
#line 159 "./syntax.y"
                            {yyerror("Missing \"]\"", (yylsp[-1]).first_line); ignore_line = (yylsp[-1]).first_line;}
#line 2198 "./syntax.tab.c"
    break;

  case 91: /* Args: Exp COMMA Args  */
#line 161 "./syntax.y"
                        {(yyval.node) = newNode("Args", 1, Nter, 3, (yylsp[-2]).first_line, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));}
#line 2204 "./syntax.tab.c"
    break;

  case 92: /* Args: Exp  */
#line 162 "./syntax.y"
                        {(yyval.node) = newNode("Args", 2, Nter, 1, (yylsp[0]).first_line, (yyvsp[0].node));}
#line 2210 "./syntax.tab.c"
    break;


#line 2214 "./syntax.tab.c"

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
  *++yylsp = yyloc;

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 165 "./syntax.y"

#include "lex.yy.c"

int yyerror(const char *msg, ...)
{
    right = 0;
    if (msg[0] == 's' && msg[1] == 'y')
    {
        printf("Error type B at Line %d: %s.", yylineno, msg);
        syserr++;
    }
    else
    {
        printf(" %s.\n", msg);
        myerr++;
    }
    return 0;
}
