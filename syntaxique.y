%{

%}

%token PARENTESE_OUVRANTE PARENTESE_FERMANTE ACOLADE_OUVRANTE ACOLADE_FERMANTE VRG DEUX_POINTS POURCENT EGUALE COMM POINT IMPORT AS NUMPY MATPLOTLIB FOR IN RANGE IDF INT FLOAT CHAR BOOL PLUS MOIN MULTI DIVISION AND OR NOT INF SUP INF_EGALE SUP_EGALE EGALE_EGALE NOT_EGALE EGALE

%%

S: IMPORT_LIB IMPORT_LIB DECLARTION { printf("programe correct syntaxiquement"); YYACCEPT;};

IMPORT_LIB: IMPORT LIB AS IDF
LIB: NUMPY | MATPLOTLIB 

DECLARTION: IDF EGALE VAL
VAL: IDF

%%

main(){
    yyparse();
    yywrap();
}
