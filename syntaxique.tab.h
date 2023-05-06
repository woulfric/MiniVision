
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PARENTESE_OUVRANTE = 258,
     PARENTESE_FERMANTE = 259,
     ACOLADE_OUVRANTE = 260,
     ACOLADE_FERMANTE = 261,
     VRG = 262,
     DEUX_POINTS = 263,
     POINT = 264,
     GUI1 = 265,
     GUI2 = 266,
     CROCHET_OUVRANT = 267,
     CROCHET_FERMANT = 268,
     MC_IMPORT = 269,
     AS = 270,
     NUMPY = 271,
     MATPLOTLIB = 272,
     FOR = 273,
     IN = 274,
     RANGE = 275,
     IF = 276,
     ELSE = 277,
     ELIF = 278,
     DEF = 279,
     IDF = 280,
     VAL_INT = 281,
     VAL_FLOAT = 282,
     VAL_CHAR = 283,
     VAL_STRING = 284,
     INT = 285,
     FLOAT = 286,
     CHAR = 287,
     BOOL = 288,
     PLUS = 289,
     MOIN = 290,
     MULTI = 291,
     DIVISION = 292,
     AND = 293,
     OR = 294,
     NOT = 295,
     INF = 296,
     SUP = 297,
     INF_EGALE = 298,
     SUP_EGALE = 299,
     EGALE_EGALE = 300,
     NOT_EGALE = 301,
     EGALE = 302,
     POURCENT = 303,
     COMM = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 6 "syntaxique.y"

	int     entier;
	float   reel;
	char*   string;



/* Line 1676 of yacc.c  */
#line 109 "syntaxique.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


