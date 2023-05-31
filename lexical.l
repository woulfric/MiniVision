%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "syntaxique.tab.h"
    #include "ts.h" 
    extern int line;
    extern int col;
%}

lettreMaj   [A-Z]
lettreMin   [a-z]
lettre      [a-zA-Z]
chiffre     [0-9]

CST_CHAR    \'[^']\'
CST_STRING  \"[^"$&%@#]*\"
CST_INT     ({chiffre}+|"\("[+-]{chiffre}+"\)")
CST_FLOAT	({chiffre}+"."{chiffre}+|\([+-]{chiffre}+"."{chiffre}+\))

idf         [a-zA-Z][a-zA-Z0-9_]*
comment     \#(.*\n)

%%

"."     {printf("SEP : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return POINT;}
"("     {printf("SEP : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return PARENTESE_OUVRANTE;}
")"     {printf("SEP : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return PARENTESE_FERMANTE;}
"["     {printf("SEP : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return ACOLADE_OUVRANTE;}
"]"     {printf("SEP : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return ACOLADE_FERMANTE;}
","     {printf("SEP : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return VRG;}
":"     {printf("SEP : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return DEUX_POINTS;}
"%"     {printf("SEP : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return POURCENT;}

"+"        {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return PLUS;}
"-"        {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return MOIN;}
"*"        {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return MULTI;}
"/"        {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return DIVISION;}
"and"      {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return AND;}
"or"       {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return OR;}
"not"      {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return NOT;}
"<"        {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return INF;}
">"        {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return SUP;}
"<="       {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return INF_EGALE;}
">="       {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return SUP_EGALE;}
"=="       {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return EGALE_EGALE;}
"!="       {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return NOT_EGALE;}
"="        {printf("OPR : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "SEP", "",  0, 2); return EGALE;}


"#"     {printf("commentaire : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); return COMM;}

"int"       {printf("TYPE : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return INT;}
"float"     {printf("TYPE : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return FLOAT;}
"char"      {printf("TYPE : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return CHAR;}
"bool"      {printf("TYPE : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return BOOL;}

"import"                {printf("MC : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return MC_IMPORT;}
"as"                    {printf("MC : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return AS;}
"for"                   {printf("MC : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return FOR;}
"in"                    {printf("MC : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return IN;}
"range"                 {printf("MC : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return RANGE;}
"if"                    {printf("MC : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return IF;}
"else"                  {printf("MC : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return ELSE;}
"elif"                  {printf("MC : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return ELIF;}
"def"                   {printf("MC : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return DEF;}


"numpy"                 {printf("LIB : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return NUMPY;}
"matplotlib.pyplot"     {printf("LIB : %s ==> ligne :%d  \n",yytext,line); col = col+strlen(yytext); rechercher(yytext, "MC", "", 0, 1); return MATPLOTLIB;}


{CST_CHAR}              {printf("CHAR : %s ==> ligne :%d  \n",yytext,line,col)       ; col = col+strlen(yytext); rechercher(yytext, "CST", "CHAR", 0, 0)            ; return VAL_CHAR;}
{CST_STRING}            {printf("STRING : %s ==> ligne :%d  \n",yytext,line,col)     ; col = col+strlen(yytext); rechercher(yytext, "CST", "STRING", 0, 0)          ; return VAL_STRING;}    
{CST_INT}               {if ((atoi(yytext)>= -32768) && (atoi(yytext)<=32767)){
                                printf("INT : %s ==> ligne :%d  \n",yytext,line,col)        ; col = col+strlen(yytext); rechercher(yytext, "CST", "INT", atoi(yytext), 0)  ; return VAL_INT;
                                }
							else {
								printf("Erreur lexicale (ligne : %d\n", line);
								printf("- La valeur d'un entier doit etre -32768 et 32767 \n");
							}} 

{CST_FLOAT}             {printf("FLOAT : %s ==> ligne :%d  \n",yytext,line,col)      ; col = col+strlen(yytext); rechercher(yytext, "CST", "FLOAT", atoi(yytext), 0); return VAL_FLOAT;}
{comment}               {printf("commentaire : %s ==> ligne :%d  \n",yytext,line,col); col = col+strlen(yytext);}
{idf}                   {if (yyleng>8) { 
								printf("Erreur Lexical, ligne %d, IDF trop long \n ",line);
								printf("- La longueur d'un IDF doit etre entre 1 et 8 caracteres \n");
							}else {
                            printf("IDF : %s ==> ligne :%d  \n",yytext,line,col)        ; col = col+strlen(yytext); rechercher(yytext,"IDF","",0,0)                    ; return IDF;
                            }
                        }

[ \t]
[\n]        {line++; col = 1;}
.           {col = col+strlen(yytext); printf("erreur lexicale a la ==> ligne %d, colone %d \n",line,col);}

%%
