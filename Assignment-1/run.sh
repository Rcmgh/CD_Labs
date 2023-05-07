#!/bin/bash

lex lexer.l
yacc -d parser.y -Wno
gcc -g y.tab.c lex.yy.c -ll

./a.out < assign-1_test-1_invalid.c  > assign-1_test-1_invalid.txt
./a.out < assignment-1_nested_do_while_valid.c > assignment-1_nested_do_while_valid.txt


