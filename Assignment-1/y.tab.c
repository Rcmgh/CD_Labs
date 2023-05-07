/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	#include "sym_tab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define YYSTYPE char*
	int type=1;
	char* vval="~";
	int vtype=-1;
	int scope=0;
	int err=0;
	void yyerror(char* s);
	int yylex();
	int arraysize=1;
	extern int yylineno;
	extern char* yytext;


#line 89 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_INT = 258,
    T_CHAR = 259,
    T_DOUBLE = 260,
    T_WHILE = 261,
    T_INC = 262,
    T_DEC = 263,
    T_OROR = 264,
    T_ANDAND = 265,
    T_EQCOMP = 266,
    T_NOTEQUAL = 267,
    T_GREATEREQ = 268,
    T_LESSEREQ = 269,
    T_LEFTSHIFT = 270,
    T_RIGHTSHIFT = 271,
    T_PRINTLN = 272,
    T_STRING = 273,
    T_FLOAT = 274,
    T_BOOLEAN = 275,
    T_IF = 276,
    T_ELSE = 277,
    T_STRLITERAL = 278,
    T_DO = 279,
    T_INCLUDE = 280,
    T_HEADER = 281,
    T_MAIN = 282,
    T_ID = 283,
    T_NUM = 284,
    T_FOR = 285,
    T_OR = 286,
    T_AND = 287,
    T_INCR = 288,
    T_DECR = 289,
    T_IFX = 290
  };
#endif
/* Tokens.  */
#define T_INT 258
#define T_CHAR 259
#define T_DOUBLE 260
#define T_WHILE 261
#define T_INC 262
#define T_DEC 263
#define T_OROR 264
#define T_ANDAND 265
#define T_EQCOMP 266
#define T_NOTEQUAL 267
#define T_GREATEREQ 268
#define T_LESSEREQ 269
#define T_LEFTSHIFT 270
#define T_RIGHTSHIFT 271
#define T_PRINTLN 272
#define T_STRING 273
#define T_FLOAT 274
#define T_BOOLEAN 275
#define T_IF 276
#define T_ELSE 277
#define T_STRLITERAL 278
#define T_DO 279
#define T_INCLUDE 280
#define T_HEADER 281
#define T_MAIN 282
#define T_ID 283
#define T_NUM 284
#define T_FOR 285
#define T_OR 286
#define T_AND 287
#define T_INCR 288
#define T_DECR 289
#define T_IFX 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   444

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

