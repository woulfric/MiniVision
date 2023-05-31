
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "synt.y"
   
    #include <stdio.h>
    #include <stdlib.h>  
    #include <stdbool.h>
    #include <string.h>

    void initialisation();
    void afficher();
    void print_nodes();
    void print_tabs();
    void afficher_qdr();

    bool doubleDeclaration(char name[]);
    bool nonDeclare(char entite[]);
    bool outOfRange(char name[], int index);
    bool typeCompatibilite(char type1[], char type2[]);
    bool divisionParZero(float num);
    void inserer(char entite[], char code[], char type[], int taille, float val, int y);
    void update_type(char name[], char type[]);
    void update_val(char name[], float val);
    char *get_type(char name[]);
    float get_val(char name[]);
    char *get_code(char name[]);
    void set_tab_val(char name[], int index, float val);
    float get_tab_val(char *name, int index);
    bool index_check(char *name, int index);
    void quadr(char opr[],char op1[],char op2[],char res[]);
    void ajour_quad(int num_quad, int colon_quad, char val []);

    int yylex();
    int yyerror(char* s);

    int nb_ligne=1, Col=1;
    int current_line_indent = 0;
    int indent_level = 0; 
    int state = 0;
    int isNewline = 0;

    char variables_LIST_IDF[100][20], variables_LIST_IDF2[100][20], Types[100][20];;
    int variables_counter = 0, variables_counter2 = 0;
    char sauvType[25], sauvType2[25];
    float savedVal;

    int Fin_if = 0, deb_else = 0, Fin, BorneSup, counter = 1, counter2 = 1;
    int qc = 0;
    char tmp[20], tmp2[20], tmp3[20], tmp4[20], tabName[20];
    int tmp_int;

    int isempty();
    int isfull();
    char* peek();
    char* pop();
    char push(char *data); 

    int isempty2();
    int isfull2();
    int peek2();
    int pop2();
    char push2(int data); 
    
    extern FILE* yyin;


/* Line 189 of yacc.c  */
#line 137 "synt.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_int = 258,
     mc_float = 259,
     mc_char = 260,
     mc_bool = 261,
     mc_if = 262,
     mc_else = 263,
     mc_for = 264,
     mc_in = 265,
     mc_range = 266,
     mc_while = 267,
     add = 268,
     sub = 269,
     mul = 270,
     divv = 271,
     aff = 272,
     vrg = 273,
     lb = 274,
     rb = 275,
     lp = 276,
     rp = 277,
     dd = 278,
     and = 279,
     or = 280,
     not = 281,
     g = 282,
     l = 283,
     ge = 284,
     le = 285,
     eq = 286,
     dif = 287,
     idf = 288,
     v_int = 289,
     v_float = 290,
     v_char = 291,
     v_bool = 292,
     indent = 293,
     dedent = 294,
     newline = 295,
     err = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 63 "synt.y"

    int INT;
    float FLOAT;
    char CHAR;
    char *STR;
    int BOOL;



