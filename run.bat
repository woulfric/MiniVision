cls
del lex.yy.c
del syntaxique.tab.c
del syntaxique.tab.h
del prog.exe
flex lexical.l
bison -d syntaxique.y
gcc lex.yy.c syntaxique.tab.c  -o prog
prog.exe <code.txt