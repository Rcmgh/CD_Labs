%{
	#include "sym_tab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define YYSTYPE char*
	int type=1;
	char* vval="~";
	int vtype=-1;
	int scope=0;
	int err=0;
	void yyerror(char* s);
	int yylex();
	int arraysize=1;
	extern int yylineno;
	extern char* yytext;

%}
/* declare tokens */
%token T_INT T_CHAR T_DOUBLE T_WHILE  T_INC T_DEC   T_OROR T_ANDAND T_EQCOMP T_NOTEQUAL T_GREATEREQ T_LESSEREQ T_LEFTSHIFT T_RIGHTSHIFT T_PRINTLN T_STRING  T_FLOAT T_BOOLEAN T_IF T_ELSE T_STRLITERAL T_DO T_INCLUDE T_HEADER T_MAIN T_ID T_NUM T_FOR T_OR T_AND T_INCR T_DECR

/* specify start symbol */
%start START


%%
START : PROG { if(err==0) printf("Valid syntax\n");
	 YYACCEPT; }
        ;


PROG : T_INCLUDE '<' T_HEADER '>' PROG
	| MAIN PROG
	| DECLR ';' PROG
	| ASSGN ';' PROG
	| DEC_ASGN';' PROG
	| FOR PROG
	| DO PROG
	| EXPR ';' PROG
	| error{yyerrok;yyclearin;}';' PROG
	|
	;	  

FOR : T_FOR '(' DEC_ASGN';'T_ID REL_OP EXPR ';' EXPR')' '{'{scope++;} STMT '}';
	
DEC_ASGN : {printf(" ");} TYPE LISTVAR;

DECLR : TYPE LISTVAR 
	| TYPE ARRAY
	;

ARRAY : T_ID BRKT {
		if(check_sym_tab($1))
			{
				printf("Variable %s already declared\n",$1);
				yyerror($1);
			}
			else
			{
				insert_symbol($1,size(type)*arraysize,type,yylineno,scope);
				arraysize=1;
				type=-1;
			}
		}
	;

BRKT : '[' T_NUM ']' BRKT { arraysize*=atoi($2);}
		| '[' T_ID ']' BRKT { arraysize*=atoi($2);}
		|
	;
LISTVAR : LISTVAR ',' VAR 
	  | VAR
	  ;

VAR: T_ID '=' EXPR 	{
				if(check_sym_tab($1))
				{
					printf("Variable %s already declared\n",$1);
					yyerror($1);
				}
				else
				{
				insert_symbol($1,size(type),type,yylineno,scope);
				insert_val($1,vval,yylineno);
				vval="~";
				type=-1;
				}
			}
     | T_ID 		{
				if(check_sym_tab($1))
				{
					printf("Variable %s already declared\n",$1);
					yyerror($1);
				}
				else{
				insert_symbol($1,size(type),type,yylineno,scope);
				type=-1;
				}
			}	 
	
TYPE : T_INT {type = INT;}
       | T_FLOAT {type = FLOAT;}
       | T_DOUBLE {type = DOUBLE;}
       | T_CHAR {type = CHAR;}
       ;
  
ASSGN : T_ID {type=retrieve_type($1);}'=' EXPR 	{
				//printf("%s here \n", $1);
				if(!check_sym_tab($1))
				{
					printf("Variable %s not declared\n",$1);
					yyerror($1);
				}
				insert_val($1,vval,yylineno);
				vval="~";
				type=-1;
			}
		|	T_ID BRKT {type=retrieve_type($1);}'=' EXPR 	{
				//printf("%s \n", $1);
				if(!check_sym_tab($1))
				{
					printf("Variable %s not declared\n",$1);
					yyerror($1);
				}
				insert_val($1,vval,yylineno);
				vval="~";
				type=-1;
			}
	;

EXPR : EXPR REL_OP E  
       | E {vval=$1;}
       | EXPR LOGICAL_OP E
	| E UNARY_OP {
		//printf("\n%s,%s\n",$$,$1);
		int xyz = atoi(retrieve_val($1))+1;
	sprintf($$,"%d",xyz);}
	| E UN_OP
       ;
   