/* Line 214 of yacc.c  */
#line 224 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 236 "synt.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  150

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      23,    27,    34,    38,    42,    46,    50,    56,    62,    68,
      74,    77,    79,    82,    85,    87,    89,    91,    93,    95,
      99,   106,   110,   114,   116,   120,   124,   126,   130,   132,
     134,   136,   138,   140,   145,   153,   159,   165,   171,   182,
     187,   194,   199,   206,   210,   214,   218,   222,   226,   230,
     232,   234,   236,   238,   240,   245,   249,   251,   255,   257,
     260,   262
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    47,    -1,    45,    46,    -1,     3,    -1,
       4,    -1,     5,    -1,     6,    -1,    33,    -1,    33,    19,
      34,    20,    -1,    33,    18,    46,    -1,    33,    19,    34,
      20,    18,    46,    -1,    33,    17,    34,    -1,    33,    17,
      35,    -1,    33,    17,    36,    -1,    33,    17,    37,    -1,
      33,    17,    34,    18,    46,    -1,    33,    17,    35,    18,
      46,    -1,    33,    17,    36,    18,    46,    -1,    33,    17,
      37,    18,    46,    -1,    48,    47,    -1,    48,    -1,    49,
      40,    -1,    44,    40,    -1,    53,    -1,    54,    -1,    56,
      -1,    58,    -1,    60,    -1,    33,    17,    50,    -1,    33,
      19,    34,    20,    17,    50,    -1,    50,    13,    51,    -1,
      50,    14,    51,    -1,    51,    -1,    51,    15,    52,    -1,
      51,    16,    52,    -1,    52,    -1,    21,    50,    22,    -1,
      34,    -1,    35,    -1,    36,    -1,    37,    -1,    33,    -1,
      33,    19,    34,    20,    -1,    54,     8,    23,    40,    38,
      47,    39,    -1,    55,    40,    38,    47,    39,    -1,     7,
      21,    63,    22,    23,    -1,    57,    40,    38,    47,    39,
      -1,     9,    33,    10,    11,    21,    50,    18,    50,    22,
      23,    -1,    59,    38,    47,    39,    -1,     9,    33,    10,
      33,    23,    40,    -1,    61,    38,    47,    39,    -1,    12,
      21,    63,    22,    23,    40,    -1,    50,    27,    50,    -1,
      50,    28,    50,    -1,    50,    29,    50,    -1,    50,    30,
      50,    -1,    50,    31,    50,    -1,    50,    32,    50,    -1,
      34,    -1,    35,    -1,    36,    -1,    37,    -1,    33,    -1,
      33,    19,    34,    20,    -1,    63,    25,    64,    -1,    64,
      -1,    64,    24,    65,    -1,    65,    -1,    26,    66,    -1,
      66,    -1,    62,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    91,   100,   101,   102,   103,   106,   116,
     126,   136,   146,   161,   176,   191,   211,   226,   241,   256,
     278,   279,   282,   283,   284,   285,   292,   293,   294,   297,
     313,   342,   351,   360,   362,   371,   385,   387,   390,   398,
     404,   412,   425,   435,   461,   468,   476,   486,   502,   522,
     536,   565,   573,   582,   594,   606,   618,   630,   642,   654,
     665,   676,   687,   697,   713,   744,   756,   758,   770,   773,
     785,   788
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_int", "mc_float", "mc_char",
  "mc_bool", "mc_if", "mc_else", "mc_for", "mc_in", "mc_range", "mc_while",
  "add", "sub", "mul", "divv", "aff", "vrg", "lb", "rb", "lp", "rp", "dd",
  "and", "or", "not", "g", "l", "ge", "le", "eq", "dif", "idf", "v_int",
  "v_float", "v_char", "v_bool", "indent", "dedent", "newline", "err",
  "$accept", "PROG", "INS_DECTYPE", "TYPE", "LIST_IDF", "LIST_INS", "INS",
  "INS_AFF", "EXP1", "EXP2", "EXP3", "INS_IF", "INS_IF2", "INS_IF1",
  "INS_FOR_RANGE", "INS_FOR_RANGE2", "INS_FOR_TAB", "INS_FOR_TAB2",
  "INS_WHILE", "INS_WHILE2", "EXP_B", "COND", "COND1", "COND2", "COND3", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    45,    45,    45,    45,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      47,    47,    48,    48,    48,    48,    48,    48,    48,    49,
      49,    50,    50,    50,    51,    51,    51,    52,    52,    52,
      52,    52,    52,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    64,    64,    65,
      65,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     4,
       3,     6,     3,     3,     3,     3,     5,     5,     5,     5,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     3,
       6,     3,     3,     1,     3,     3,     1,     3,     1,     1,
       1,     1,     1,     4,     7,     5,     5,     5,    10,     4,
       6,     4,     6,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     4,     3,     1,     3,     1,     2,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     2,    21,     0,    24,    25,     0,    26,     0,
      27,     0,    28,     0,     0,     0,     0,     0,     0,     1,
      23,     8,     3,    20,    22,     0,     0,     0,     0,     0,
       0,     0,    42,    38,    39,    40,    41,     0,    33,    36,
      71,     0,    66,    68,    70,     0,     0,    42,    38,    39,
      40,    41,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,    10,     0,     0,
       0,     0,    49,    51,    37,     0,    31,    32,    53,    54,
      55,    56,    57,    58,    34,    35,    46,    65,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
      45,    47,    43,     0,    50,    52,    43,    30,    16,    17,
      18,    19,     0,     0,     0,    11,    44,     0,     0,    48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    11,    32,    12,    13,    14,    47,    48,
      49,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      50,    51,    52,    53,    54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int16 yypact[] =
{
       0,   -65,   -65,   -65,   -65,    19,    -7,    35,     5,    76,
      37,    53,   -65,     0,    60,   -65,    96,    75,   -65,    79,
     -65,    78,   -65,    82,    38,   111,    38,     8,    88,   -65,
     -65,    95,   -65,   -65,   -65,   100,    87,    89,     0,     0,
       8,    46,    65,    69,    73,    77,    81,     7,    -5,   -65,
     -65,    63,   102,   -65,   -65,    -3,    86,   105,   -65,   -65,
     -65,   -65,    18,   108,    12,    53,    97,    90,     0,     0,
      93,    94,     1,   -65,   101,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,   106,    38,    38,   113,   114,
     115,   107,   119,   121,   122,   124,   125,   -65,   126,   109,
     110,   112,   -65,   -65,   -65,   128,    -5,    -5,    18,    18,
      18,    18,    18,    18,   -65,   -65,   -65,   102,   -65,     8,
     104,   116,   130,     8,    53,    53,    53,    53,   127,     0,
     -65,   -65,    85,    52,   -65,   -65,   -65,    18,   -65,   -65,
     -65,   -65,    53,   118,     8,   -65,   -65,     3,   129,   -65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   -65,   -65,   -64,   -11,   -65,   -65,   -27,   -57,
     -15,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   132,    67,    68,   120
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -65
static const yytype_int16 yytable[] =
{
      62,    97,    33,     1,     2,     3,     4,     5,    88,     6,
      83,    84,     7,    72,    75,    76,    75,    76,   106,   107,
      75,    76,    27,   104,    28,   148,    25,    70,    71,    40,
      89,    75,    76,     8,    77,    78,    79,    80,    81,    82,
      24,    57,    58,    59,    60,    61,    93,    94,    95,    96,
     108,   109,   110,   111,   112,   113,    26,   100,   101,    40,
     138,   139,   140,   141,    41,    75,    76,    40,   114,   115,
     144,    42,    43,    44,    45,    46,    29,    30,   145,    42,
      43,    44,    45,    46,    74,    85,    31,   -63,    86,   -63,
     -63,   -59,   133,   -59,   -59,   -60,   137,   -60,   -60,   -61,
      34,   -61,   -61,   -62,    35,   -62,   -62,   -64,    90,   -64,
     -64,    86,    64,    65,    66,    36,    38,   147,   143,    37,
      39,    55,    63,    67,    91,    68,    87,    69,    92,   116,
      99,    98,   102,   103,   119,   105,   123,   120,   121,   124,
     125,   122,   126,   127,   134,   142,   128,   129,   132,   130,
     136,   131,   149,   117,     0,   118,   135,   146,    56,     0,
       0,    73
};

static const yytype_int16 yycheck[] =
{
      27,    65,    13,     3,     4,     5,     6,     7,    11,     9,
      15,    16,    12,    40,    13,    14,    13,    14,    75,    76,
      13,    14,    17,    22,    19,    22,    33,    38,    39,    21,
      33,    13,    14,    33,    27,    28,    29,    30,    31,    32,
      21,    33,    34,    35,    36,    37,    34,    35,    36,    37,
      77,    78,    79,    80,    81,    82,    21,    68,    69,    21,
     124,   125,   126,   127,    26,    13,    14,    21,    83,    84,
      18,    33,    34,    35,    36,    37,     0,    40,   142,    33,
      34,    35,    36,    37,    19,    22,    33,    22,    25,    24,
      25,    22,   119,    24,    25,    22,   123,    24,    25,    22,
      40,    24,    25,    22,     8,    24,    25,    22,    22,    24,
      25,    25,    17,    18,    19,    40,    38,   144,   129,    40,
      38,    10,    34,    23,    19,    38,    24,    38,    20,    23,
      40,    34,    39,    39,    21,    34,    17,    23,    23,    18,
      18,    34,    18,    18,    40,    18,    20,    38,    20,    39,
      20,    39,    23,    86,    -1,    87,    40,    39,    26,    -1,
      -1,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    12,    33,    43,
      44,    45,    47,    48,    49,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    21,    33,    21,    17,    19,     0,
      40,    33,    46,    47,    40,     8,    40,    40,    38,    38,
      21,    26,    33,    34,    35,    36,    37,    50,    51,    52,
      62,    63,    64,    65,    66,    10,    63,    33,    34,    35,
      36,    37,    50,    34,    17,    18,    19,    23,    38,    38,
      47,    47,    50,    66,    19,    13,    14,    27,    28,    29,
      30,    31,    32,    15,    16,    22,    25,    24,    11,    33,
      22,    19,    20,    34,    35,    36,    37,    46,    34,    40,
      47,    47,    39,    39,    22,    34,    51,    51,    50,    50,
      50,    50,    50,    50,    52,    52,    23,    64,    65,    21,
      23,    23,    34,    17,    18,    18,    18,    18,    20,    38,
      39,    39,    20,    50,    40,    40,    20,    50,    46,    46,
      46,    46,    18,    47,    18,    46,    39,    50,    22,    23
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 88 "synt.y"
    { printf("The program is correct syntactically\n"); YYACCEPT; ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 91 "synt.y"
    {
                for (variables_counter = variables_counter-1; variables_counter >= 0; variables_counter--){
                    update_type(variables_LIST_IDF[variables_counter], sauvType);
                }
                variables_counter = 0;
                strcpy(sauvType, "NULL");
           ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 100 "synt.y"
    { strcpy(sauvType, "Int");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 101 "synt.y"
    { strcpy(sauvType, "Float"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 102 "synt.y"
    { strcpy(sauvType, "Char"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 103 "synt.y"
    { strcpy(sauvType, "Bool"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 106 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (1)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (1)].STR));
            }
            else{
                inserer((yyvsp[(1) - (1)].STR), "IDF", "", 0, 0, 0);
                strcpy(variables_LIST_IDF[variables_counter], (yyvsp[(1) - (1)].STR));
                variables_counter++;
            }
        ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 116 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (4)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (4)].STR));
            }
            else{
                inserer((yyvsp[(1) - (4)].STR), "IDF Tab", "", (yyvsp[(3) - (4)].INT), 0, 0);
                strcpy(variables_LIST_IDF[variables_counter], (yyvsp[(1) - (4)].STR));
                variables_counter++;
            }
        ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 126 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (3)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (3)].STR));
            }
            else{
                inserer((yyvsp[(1) - (3)].STR), "IDF", "", 0, 0, 0);
                strcpy(variables_LIST_IDF[variables_counter], (yyvsp[(1) - (3)].STR));
                variables_counter++;
            }
        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 136 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (6)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (6)].STR));
            }
            else{
                inserer((yyvsp[(1) - (6)].STR), "IDF Tab", "", (yyvsp[(3) - (6)].INT), 0, 0);
                strcpy(variables_LIST_IDF[variables_counter], (yyvsp[(1) - (6)].STR));
                variables_counter++;
            }
        ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 146 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (3)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (3)].STR));
            }
            else{
                if (strcmp(sauvType, "Int") != 0){
                    printf("Semantic Error, line %d, column %d, Value isn't of the type [ %s ]\n", nb_ligne, Col, sauvType);
                }
                else{
                    inserer((yyvsp[(1) - (3)].STR), "IDF", "Int", 0, (float) (yyvsp[(3) - (3)].INT), 0);
                    sprintf(tmp3, "%d", (yyvsp[(3) - (3)].INT));
                    quadr("=", tmp3, "Empty", (yyvsp[(1) - (3)].STR));
                }
            }    
        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 161 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (3)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (3)].STR));
            }
            else{
                if (strcmp(sauvType, "Float") != 0){
                    printf("Semantic Error, line %d, column %d, Value isn't of the type [ %s ]\n", nb_ligne, Col, sauvType);
                }
                else{
                    inserer((yyvsp[(1) - (3)].STR), "IDF", "Float", 0, (yyvsp[(3) - (3)].FLOAT), 0);
                    sprintf(tmp3, "%f", (yyvsp[(3) - (3)].FLOAT));
                    quadr("=", tmp3, "Empty", (yyvsp[(1) - (3)].STR));
                }
            }    
        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 176 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (3)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (3)].STR));
            }
            else{
                if (strcmp(sauvType, "Char") != 0){
                    printf("Semantic Error, line %d, column %d, Value isn't of the type [ %s ]\n", nb_ligne, Col, sauvType);
                }
                else{
                    inserer((yyvsp[(1) - (3)].STR), "IDF", "Char", 0, (float) (yyvsp[(3) - (3)].CHAR), 0);
                    sprintf(tmp3, "'%c'", (yyvsp[(3) - (3)].CHAR));
                    quadr("=", tmp3, "Empty", (yyvsp[(1) - (3)].STR));
                }
            }    
        ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 191 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (3)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (3)].STR));
            }
            else{
                if (strcmp(sauvType, "Bool") != 0){
                    printf("Semantic Error, line %d, column %d, Value isn't of the type [ %s ]\n", nb_ligne, Col, sauvType);
                }
                else{
                    inserer((yyvsp[(1) - (3)].STR), "IDF", "Int", 0, (float) (yyvsp[(3) - (3)].BOOL), 0);
                    if ((yyvsp[(3) - (3)].BOOL) == 1){
                        strcpy(tmp3, "true");
                    }
                    else{
                        strcpy(tmp3, "false");
                    }
                    quadr("=", tmp3, "Empty", (yyvsp[(1) - (3)].STR));
                }
            }    
        ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 211 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (5)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (5)].STR));
            }
            else{
                if (strcmp(sauvType, "Int") != 0){
                    printf("Semantic Error, line %d, column %d, Value isn't of the type [ %s ]\n", nb_ligne, Col, sauvType);
                }
                else{
                    inserer((yyvsp[(1) - (5)].STR), "IDF", "Int", 0, (float) (yyvsp[(3) - (5)].INT), 0);
                    sprintf(tmp3, "%d", (yyvsp[(3) - (5)].INT));
                    quadr("=", tmp3, "Empty", (yyvsp[(1) - (5)].STR));
                }
            }    
        ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 226 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (5)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (5)].STR));
            }
            else{
                if (strcmp(sauvType, "Float") != 0){
                    printf("Semantic Error, line %d, column %d, Value isn't of the type [ %s ]\n", nb_ligne, Col, sauvType);
                }
                else{
                    inserer((yyvsp[(1) - (5)].STR), "IDF", "Float", 0, (yyvsp[(3) - (5)].FLOAT), 0);
                    sprintf(tmp3, "%f", (yyvsp[(3) - (5)].FLOAT));
                    quadr("=", tmp3, "Empty", (yyvsp[(1) - (5)].STR));
                }
            }    
        ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 241 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (5)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (5)].STR));
            }
            else{
                if (strcmp(sauvType, "Char") != 0){
                    printf("Semantic Error, line %d, column %d, Value isn't of the type [ %s ]\n", nb_ligne, Col, sauvType);
                }
                else{
                    inserer((yyvsp[(1) - (5)].STR), "IDF", "Char", 0, (float) (yyvsp[(3) - (5)].CHAR), 0);
                    sprintf(tmp3, "'%c'", (yyvsp[(3) - (5)].CHAR));
                    quadr("=", tmp3, "Empty", (yyvsp[(1) - (5)].STR));
                }
            }    
        ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 256 "synt.y"
    {
            if (doubleDeclaration((yyvsp[(1) - (5)].STR))){
                printf("Semantic Error, line %d, column %d, [ %s ] Already declared\n", nb_ligne, Col, (yyvsp[(1) - (5)].STR));
            }
            else{
                if (strcmp(sauvType, "Bool") != 0){
                    printf("Semantic Error, line %d, column %d, Value isn't of the type [ %s ]\n", nb_ligne, Col, sauvType);
                }
                else{
                    inserer((yyvsp[(1) - (5)].STR), "IDF", "Int", 0, (float) (yyvsp[(3) - (5)].BOOL), 0);
                    if ((yyvsp[(3) - (5)].BOOL) == 1){
                        strcpy(tmp3, "true");
                    }
                    else{
                        strcpy(tmp3, "false");
                    }
                    quadr("=", tmp3, "Empty", (yyvsp[(1) - (5)].STR));
                }
            }
        ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 284 "synt.y"
    {pop2();;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 285 "synt.y"
    {
        pop2();
        tmp_int = pop2();
        qc--;
        sprintf(tmp,"%d", qc); 
        ajour_quad(tmp_int, 1, tmp);
   ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 297 "synt.y"
    {
            if (nonDeclare((yyvsp[(1) - (3)].STR))){
                inserer((yyvsp[(1) - (3)].STR), "IDF", sauvType, 0, (yyvsp[(3) - (3)].FLOAT), 0);
            }
            if (typeCompatibilite(get_type((yyvsp[(1) - (3)].STR)), sauvType)){
                printf("Semantic Error, line %d, column %d, Type Incompatibility [ %s (%s) = (%s) ]\n", nb_ligne, Col, (yyvsp[(1) - (3)].STR), get_type((yyvsp[(1) - (3)].STR)), sauvType);
            }
            else{
                if ((strcmp(get_type((yyvsp[(1) - (3)].STR)), sauvType) != 0) && (strcmp(get_type((yyvsp[(1) - (3)].STR)), "Float") != 0)){
                    update_type((yyvsp[(1) - (3)].STR), sauvType);
                }
                update_val((yyvsp[(1) - (3)].STR), (yyvsp[(3) - (3)].FLOAT));
                quadr("=", pop(), "Empty", (yyvsp[(1) - (3)].STR));
            }
            strcpy(sauvType, "NULL");
       ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 313 "synt.y"
    {
            if(nonDeclare((yyvsp[(1) - (6)].STR))){
                printf("Semantic Error, line %d, column %d : [ %s ] Not Declared\n", nb_ligne, Col, (yyvsp[(1) - (6)].STR));
            }
            else{
                if (strcmp(get_code((yyvsp[(1) - (6)].STR)), "IDF Tab") != 0){
                    printf("Semantic Error, line %d, column %d, [ %s ] Has to be a table\n", nb_ligne, Col, (yyvsp[(1) - (6)].STR));
                }
                else{
                    if (outOfRange((yyvsp[(1) - (6)].STR), (yyvsp[(3) - (6)].INT))) {
                        printf("Semantic Error, line %d, column %d : Index [ %d ] Out of range\n", nb_ligne, Col, (yyvsp[(3) - (6)].INT));
                    }
                    else{
                        if (typeCompatibilite(get_type((yyvsp[(1) - (6)].STR)), sauvType)){
                            printf("Semantic Error, line %d, column %d, Type Incompatibility [ %s[%d] (%s) = (%s) ]\n", nb_ligne, Col, (yyvsp[(1) - (6)].STR), (yyvsp[(3) - (6)].INT), get_type((yyvsp[(1) - (6)].STR)), sauvType);
                        }
                        else {
                            set_tab_val((yyvsp[(1) - (6)].STR), (yyvsp[(3) - (6)].INT), (yyvsp[(6) - (6)].FLOAT));
                            sprintf(tabName, "%s[%d]", (yyvsp[(1) - (6)].STR), (yyvsp[(3) - (6)].INT));
                            quadr("=", pop(), "Empty", tabName);
                        }
                    }                      
                }
 
            }
            strcpy(sauvType, "NULL");
       ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 342 "synt.y"
    {
        (yyval.FLOAT) = (yyvsp[(1) - (3)].FLOAT) + (yyvsp[(3) - (3)].FLOAT);
        strcpy(tmp2, pop());
        strcpy(tmp, pop());
        sprintf(tmp4, "temp_var%d", counter);
        counter++;
        quadr("+", tmp, tmp2, tmp4);
        push(tmp4); 
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 351 "synt.y"
    {
        (yyval.FLOAT) = (yyvsp[(1) - (3)].FLOAT) - (yyvsp[(3) - (3)].FLOAT);
        strcpy(tmp2, pop());
        strcpy(tmp, pop());
        sprintf(tmp4, "temp_var%d", counter);
        counter++;
        quadr("-", tmp, tmp2, tmp4);
        push(tmp4); 
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 362 "synt.y"
    {
        (yyval.FLOAT) = (yyvsp[(1) - (3)].FLOAT) * (yyvsp[(3) - (3)].FLOAT);
        strcpy(tmp2, pop());
        strcpy(tmp, pop());
        sprintf(tmp4, "temp_var%d", counter);
        counter++;
        quadr("*", tmp, tmp2, tmp4);
        push(tmp4); 
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 371 "synt.y"
    {
        if (divisionParZero((yyvsp[(3) - (3)].FLOAT))){
            printf("Semantic Error, line %d, column %d, Division By Zero [ %f / %f ]\n", nb_ligne, Col, (yyvsp[(1) - (3)].FLOAT), (yyvsp[(3) - (3)].FLOAT));
        }
        else{
            (yyval.FLOAT) = (yyvsp[(1) - (3)].FLOAT) / (yyvsp[(3) - (3)].FLOAT);
            strcpy(tmp2, pop());
            strcpy(tmp, pop());
            sprintf(tmp4, "temp_var%d", counter);
            counter++;
            quadr("/", tmp, tmp2, tmp4);
            push(tmp4);
        }
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 387 "synt.y"
    {
        (yyval.FLOAT) = (yyvsp[(2) - (3)].FLOAT);
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 390 "synt.y"
    {
        if (strcmp(sauvType, "Float") != 0){
            strcpy(sauvType, "Int");
        }
        sprintf(tmp3, "%d", (yyvsp[(1) - (1)].INT));
        push(tmp3);
        (yyval.FLOAT) = (float) (yyvsp[(1) - (1)].INT);
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 398 "synt.y"
    {
        strcpy(sauvType, "Float");
        sprintf(tmp3, "%f", (yyvsp[(1) - (1)].FLOAT));
        push(tmp3);
        (yyval.FLOAT) = (yyvsp[(1) - (1)].FLOAT);
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 404 "synt.y"
    {
        if ((strcmp(sauvType, "Float") != 0) && (strcmp(sauvType, "Int") != 0)){
            strcpy(sauvType, "Char");
        }
        sprintf(tmp3, "'%c'", (yyvsp[(1) - (1)].CHAR));
        push(tmp3);
        (yyval.FLOAT) = (float) (yyvsp[(1) - (1)].CHAR);
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 412 "synt.y"
    { 
        if ((strcmp(sauvType, "Float") != 0) && (strcmp(sauvType, "Int") != 0) && (strcmp(sauvType, "Char") != 0)){
            strcpy(sauvType, "Bool");
        }
        if ((yyvsp[(1) - (1)].BOOL) == 1){
            strcpy(tmp3, "true");
        }
        else{
            strcpy(tmp3, "false");
        }
        push(tmp3);
        (yyval.FLOAT) = (float) (yyvsp[(1) - (1)].BOOL);
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 425 "synt.y"
    {
        if(!nonDeclare((yyvsp[(1) - (1)].STR))){
            (yyval.FLOAT) = get_val((yyvsp[(1) - (1)].STR));
            strcpy(sauvType, get_type((yyvsp[(1) - (1)].STR)));
            push((yyvsp[(1) - (1)].STR));
        }
        else{
            printf("Semantic Error, line %d, column %d : [ %s ] Not Declared\n", nb_ligne, Col, (yyvsp[(1) - (1)].STR));
        }
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 435 "synt.y"
    {
        if(nonDeclare((yyvsp[(1) - (4)].STR))){
            printf("Semantic Error, line %d, column %d, [ %s ] Not Declared\n", nb_ligne, Col, (yyvsp[(1) - (4)].STR));
        }
        else{
            if (outOfRange((yyvsp[(1) - (4)].STR), (yyvsp[(3) - (4)].INT))) {
                printf("Semantic Error, line %d, column %d, Index [ %d ] Out of range\n", nb_ligne, Col, (yyvsp[(3) - (4)].INT));
            }
            else{
                if (index_check((yyvsp[(1) - (4)].STR), (yyvsp[(3) - (4)].INT))){
                    (yyval.FLOAT) = get_tab_val((yyvsp[(1) - (4)].STR), (yyvsp[(3) - (4)].INT));
                    strcpy(sauvType, get_type((yyvsp[(1) - (4)].STR)));
                    sprintf(tmp3, "%s[%d]", (yyvsp[(1) - (4)].STR), (yyvsp[(3) - (4)].INT));
                    push(tmp3);
                }
                else{
                    printf("Semantic Error, line %d, column %d, %s[%d] Has to be initialized\n", nb_ligne, Col, (yyvsp[(1) - (4)].STR), (yyvsp[(3) - (4)].INT));
                    (yyval.FLOAT) = 0;
                    strcpy(sauvType, get_type((yyvsp[(1) - (4)].STR)));
                    sprintf(tmp3, "%d", 0);
                    push(tmp3);
                }
            }   
        }
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 461 "synt.y"
    {
            tmp_int = pop2();
            pop2();
            sprintf(tmp, "%d", qc);  
            ajour_quad(tmp_int, 1, strdup(tmp));
      ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 468 "synt.y"
    {
            tmp_int = pop2();
            push2(qc);
            quadr("BR", "", "Empty", "Empty"); 
            sprintf(tmp,"%d", qc); 
            ajour_quad(tmp_int, 1, strdup(tmp));
       ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 476 "synt.y"
    {
            pop();
            push2(qc);
            push2(qc);
            sprintf(tmp3, "temp_cond%d", counter2);
            counter2++;
            quadr("BZ", "", tmp3, "Empty");
       ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 486 "synt.y"
    {
                strcpy(tmp2, pop());
                tmp_int = pop2();
                if (!typeCompatibilite(get_type(tmp2), "Int")){
                    sprintf(tmp4, "temp_var%d", counter);
                    counter++;
                    quadr("+", tmp2, "1", tmp4);
                    quadr("=", tmp4, "Empty", tmp2); 
                    sprintf(tmp, "%d", tmp_int);
                    quadr("BR", tmp, "Empty", "Empty"); 
                    sprintf(tmp, "%d", qc); 
                    ajour_quad(tmp_int, 1, strdup(tmp));
                }
             ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 502 "synt.y"
    {
                    pop();
                    pop();
                    if (nonDeclare((yyvsp[(2) - (10)].STR))){
                        inserer((yyvsp[(2) - (10)].STR), "IDF", "Int", 0, 0, 0);
                    }
                    if (typeCompatibilite(get_type((yyvsp[(2) - (10)].STR)), "Int")){
                        printf("Semantic Error, line %d, column %d, [ %s ] Must be an Integer\n", nb_ligne, Col, (yyvsp[(2) - (10)].STR));
                    }
                    else{
                        push((yyvsp[(2) - (10)].STR));
                        sprintf(tmp, "%d", (int) (yyvsp[(6) - (10)].FLOAT));
                        quadr("=", tmp, "Empty", (yyvsp[(2) - (10)].STR));
                        push2(qc);
                        sprintf(tmp3, "temp_cond%d", counter2);
                        counter2++;
                        quadr("BZ", "", tmp3, "Empty"); 
                    }
              ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 522 "synt.y"
    {
                strcpy(tmp2, pop());
                strcpy(tmp, pop());
                if ((!nonDeclare(tmp2)) && (strcmp(get_code(tmp2), "IDF Tab") == 0) && (!typeCompatibilite(get_type(tmp), get_type(tmp2)))){
                    tmp_int = pop2();
                    sprintf(tabName, "%s[Next Index]", tmp2);
                    quadr("=", tabName, "Empty", tmp);
                    sprintf(tmp, "%d", tmp_int);
                    quadr("BR", tmp, "Empty", "Empty"); 
                    sprintf(tmp, "%d", qc);
                    ajour_quad(tmp_int, 1, strdup(tmp));
                }
            ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 536 "synt.y"
    {
                if(nonDeclare((yyvsp[(4) - (6)].STR))){
                    printf("Semantic Error, line %d, column %d, [ %s ] Not Declared\n", nb_ligne, Col, (yyvsp[(4) - (6)].STR));
                }
                else{
                    if (strcmp(get_code((yyvsp[(4) - (6)].STR)), "IDF Tab") != 0){
                        printf("Semantic Error, line %d, column %d, [ %s ] Has to be a table\n", nb_ligne, Col, (yyvsp[(4) - (6)].STR));
                    }
                    else{
                        if (nonDeclare((yyvsp[(2) - (6)].STR))){
                            inserer((yyvsp[(2) - (6)].STR), "IDF", get_type((yyvsp[(4) - (6)].STR)), 0, 0, 0);
                        }
                        if (typeCompatibilite(get_type((yyvsp[(2) - (6)].STR)), get_type((yyvsp[(4) - (6)].STR)))){
                            printf("Semantic Error, line %d, column %d, Type Incompatibility [ %s (%s) - %s (%s) ]\n", nb_ligne, Col, (yyvsp[(2) - (6)].STR), get_type((yyvsp[(2) - (6)].STR)), (yyvsp[(4) - (6)].STR), get_type((yyvsp[(4) - (6)].STR)));
                        }
                        else{
                            sprintf(tabName, "%s[First Index]", (yyvsp[(4) - (6)].STR));
                            quadr("=", tabName, "Empty", (yyvsp[(2) - (6)].STR));
                            push2(qc);
                            sprintf(tmp3, "temp_cond%d", counter2);
                            counter2++;
                            quadr("BZ", "", tmp3, "Empty"); 
                        } 
                    }
                }
                push((yyvsp[(2) - (6)].STR));
                push((yyvsp[(4) - (6)].STR));
            ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 565 "synt.y"
    {
            tmp_int = pop2();
            sprintf(tmp, "%d", tmp_int);
            quadr("BR", tmp, "Empty", "Empty"); 
            sprintf(tmp, "%d", qc); 
            ajour_quad(tmp_int, 1, strdup(tmp));
        ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 573 "synt.y"
    {
            pop();
            push2(qc);
            sprintf(tmp3, "temp_cond%d", counter2);
            counter2++;
            quadr("BZ", "", tmp3, "Empty"); 
        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 582 "synt.y"
    {
        pop(); pop();
        if ((yyvsp[(1) - (3)].FLOAT) > (yyvsp[(3) - (3)].FLOAT)){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 594 "synt.y"
    {
        pop(); pop();
        if ((yyvsp[(1) - (3)].FLOAT) < (yyvsp[(3) - (3)].FLOAT)){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 606 "synt.y"
    {
        pop(); pop();
        if ((yyvsp[(1) - (3)].FLOAT) >= (yyvsp[(3) - (3)].FLOAT)){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 618 "synt.y"
    {
        pop(); pop();
        if ((yyvsp[(1) - (3)].FLOAT) <= (yyvsp[(3) - (3)].FLOAT)){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 630 "synt.y"
    {
        pop(); pop();
        if ((yyvsp[(1) - (3)].FLOAT) == (yyvsp[(3) - (3)].FLOAT)){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 642 "synt.y"
    {
        pop(); pop();
        if ((yyvsp[(1) - (3)].FLOAT) != (yyvsp[(3) - (3)].FLOAT)){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 654 "synt.y"
    {
        if ((yyvsp[(1) - (1)].INT) != 0){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 665 "synt.y"
    {
        if ((yyvsp[(1) - (1)].FLOAT) != 0){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 676 "synt.y"
    {
        if ((float) (yyvsp[(1) - (1)].CHAR) != 0){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 687 "synt.y"
    { 
        (yyval.INT) = (yyvsp[(1) - (1)].BOOL);
        if ((yyvsp[(1) - (1)].BOOL) == 1){
            strcpy(tmp, "true");
        }
        else{
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 697 "synt.y"
    {
         if (!nonDeclare((yyvsp[(1) - (1)].STR))){
            if (get_val((yyvsp[(1) - (1)].STR)) != 0){
                (yyval.INT) = 1;
                strcpy(tmp, "true");
            }
            else{
                (yyval.INT) = 0;
                strcpy(tmp, "false");
            }
            push(tmp);
         }
         else {
             printf("Semantic Error, line %d, column %d, entite '%s' Not Declared\n", nb_ligne, Col, (yyvsp[(1) - (1)].STR));
         }
     ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 713 "synt.y"
    {
         if(nonDeclare((yyvsp[(1) - (4)].STR))){
             printf("Semantic Error, line %d, column %d, entite '%s' Not Declared\n", nb_ligne, Col, (yyvsp[(1) - (4)].STR));
         }
         else{
             if (outOfRange((yyvsp[(1) - (4)].STR), (yyvsp[(3) - (4)].INT))) {
                 printf("Semantic Error, line %d, column %d, Index [ %d ] Out of range\n", nb_ligne, Col, (yyvsp[(3) - (4)].INT));
             }
             else{
                 if (index_check((yyvsp[(1) - (4)].STR), (yyvsp[(3) - (4)].INT))){
                     if (get_tab_val((yyvsp[(1) - (4)].STR), (yyvsp[(3) - (4)].INT)) != 0){
                         (yyval.INT) = 1;
                         strcpy(tmp, "true");
                     }
                     else{
                         (yyval.INT) = 0;
                         strcpy(tmp, "false");
                     }
                     push(tmp);
                 }
                 else{
                     printf("Semantic Error, line %d, column %d, %s[%d] Has to be initialized\n", nb_ligne, Col, (yyvsp[(1) - (4)].STR), (yyvsp[(3) - (4)].INT));
                     (yyval.INT) = 0;
                     strcpy(tmp, "false");
                     push(tmp);
                 }
             }   
         }
     ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 744 "synt.y"
    {
        pop(); pop();
        if (((yyvsp[(1) - (3)].INT) == 1) || ((yyvsp[(3) - (3)].INT) == 1)){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 758 "synt.y"
    {
        pop(); pop();
        if (((yyvsp[(1) - (3)].INT) == 1) && ((yyvsp[(3) - (3)].INT) == 1)){
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        else{
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        push(tmp);
     ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 773 "synt.y"
    {
        pop();
        if ((yyvsp[(2) - (2)].INT) == 1){
            (yyval.INT) = 0;
            strcpy(tmp, "false");
        }
        else{
            (yyval.INT) = 1;
            strcpy(tmp, "true");
        }
        push(tmp);
     ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 788 "synt.y"
    { strcpy(sauvType, "NULL"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2561 "synt.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 791 "synt.y"

int main(){

    initialisation();   // (0) INITIALIZE THE TABLES

    yyin = fopen( "Input/file.mpy", "r" );
    yyparse(); 
    
    afficher();         // (1) LISTING THE TS TABLE
    print_nodes();      // (2) LISTING THE NODES AS A HASHMAP
    print_tabs();       // (3) LISTING THE TAB VALUES INSIDE THE CODE
    afficher_qdr();     // (4) LISTING QUADRUPLETS

    return 0;
}
int yywrap(){}
int yyerror(char* msg){
    printf ("Syntactic Error, line %d, column %d\n", nb_ligne, Col);
}
