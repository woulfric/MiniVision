%{
   #include<stdio.h>
   #include<stdlib.h>
   #include<string.h>
%}
%union{
	int     entier;
	float   reel;
	char*   string;
}

%token PARENTESE_OUVRANTE PARENTESE_FERMANTE ACOLADE_OUVRANTE ACOLADE_FERMANTE VRG DEUX_POINTS POINT GUI1 GUI2 CROCHET_OUVRANT CROCHET_FERMANT
%token MC_IMPORT AS NUMPY MATPLOTLIB FOR IN RANGE IF ELSE ELIF 
%token DEF  
%token <string>IDF <entier>VAL_INT <reel>VAL_FLOAT <string>VAL_CHAR <string>VAL_STRING
%token INT FLOAT CHAR BOOL 
%token PLUS MOIN MULTI DIVISION AND OR NOT INF SUP INF_EGALE SUP_EGALE EGALE_EGALE NOT_EGALE EGALE POURCENT 
%token COMM

%left SUP SUP_EGALE EGALE INF_EGALE INF
%left PLUS MOIN
%left MULTI DIVISION
%left AND
%left OR NOT

%right PARENTESE_OUVRANTE PARENTESE_FERMANTE

%%
S : STATEMENT {printf("programe correct syntaxiquement"); YYACCEPT;};

STATEMENT :  IMPORT_STATEMENT S
            | DECLARATION S 
            | DECLARATION_TYPE S 
            | IF_STATEMENT S 
            | LOOP S 
            | 

IMPORT_STATEMENT: MC_IMPORT LIB AS IDF IMPORT_STATEMENT
		| 
		;
LIB:    NUMPY | MATPLOTLIB


DECLARATION : IDF VRG DECLARATION
            | IDF EGALE VALUE DECLARATION 
            |
            ;

DECLARATION_TYPE : IDF DEUX_POINTS TYPE EGALE Expression


TYPE  : INT
      | FLOAT
      | CHAR
      | BOOL

OPPERATOR :     PLUS
               |MOIN 
               |MULTI  
               |DIVISION  
               |POURCENT  

LOGICAL_OPPERATOR :      AND
                        |OR

VALUE :   VAL_INT
         |VAL_FLOAT
         |VAL_CHAR
         |VAL_STRING
         ;

Expression :     VALUE
                |IDF
                |Expression OPPERATOR Expression
                |PARENTESE_OUVRANTE Expression PARENTESE_FERMANTE
                |GUI2 IDF GUI2
                |GUI1 IDF GUI1
                |IDF PARENTESE_OUVRANTE Expression PARENTESE_FERMANTE
                |CROCHET_OUVRANT Expression CROCHET_FERMANT
                |IDF CROCHET_OUVRANT Expression CROCHET_FERMANT
                |
                ;

IF_STATEMENT   : IF PARENTESE_OUVRANTE CONDITION PARENTESE_FERMANTE DEUX_POINTS STATEMENT ELIF_STMT ELSE_STMT

ELIF_STMT :  ELIF CONDITION DEUX_POINTS STATEMENT
            |ELIF
            |
            ;

ELSE_STMT :  ELSE DEUX_POINTS STATEMENT
            |
            ;

CONDITION :     Expression COND_OPP Expression
               |CONDITION LOGICAL_OPPERATOR CONDITION

COND_OPP :   EGALE_EGALE
            |SUP
            |SUP_EGALE
            |INF
            |INF_EGALE

LOOP  : FOR PARENTESE_OUVRANTE Expression PARENTESE_FERMANTE IN RANGE PARENTESE_OUVRANTE VAL_INT PARENTESE_FERMANTE DEUX_POINTS STATEMENT;

%%


void main(){
    
   yyparse();
   afficher();
}

int yywrap(){

   return 1;
}

int yyerror(char *msg){

  printf("\nErreur Syntaxique");
   return 1;
}
