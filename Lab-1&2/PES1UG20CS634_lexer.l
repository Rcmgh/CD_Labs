%{
	#include<stdio.h>
	#include "y.tab.h"
	int yywrap();
	int yylineno;
%}


letter             [a-zA-Z]
digit              [0-9]
id                 {letter}(_|{letter}|{digit})*
opsign             [+-]?
opfrac             (\.{digit})?
opexponent         ([Ee][+-]?{digit}+)?
number             {opsign}{digit}+{opfrac}{opexponent}
start	             \/\*
end	             \*\/	


%%
\/\/(.*)           ;
\/\*(.*\n)*.*\*\/{};
int	             return INT;
float	             return FLOAT;
char	             return CHAR;
bool	             return BOOL;
double	       return DOUBLE;
static 	       return STATIC;
main	             return MAIN;
if	             return IF;
else	             return ELSE;
for	             return FOR;
while			 return WHILE;
do		     	 return DO;
break			 return BREAK;
#include 		 return INCLUDE;
"<"(.+)".h>" 	 return HEADER;
{id}			 return ID;
{number}		 return VNUM;
"<"	 		 return LT;
">"			 return GT;
">="			 return GTE;	
"<="			 return LTE;
"=="			 return EQ;
"!="			 return NE;
"++"			 return INC;
"--"		     	 return DEC;
"||"		 	 return OR;
"&&"  	   	 return AND;
"!"	 	       return LNOT;
"("			 return BCOM;
")"			 return ECOM;
"["			 return BSQ;
"]"			 return ESQ;
"{"			 return BCUR;
"}"			 return ECUR;
\r			 ;
[' '|'\t']		 ;
\n			 ++yylineno;
.			 return *yytext;

%%
int yywrap()
{

}