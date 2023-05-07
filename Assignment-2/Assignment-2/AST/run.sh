lex lexer.l
yacc -d parser.y
gcc -g y.tab.c lex.yy.c -ll

echo -e "\n-----------OUTPUT 1---------------"
./a.out <sample1.c
echo -e "\n-----------OUTPUT 2---------------"
./a.out <sample2.c
echo -e "\n-----------OUTPUT 2---------------"
./a.out <sample3.c

rm lex.yy.c
rm y.tab.c
rm y.tab.h
rm ./a.out