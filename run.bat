cls
del lex.yy.c
flex lexical.l
bison -d syntaxique.y
gcc lex.yy.c syntaxique.tab.c  -o prog
prog.exe <code.txt