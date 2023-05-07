a.exe: y.tab.c lex.yy.c
	gcc y.tab.c lex.yy.c
y.tab.c: PES1UG20CS563_parser.y
	bison -dy PES1UG20CS575_parser.y
lex.yy.c: PES1UG20CS563_Lexer.l
	flex PES1UG20CS563_Lexer.l