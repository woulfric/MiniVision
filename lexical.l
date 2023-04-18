%{
    #include "syntaxique.tab.h"
    int line = 1, col = 1;
%}

lettreMaj   [A-Z]
lettreMin   [a-z]
lettre      [a-zA-Z]
chiffre     [0-9]
idf         [a-zA-Z][a-zA-Z0-9_]*
comment     \#(.*\n)

%%


"."     {col++;printf("POINT : %s ==> ligne :%d colone : %d \n",yytext,line,col); return POINT;}

"("     {col++;printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return PARENTESE_OUVRANTE;}
")"     {col++;printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return PARENTESE_FERMANTE;}
"["     {col++;printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return ACOLADE_OUVRANTE;}
"]"     {col++;printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return ACOLADE_FERMANTE;}
","     {col++;printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return VRG;}
":"     {col++;printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return DEUX_POINTS;}
"%"     {col++;printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return POURCENT;}


"int"       {col++;printf("TYPE : %s ==> ligne :%d colone : %d \n",yytext,line,col); return INT;}
"float"     {col++;printf("TYPE : %s ==> ligne :%d colone : %d \n",yytext,line,col); return FLOAT;}
"char"      {col++;printf("TYPE : %s ==> ligne :%d colone : %d \n",yytext,line,col); return CHAR;}
"bool"      {col++;printf("TYPE : %s ==> ligne :%d colone : %d \n",yytext,line,col); return BOOL;}

"+"        {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return PLUS;}
"-"        {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return MOIN;}
"*"        {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return MULTI;}
"/"        {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return DIVISION;}
"and"      {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return AND;}
"or"       {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return OR;}
"not"      {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return NOT;}
"<"        {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return INF;}
">"        {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return SUP;}
"<="       {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return INF_EGALE;}
">="       {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return SUP_EGALE;}
"=="       {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return EGALE_EGALE;}
"!="       {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return NOT_EGALE;}
"="        {col++;printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return EGALE;}


"#"     {col++;printf("commentaire : %s ==> ligne :%d colone : %d \n",yytext,line,col); return COMM;}


"import"                {col++;printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return IMPORT;}
"as"                    {col++;printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return AS;}
"for"                   {col++;printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return FOR;}
"in"                    {col++;printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return IN;}
"range"                 {col++;printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return RANGE;}
"if"                    {col++;printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return IF;}
"else"                  {col++;printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return ELSE;}
"elif"                  {col++;printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return ELIF;}
"def"                   {col++;printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return DEF;}


"numpy"                 {col++;printf("IDF : %s ==> ligne :%d colone : %d \n",yytext,line,col); return NUMPY;}
"matplotlib.pyplot"     {col++;printf("IDF : %s ==> ligne :%d colone : %d \n",yytext,line,col); return MATPLOTLIB;}
{comment}               {printf("commentaire : %s ==> ligne :%d colone : %d \n",yytext,line,col);}
{idf}                   {col++;printf("IDF : %s ==> ligne :%d colone : %d \n",yytext,line,col); return IDF;}

[ \t]
[\n]        {line++; col = 1;}
.           {col++; printf("erreur lexicale a la ==> ligne %d, colone %d \n",line,col);}

%%
