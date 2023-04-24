%{
    #include "syntaxique.tab.h"
    int line = 1, col = 1;
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


"."     {col = col+strlen(yytext);printf("POINT : %s ==> ligne :%d colone : %d \n",yytext,line,col); return POINT;}

"("     {col = col+strlen(yytext);printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return PARENTESE_OUVRANTE;}
")"     {col = col+strlen(yytext);printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return PARENTESE_FERMANTE;}
"["     {col = col+strlen(yytext);printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return ACOLADE_OUVRANTE;}
"]"     {col = col+strlen(yytext);printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return ACOLADE_FERMANTE;}
","     {col = col+strlen(yytext);printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return VRG;}
":"     {col = col+strlen(yytext);printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return DEUX_POINTS;}
"%"     {col = col+strlen(yytext);printf("SEP : %s ==> ligne :%d colone : %d \n",yytext,line,col); return POURCENT;}


"int"       {col = col+strlen(yytext);printf("TYPE : %s ==> ligne :%d colone : %d \n",yytext,line,col); return INT;}
"float"     {col = col+strlen(yytext);printf("TYPE : %s ==> ligne :%d colone : %d \n",yytext,line,col); return FLOAT;}
"char"      {col = col+strlen(yytext);printf("TYPE : %s ==> ligne :%d colone : %d \n",yytext,line,col); return CHAR;}
"bool"      {col = col+strlen(yytext);printf("TYPE : %s ==> ligne :%d colone : %d \n",yytext,line,col); return BOOL;}

"+"        {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return PLUS;}
"-"        {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return MOIN;}
"*"        {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return MULTI;}
"/"        {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return DIVISION;}
"and"      {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return AND;}
"or"       {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return OR;}
"not"      {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return NOT;}
"<"        {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return INF;}
">"        {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return SUP;}
"<="       {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return INF_EGALE;}
">="       {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return SUP_EGALE;}
"=="       {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return EGALE_EGALE;}
"!="       {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return NOT_EGALE;}
"="        {col = col+strlen(yytext);printf("OPR : %s ==> ligne :%d colone : %d \n",yytext,line,col); return EGALE;}


"#"     {col = col+strlen(yytext);printf("commentaire : %s ==> ligne :%d colone : %d \n",yytext,line,col); return COMM;}


"import"                {col = col+strlen(yytext);printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return MC_IMPORT;}
"as"                    {col = col+strlen(yytext);printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return AS;}
"for"                   {col = col+strlen(yytext);printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return FOR;}
"in"                    {col = col+strlen(yytext);printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return IN;}
"range"                 {col = col+strlen(yytext);printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return RANGE;}
"if"                    {col = col+strlen(yytext);printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return IF;}
"else"                  {col = col+strlen(yytext);printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return ELSE;}
"elif"                  {col = col+strlen(yytext);printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return ELIF;}
"def"                   {col = col+strlen(yytext);printf("MC : %s ==> ligne :%d colone : %d \n",yytext,line,col); return DEF;}


"numpy"                 {col = col+strlen(yytext);printf("IDF : %s ==> ligne :%d colone : %d \n",yytext,line,col); return NUMPY;}
"matplotlib.pyplot"     {col = col+strlen(yytext);printf("IDF : %s ==> ligne :%d colone : %d \n",yytext,line,col); return MATPLOTLIB;}


{CST_CHAR}              {col = col+strlen(yytext);printf("caractere reconnue %s \n", yytext ); return VAL_CHAR;}
{CST_STRING}            {col = col+strlen(yytext);printf("chaine de caractere reconnue %s \n" , yytext );return VAL_STRING;}
{CST_INT}               {if(atoi(yytext)<-32768||atoi(yytext)>32768){printf("integer invalide ligne:%d,colonne:%d",line,col);}
                         else{
                                yylval.entier=atoi(yytext);     
                                printf("Entite Lexical reconnue %s \n" , yytext );
                                col = col + strlen(yytext);
                                return VAL_INT;}
                        } 
{CST_FLOAT}             {col = col+strlen(yytext);printf("REEL reconnue : %s \n",yytext); return VAL_FLOAT;}
{comment}               {printf("commentaire : %s ==> ligne :%d colone : %d \n",yytext,line,col);}
{idf}                   {col = col+strlen(yytext);printf("IDF : %s ==> ligne :%d colone : %d \n",yytext,line,col); return IDF;}

[ \t]
[\n]        {line++; col = 1;}
.           {col = col+strlen(yytext); printf("erreur lexicale a la ==> ligne %d, colone %d \n",line,col);}

%%
