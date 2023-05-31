
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
     WHILE = 279,
     DEF = 280,
     IDF = 281,
     VAL_INT = 282,
     VAL_FLOAT = 283,
     VAL_CHAR = 284,
     VAL_STRING = 285,
     INT = 286,
     FLOAT = 287,
     CHAR = 288,
     BOOL = 289,
     PLUS = 290,
     MOIN = 291,
     MULTI = 292,
     DIVISION = 293,
     AND = 294,
     OR = 295,
     NOT = 296,
     INF = 297,
     SUP = 298,
     INF_EGALE = 299,
     SUP_EGALE = 300,
     EGALE_EGALE = 301,
     NOT_EGALE = 302,
     EGALE = 303,
     POURCENT = 304,
     COMM = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 11 "syntaxique.y"

	int     entier;
	float   reel;
	char*   string;



/* Line 1676 of yacc.c  */
#line 110 "syntaxique.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


