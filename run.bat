flex lexical.l
bison -d synt.y -v
gcc lex.yy.c synt.tab.c -lfl -ly -o prog.exe