#define YYUNDEFTOK  2
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,     2,     2,     2,
      38,    39,    48,    46,    44,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
      35,    45,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    27,    27,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    40,    41,    44,    44,    46,    46,    48,    49,
      52,    67,    68,    69,    71,    72,    75,    89,   101,   102,
     103,   104,   107,   107,   118,   118,   131,   132,   133,   134,
     138,   141,   153,   165,   171,   183,   195,   198,   199,   226,
     235,   246,   247,   248,   249,   250,   251,   254,   255,   256,
     259,   270,   273,   274,   275,   276,   277,   281,   281,   284,
     285,   288,   289,   289,   290,   291,   292,   293,   294,   300,
     301,   302,   302,   303,   303,   303,   304,   304,   304,   304,
     304,   305,   308,   310,   310,   312,   313,   316,   318,   318,
     319
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_CHAR", "T_DOUBLE", "T_WHILE",
  "T_INC", "T_DEC", "T_OROR", "T_ANDAND", "T_EQCOMP", "T_NOTEQUAL",
  "T_GREATEREQ", "T_LESSEREQ", "T_LEFTSHIFT", "T_RIGHTSHIFT", "T_PRINTLN",
  "T_STRING", "T_FLOAT", "T_BOOLEAN", "T_IF", "T_ELSE", "T_STRLITERAL",
  "T_DO", "T_INCLUDE", "T_HEADER", "T_MAIN", "T_ID", "T_NUM", "T_FOR",
  "T_OR", "T_AND", "T_INCR", "T_DECR", "'<'", "'>'", "';'", "'('", "')'",
  "'{'", "'}'", "'['", "']'", "','", "'='", "'+'", "'-'", "'*'", "'/'",
  "'!'", "T_IFX", "$accept", "START", "PROG", "$@1", "FOR", "$@2",
  "DEC_ASGN", "$@3", "DECLR", "ARRAY", "BRKT", "LISTVAR", "VAR", "TYPE",
  "ASSGN", "$@4", "$@5", "EXPR", "E", "T", "F", "REL_OP", "LOGICAL_OP",
  "UNARY_OP", "UN_OP", "MAIN", "$@6", "EMPTY_LISTVAR", "STMT", "$@7",
  "STMT_NO_BLOCK", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14",
  "DO", "BLOCK", "$@15", "COND", "WHILE", "WHILE_2", "$@16", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    60,    62,    59,    40,    41,
     123,   125,    91,    93,    44,    61,    43,    45,    42,    47,
      33,   290
};
# endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-28)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     392,  -111,  -111,  -111,  -111,  -111,  -111,   -33,   -21,   -36,
    -111,   -17,    46,    45,  -111,   250,    18,    13,    29,     1,
      33,   212,   -23,   -11,  -111,   250,   250,    41,  -111,    89,
      25,    14,  -111,    57,  -111,  -111,   300,  -111,  -111,   250,
      79,   250,    71,    52,  -111,    69,  -111,   250,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,   250,  -111,    46,    46,
    -111,  -111,    46,    46,  -111,  -111,  -111,    46,    46,  -111,
    -111,   250,   404,    81,  -111,    85,    83,    84,    77,    46,
      87,  -111,  -111,    86,    69,  -111,    79,    46,  -111,    79,
    -111,  -111,    39,    39,   -11,   -11,  -111,  -111,  -111,    60,
     280,    95,    96,   106,   100,   311,    98,   404,  -111,  -111,
    -111,    60,   250,    99,    99,    46,   368,   112,    69,   104,
     368,  -111,    46,    46,  -111,   368,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,   404,   107,  -111,  -111,  -111,   368,
      22,   108,   404,   404,   404,  -111,   -18,    46,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,   340,   404,   131,   132,   404,
      46,   111,   404,    60,   120,   352,  -111,  -111,  -111,  -111,
     122,   404,  -111,  -111,   404,   404,   123,  -111,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,    28,    31,    30,    29,    50,     0,     0,    48,
      49,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,    37,    43,    46,     0,     0,     0,    93,     0,
       0,     0,    34,     0,    16,    48,     0,     1,     8,     0,
       0,     0,     0,    23,    19,    18,    25,     0,    55,    56,
      52,    51,    58,    57,    53,    54,     0,    59,     0,     0,
      60,    61,    65,    64,    66,    39,    40,     0,     0,     4,
       9,     0,    78,     0,    92,     0,     0,     0,     0,     0,
       0,    47,     7,    27,    17,     5,    70,     0,    20,     0,
       6,    10,    36,    38,    41,    42,    44,    45,    12,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    75,    72,
      91,     0,     0,    23,    23,     0,    33,     0,    69,     0,
      26,    24,     0,     0,    96,    95,    81,    74,    77,    79,
      80,    76,    94,    71,    78,     0,     3,    22,    21,    35,
       0,     0,    78,    78,    78,    73,     0,     0,    67,    82,
      84,    87,   100,    98,    97,     0,    78,     0,     0,    78,
       0,     0,    78,     0,     0,     0,    68,    85,    88,    99,
       0,    78,    14,    89,    78,    78,     0,    90,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   165,  -111,   110,  -111,    67,  -111,   130,  -111,
     -41,   -32,    76,   103,     5,  -111,  -111,     0,    32,   -59,
      -8,    30,  -111,  -111,  -111,  -111,  -111,  -111,   -94,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,   158,   168,
    -111,  -110,   143,  -111,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    27,   100,   174,   101,    17,   102,    44,
      32,    45,    46,   103,   104,    33,    78,   105,    22,    23,
      24,    58,    59,    65,    66,    25,   156,   119,   106,   134,
     107,   142,   143,   157,   144,   158,   171,   175,   108,   109,
      72,   126,   110,   154,   159
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   135,    88,    94,    95,    20,    31,    28,    84,   -23,
      60,    61,    36,   133,    30,    21,     2,     3,     4,   152,
      20,    34,   153,    62,    63,    21,    21,    64,    42,    43,
      20,    20,     5,    48,    49,    50,    51,    67,    68,    21,
     145,    21,    76,    77,    20,    37,    20,    21,   149,   150,
     151,    75,    20,   168,   118,    39,    21,    54,    55,    96,
      97,    20,   161,    94,    95,   164,    41,    16,   167,     6,
      47,    21,   137,   138,    35,    10,    20,   173,    71,   116,
     176,   177,    16,     6,    12,   122,   123,   120,     9,    10,
      92,    93,    16,    16,    31,    73,   -27,    87,    12,   125,
      21,    80,    79,    19,   124,    20,    16,    83,    16,    86,
      15,   125,    21,    89,    16,   139,   124,    20,    19,   111,
      40,   112,   115,    16,   117,    15,   113,   114,    19,    19,
      18,    87,   128,   129,    43,    15,    15,   130,    16,   132,
     140,    31,    19,   141,    19,    18,   146,   155,   148,    15,
      19,    15,   166,   162,   163,    18,    18,    15,    26,    19,
     165,   169,   172,   125,   178,   121,    15,    16,   124,    18,
     147,    18,    74,    26,    19,    29,     0,    18,     0,    16,
      38,    15,     0,    26,    26,     0,    18,     0,     0,     0,
      69,    70,     0,     0,     0,     0,     0,    26,     0,    26,
       0,    18,     0,    19,    82,    26,    85,     0,     0,     0,
      15,     0,    90,     0,    26,    19,     0,     0,     0,     0,
       0,    91,    15,    48,    49,    50,    51,     0,     0,    26,
      18,     0,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,    18,    52,    53,     0,     0,    54,    55,    56,
     -13,     1,     0,     2,     3,     4,   -13,     0,    26,     0,
       0,     0,    57,     0,     0,   127,     0,     0,     0,     5,
      26,   -13,   -13,     6,     7,     8,     0,   136,     9,    10,
      11,     1,     0,     2,     3,     4,   -13,     0,    12,     0,
     -13,   -13,     0,     0,     0,     0,     0,     0,     0,     5,
       0,   -13,   -13,     6,     7,     8,     0,     0,     9,    10,
      11,    48,    49,    50,    51,     0,     0,     0,    12,     0,
     -13,   -13,    48,    49,    50,    51,     0,     0,     0,     0,
       0,    52,    53,     0,     0,    54,    55,     0,     0,    81,
       0,     0,    52,    53,     0,     0,    54,    55,   131,     0,
      57,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,    57,     0,    48,    49,    50,    51,     0,     0,     0,
       0,    52,    53,     0,     0,    54,    55,   160,     0,    48,
      49,    50,    51,    52,    53,     0,     0,    54,    55,     0,
      57,   170,   -13,     1,     0,     2,     3,     4,     0,    52,
      53,     0,    57,    54,    55,     0,     0,     2,     3,     4,
      73,     5,     0,     0,     0,     6,     7,     8,    57,     0,
       9,    10,    11,     5,     0,    99,     0,     6,     7,     0,
      12,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    28
};

