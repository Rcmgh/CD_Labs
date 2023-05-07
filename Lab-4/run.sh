#!/bin/bash

lex lexer.l
yacc -d parser.y
gcc -g y.tab.c lex.yy.c -ll

./a.out < test_input_1.c > output1.txt
./a.out < test_input_2.c > output2.txt