E : E '+' T 	{ 
			if(vtype==2)
				sprintf($$,"%d",(atoi($1)+atoi($3)));
			else if(vtype==3)
				sprintf($$,"%lf",(atof($1)+atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
    | E '-' T 	{ 
			if(vtype==2)
				sprintf($$,"%d",(atoi($1)-atoi($3)));
			else if(vtype==3)
				sprintf($$,"%lf",(atof($1)-atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
    | T {
		//printf("\nabcd %s,%s,\n",$$,$1);
		$$=$1;}
    ;
	
	
T : T '*' F 	{ 
			if(vtype==2)
				sprintf($$,"%d",(atoi($1)*atoi($3)));
			else if(vtype==3)
				sprintf($$,"%lf",(atof($1)*atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
    | T '/' F 	{ 
			if(vtype==2)
				sprintf($$,"%d",(atoi($1)/atoi($3)));
			else if(vtype==3)
				sprintf($$,"%lf",(atof($1)/atof($3)));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror($$);
				$$="~";
			}
		}
    | F {$$=$1;}
    ;

F : '(' EXPR ')'
    | T_ID 	{
			//printf("%s %d", $1, yylineno);
			if(check_sym_tab($1))
			{
				char* check=retrieve_val($1);
				if(check=="~")
				{
					printf("Variable %s not initialised",$1);
					yyerror($1);
				}
				else
				{	
					$$=strdup(check);
					vtype=type_check(check);	
					if(vtype!=type && type!=-1)
					{
						printf("Mismatch type\n");
						yyerror($1);
					}	
				}
			}
			else
			{
					printf("Variable %s not declared\n",$1);
					yyerror($1);
			}
		}
    | T_NUM 	{
    			$$=strdup($1); 
    			vtype=type_check($1);
    			if(vtype!=type && type!=-1)
			{
				printf("Mismatch type\n");
				yyerror($1);
			}
		}
    | T_STRLITERAL {
    			$$=strdup($1); 
    			vtype=1;
			if(vtype!=type)
			{
				printf("Mismatch type\n");	
				yyerror($1);
			}
		}
    ;

REL_OP :   T_LESSEREQ
	   | T_GREATEREQ
	   | '<' 
	   | '>' 
	   | T_EQCOMP
	   | T_NOTEQUAL
	   ;	

LOGICAL_OP :T_AND
	|T_OR
	|'!'
	;
	
UNARY_OP : T_INCR {//printf("new %s %d\n", $$, yylineno);
					int ijk = atoi(retrieve_val($1))+1;
					//printf("%s,%s\n",$$,$1);
					//printf("%d", ijk);
					//vval = itoa(ijk, vval, 10);
					char arr[50];
					sprintf(arr, "%d", ijk);
					insert_val($$, arr, yylineno);
					vval = retrieve_val($$);
					
		}
	|T_DECR 
	;
	
UN_OP   : T_INCR 
	|T_DECR 
	|'-'
	|'+'
	|'!'
	;


MAIN : TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{' {scope++;} STMT '}' {scope--;};


EMPTY_LISTVAR : LISTVAR
		|
		;

STMT : STMT_NO_BLOCK STMT
	| BLOCK {scope++;} STMT {scope--;}
	| FOR PROG
	| DO
	| EXPR ';'
	| DEC_ASGN ';' 
	|
	;
	
%nonassoc T_IFX;
%nonassoc T_ELSE;

STMT_NO_BLOCK : DECLR ';'
	| ASSGN ';'
	| T_IF COND {scope++;} STMT {scope--;} %prec T_IFX
	| T_IF COND {scope++;} STMT {scope--;} T_ELSE STMT
	| T_IF COND {scope++;} STMT {scope--;} T_ELSE COND {scope++;} STMT {scope--;} STMT
	| WHILE
	;

DO    : T_DO BLOCK WHILE
      ;
BLOCK : '{' {scope++;} STMT '}' {scope--;};

COND : EXPR  
       | ASSGN
       ;

WHILE : T_WHILE '(' COND ')' WHILE_2;

WHILE_2 : '{'{scope++;} STMT '}'{scope--;}
	| ';'
	;

%%

void yyerror(char* s)
{
	err+=1;
	printf("Error :syntax error,line number:%d,token:%s \n",yylineno,yytext);
}
int yywrap()
{
    return(1);
}

int main(int argc, char* argv[])
{
	t=init_table();
	//printf("here \n");
	yyparse();
	display_symbol_table();
	return 0;
}