static const yytype_int16 yycheck[] =
{
       0,   111,    43,    62,    63,     0,    42,    40,    40,    45,
      33,    34,    12,   107,    35,    15,     3,     4,     5,    37,
      15,    38,    40,    46,    47,    25,    26,    50,    27,    28,
      25,    26,    19,    11,    12,    13,    14,    48,    49,    39,
     134,    41,    28,    29,    39,     0,    41,    47,   142,   143,
     144,    26,    47,   163,    86,    37,    56,    35,    36,    67,
      68,    56,   156,   122,   123,   159,    37,     0,   162,    23,
      37,    71,   113,   114,    28,    29,    71,   171,    37,    79,
     174,   175,    15,    23,    38,    46,    47,    87,    28,    29,
      58,    59,    25,    26,    42,     6,    44,    45,    38,    99,
     100,    34,    45,     0,    99,   100,    39,    28,    41,    38,
       0,   111,   112,    44,    47,   115,   111,   112,    15,    38,
      17,    36,    45,    56,    37,    15,    43,    43,    25,    26,
       0,    45,    37,    37,    28,    25,    26,    37,    71,    41,
      28,    42,    39,    39,    41,    15,    39,   147,    40,    39,
      47,    41,    41,    22,    22,    25,    26,    47,     0,    56,
     160,    41,    40,   163,    41,    89,    56,   100,   163,    39,
     140,    41,    29,    15,    71,     7,    -1,    47,    -1,   112,
      15,    71,    -1,    25,    26,    -1,    56,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      -1,    71,    -1,   100,    39,    47,    41,    -1,    -1,    -1,
     100,    -1,    47,    -1,    56,   112,    -1,    -1,    -1,    -1,
      -1,    56,   112,    11,    12,    13,    14,    -1,    -1,    71,
     100,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,   112,    31,    32,    -1,    -1,    35,    36,    37,
       0,     1,    -1,     3,     4,     5,     6,    -1,   100,    -1,
      -1,    -1,    50,    -1,    -1,   100,    -1,    -1,    -1,    19,
     112,    21,    22,    23,    24,    25,    -1,   112,    28,    29,
      30,     1,    -1,     3,     4,     5,     6,    -1,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    11,    12,    13,    14,    -1,    -1,    -1,    38,    -1,
      40,    41,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,
      -1,    -1,    31,    32,    -1,    -1,    35,    36,    37,    -1,
      50,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    35,    36,    37,    -1,    11,
      12,    13,    14,    31,    32,    -1,    -1,    35,    36,    -1,
      50,    39,     0,     1,    -1,     3,     4,     5,    -1,    31,
      32,    -1,    50,    35,    36,    -1,    -1,     3,     4,     5,
       6,    19,    -1,    -1,    -1,    23,    24,    25,    50,    -1,
      28,    29,    30,    19,    -1,    21,    -1,    23,    24,    -1,
      38,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,    19,    23,    24,    25,    28,
      29,    30,    38,    53,    54,    56,    58,    59,    60,    65,
      66,    69,    70,    71,    72,    77,    90,    55,    40,    91,
      35,    42,    62,    67,    38,    28,    69,     0,    54,    37,
      65,    37,    27,    28,    61,    63,    64,    37,    11,    12,
      13,    14,    31,    32,    35,    36,    37,    50,    73,    74,
      33,    34,    46,    47,    50,    75,    76,    48,    49,    54,
      54,    37,    92,     6,    94,    26,    28,    29,    68,    45,
      58,    39,    54,    28,    63,    54,    38,    45,    62,    44,
      54,    54,    70,    70,    71,    71,    72,    72,    54,    21,
      56,    58,    60,    65,    66,    69,    80,    82,    90,    91,
      94,    38,    36,    43,    43,    45,    69,    37,    63,    79,
      69,    64,    46,    47,    66,    69,    93,    54,    37,    37,
      37,    37,    41,    80,    81,    93,    54,    62,    62,    69,
      28,    39,    83,    84,    86,    80,    39,    73,    40,    80,
      80,    80,    37,    40,    95,    69,    78,    85,    87,    96,
      37,    80,    22,    22,    80,    69,    41,    80,    93,    41,
      39,    88,    40,    80,    57,    89,    80,    80,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    54,    54,    57,    56,    59,    58,    60,    60,
      61,    62,    62,    62,    63,    63,    64,    64,    65,    65,
      65,    65,    67,    66,    68,    66,    69,    69,    69,    69,
      69,    70,    70,    70,    71,    71,    71,    72,    72,    72,
      72,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      75,    75,    76,    76,    76,    76,    76,    78,    77,    79,
      79,    80,    81,    80,    80,    80,    80,    80,    80,    82,
      82,    83,    82,    84,    85,    82,    86,    87,    88,    89,
      82,    82,    90,    92,    91,    93,    93,    94,    96,    95,
      95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     2,     3,     3,     3,     2,     2,
       3,     0,     4,     0,     0,    14,     0,     3,     2,     2,
       2,     4,     4,     0,     3,     1,     3,     1,     1,     1,
       1,     1,     0,     4,     0,     5,     3,     1,     3,     2,
       2,     3,     3,     1,     3,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     9,     1,
       0,     2,     0,     3,     2,     1,     2,     2,     0,     2,
       2,     0,     4,     0,     0,     7,     0,     0,     0,     0,
      11,     1,     3,     0,     4,     1,     1,     5,     0,     4,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 27 "parser.y"
             { if(err==0) printf("Valid syntax\n");
	 YYACCEPT; }
#line 1566 "y.tab.c"
    break;

  case 11:
#line 40 "parser.y"
               {yyerrok;yyclearin;}
#line 1572 "y.tab.c"
    break;

  case 14:
#line 44 "parser.y"
                                                           {scope++;}
#line 1578 "y.tab.c"
    break;

  case 16:
#line 46 "parser.y"
           {printf(" ");}
#line 1584 "y.tab.c"
    break;

  case 20:
#line 52 "parser.y"
                  {
		if(check_sym_tab(yyvsp[-1]))
			{
				printf("Variable %s already declared\n",yyvsp[-1]);
				yyerror(yyvsp[-1]);
			}
			else
			{
				insert_symbol(yyvsp[-1],size(type)*arraysize,type,yylineno,scope);
				arraysize=1;
				type=-1;
			}
		}
#line 1602 "y.tab.c"
    break;

  case 21:
#line 67 "parser.y"
                          { arraysize*=atoi(yyvsp[-2]);}
#line 1608 "y.tab.c"
    break;

  case 22:
#line 68 "parser.y"
                                    { arraysize*=atoi(yyvsp[-2]);}
#line 1614 "y.tab.c"
    break;

  case 26:
#line 75 "parser.y"
                        {
				if(check_sym_tab(yyvsp[-2]))
				{
					printf("Variable %s already declared\n",yyvsp[-2]);
					yyerror(yyvsp[-2]);
				}
				else
				{
				insert_symbol(yyvsp[-2],size(type),type,yylineno,scope);
				insert_val(yyvsp[-2],vval,yylineno);
				vval="~";
				type=-1;
				}
			}
#line 1633 "y.tab.c"
    break;

  case 27:
#line 89 "parser.y"
                        {
				if(check_sym_tab(yyvsp[0]))
				{
					printf("Variable %s already declared\n",yyvsp[0]);
					yyerror(yyvsp[0]);
				}
				else{
				insert_symbol(yyvsp[0],size(type),type,yylineno,scope);
				type=-1;
				}
			}
#line 1649 "y.tab.c"
    break;

  case 28:
#line 101 "parser.y"
             {type = INT;}
#line 1655 "y.tab.c"
    break;

  case 29:
#line 102 "parser.y"
                 {type = FLOAT;}
#line 1661 "y.tab.c"
    break;

  case 30:
#line 103 "parser.y"
                  {type = DOUBLE;}
#line 1667 "y.tab.c"
    break;

  case 31:
#line 104 "parser.y"
                {type = CHAR;}
#line 1673 "y.tab.c"
    break;

  case 32:
#line 107 "parser.y"
             {type=retrieve_type(yyvsp[0]);}
#line 1679 "y.tab.c"
    break;

  case 33:
#line 107 "parser.y"
                                                {
				//printf("%s here \n", $1);
				if(!check_sym_tab(yyvsp[-3]))
				{
					printf("Variable %s not declared\n",yyvsp[-3]);
					yyerror(yyvsp[-3]);
				}
				insert_val(yyvsp[-3],vval,yylineno);
				vval="~";
				type=-1;
			}
#line 1695 "y.tab.c"
    break;

  case 34:
#line 118 "parser.y"
                                  {type=retrieve_type(yyvsp[-1]);}
#line 1701 "y.tab.c"
    break;

  case 35:
#line 118 "parser.y"
                                                                        {
				//printf("%s \n", $1);
				if(!check_sym_tab(yyvsp[-4]))
				{
					printf("Variable %s not declared\n",yyvsp[-4]);
					yyerror(yyvsp[-4]);
				}
				insert_val(yyvsp[-4],vval,yylineno);
				vval="~";
				type=-1;
			}
#line 1717 "y.tab.c"
    break;

  case 37:
#line 132 "parser.y"
           {vval=yyvsp[0];}
#line 1723 "y.tab.c"
    break;

  case 39:
#line 134 "parser.y"
                     {
		//printf("\n%s,%s\n",$$,$1);
		int xyz = atoi(retrieve_val(yyvsp[-1]))+1;
	sprintf(yyval,"%d",xyz);}
#line 1732 "y.tab.c"
    break;

  case 41:
#line 141 "parser.y"
                { 
			if(vtype==2)
				sprintf(yyval,"%d",(atoi(yyvsp[-2])+atoi(yyvsp[0])));
			else if(vtype==3)
				sprintf(yyval,"%lf",(atof(yyvsp[-2])+atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1749 "y.tab.c"
    break;

  case 42:
#line 153 "parser.y"
                { 
			if(vtype==2)
				sprintf(yyval,"%d",(atoi(yyvsp[-2])-atoi(yyvsp[0])));
			else if(vtype==3)
				sprintf(yyval,"%lf",(atof(yyvsp[-2])-atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1766 "y.tab.c"
    break;

  case 43:
#line 165 "parser.y"
        {
		//printf("\nabcd %s,%s,\n",$$,$1);
		yyval=yyvsp[0];}
#line 1774 "y.tab.c"
    break;

  case 44:
#line 171 "parser.y"
                { 
			if(vtype==2)
				sprintf(yyval,"%d",(atoi(yyvsp[-2])*atoi(yyvsp[0])));
			else if(vtype==3)
				sprintf(yyval,"%lf",(atof(yyvsp[-2])*atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1791 "y.tab.c"
    break;

  case 45:
#line 183 "parser.y"
                { 
			if(vtype==2)
				sprintf(yyval,"%d",(atoi(yyvsp[-2])/atoi(yyvsp[0])));
			else if(vtype==3)
				sprintf(yyval,"%lf",(atof(yyvsp[-2])/atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1808 "y.tab.c"
    break;

  case 46:
#line 195 "parser.y"
        {yyval=yyvsp[0];}
#line 1814 "y.tab.c"
    break;

  case 48:
#line 199 "parser.y"
                {
			//printf("%s %d", $1, yylineno);
			if(check_sym_tab(yyvsp[0]))
			{
				char* check=retrieve_val(yyvsp[0]);
				if(check=="~")
				{
					printf("Variable %s not initialised",yyvsp[0]);
					yyerror(yyvsp[0]);
				}
				else
				{	
					yyval=strdup(check);
					vtype=type_check(check);	
					if(vtype!=type && type!=-1)
					{
						printf("Mismatch type\n");
						yyerror(yyvsp[0]);
					}	
				}
			}
			else
			{
					printf("Variable %s not declared\n",yyvsp[0]);
					yyerror(yyvsp[0]);
			}
		}
#line 1846 "y.tab.c"
    break;

  case 49:
#line 226 "parser.y"
                {
    			yyval=strdup(yyvsp[0]); 
    			vtype=type_check(yyvsp[0]);
    			if(vtype!=type && type!=-1)
			{
				printf("Mismatch type\n");
				yyerror(yyvsp[0]);
			}
		}
#line 1860 "y.tab.c"
    break;

  case 50:
#line 235 "parser.y"
                   {
    			yyval=strdup(yyvsp[0]); 
    			vtype=1;
			if(vtype!=type)
			{
				printf("Mismatch type\n");	
				yyerror(yyvsp[0]);
			}
		}
#line 1874 "y.tab.c"
    break;

  case 60:
#line 259 "parser.y"
                  {//printf("new %s %d\n", $$, yylineno);
					int ijk = atoi(retrieve_val(yyvsp[0]))+1;
					//printf("%s,%s\n",$$,$1);
					//printf("%d", ijk);
					//vval = itoa(ijk, vval, 10);
					char arr[50];
					sprintf(arr, "%d", ijk);
					insert_val(yyval, arr, yylineno);
					vval = retrieve_val(yyval);
					
		}
#line 1890 "y.tab.c"
    break;

  case 67:
#line 281 "parser.y"
                                             {scope++;}
#line 1896 "y.tab.c"
    break;

  case 68:
#line 281 "parser.y"
                                                                 {scope--;}
#line 1902 "y.tab.c"
    break;

  case 72:
#line 289 "parser.y"
                {scope++;}
#line 1908 "y.tab.c"
    break;

  case 73:
#line 289 "parser.y"
                                {scope--;}
#line 1914 "y.tab.c"
    break;

  case 81:
#line 302 "parser.y"
                    {scope++;}
#line 1920 "y.tab.c"
    break;

  case 82:
#line 302 "parser.y"
                                    {scope--;}
#line 1926 "y.tab.c"
    break;

  case 83:
#line 303 "parser.y"
                    {scope++;}
#line 1932 "y.tab.c"
    break;

  case 84:
#line 303 "parser.y"
                                    {scope--;}
#line 1938 "y.tab.c"
    break;

  case 86:
#line 304 "parser.y"
                    {scope++;}
#line 1944 "y.tab.c"
    break;

  case 87:
#line 304 "parser.y"
                                    {scope--;}
#line 1950 "y.tab.c"
    break;

  case 88:
#line 304 "parser.y"
                                                           {scope++;}
#line 1956 "y.tab.c"
    break;

  case 89:
#line 304 "parser.y"
                                                                           {scope--;}
#line 1962 "y.tab.c"
    break;

  case 93:
#line 310 "parser.y"
            {scope++;}
#line 1968 "y.tab.c"
    break;

  case 94:
#line 310 "parser.y"
                                {scope--;}
#line 1974 "y.tab.c"
    break;

  case 98:
#line 318 "parser.y"
             {scope++;}
#line 1980 "y.tab.c"
    break;

  case 99:
#line 318 "parser.y"
                                {scope--;}
#line 1986 "y.tab.c"
    break;


#line 1990 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 322 "parser.y"


void yyerror(char* s)
{
	err+=1;
	printf("Error :syntax error,line number:%d,token:%s \n",yylineno,yytext);
}
int yywrap()
{
    return(1);
}

int main(int argc, char* argv[])
{
	t=init_table();
	//printf("here \n");
	yyparse();
	display_symbol_table();
	return 0;
}

