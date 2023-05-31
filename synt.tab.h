
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

/* Line 1676 of yacc.c  */
#line 63 "synt.y"

    int INT;
    float FLOAT;
    char CHAR;
    char *STR;
    int BOOL;



/* Line 1676 of yacc.c  */
#line 103 "synt.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


