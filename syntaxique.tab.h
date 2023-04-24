
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
     IMPORT = 265,
     AS = 266,
     NUMPY = 267,
     MATPLOTLIB = 268,
     FOR = 269,
     IN = 270,
     RANGE = 271,
     IF = 272,
     ELSE = 273,
     ELIF = 274,
     DEF = 275,
     IDF = 276,
     VAL_INT = 277,
     VAL_FLOAT = 278,
     VAL_CHAR = 279,
     VAL_STRING = 280,
     INT = 281,
     FLOAT = 282,
     CHAR = 283,
     BOOL = 284,
     PLUS = 285,
     MOIN = 286,
     MULTI = 287,
     DIVISION = 288,
     AND = 289,
     OR = 290,
     NOT = 291,
     INF = 292,
     SUP = 293,
     INF_EGALE = 294,
     SUP_EGALE = 295,
     EGALE_EGALE = 296,
     NOT_EGALE = 297,
     EGALE = 298,
     POURCENT = 299,
     EGUALE = 300,
     COMM = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 4 ".\\syntaxique.y"

	int     entier;
	float   reel;
	char*   string;



/* Line 1676 of yacc.c  */
#line 106 "syntaxique.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


