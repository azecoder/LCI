%{
  #include "y.tab.h"
  #include <stdlib.h>
  #include "utils.h"
  #include <llvm-c/Core.h>

  void yyerror(LLVMModuleRef module, LLVMBuilderRef builder, const char* s);
%}

DIGIT    [0-9]
ID       [A-Za-z][A-Za-z0-9]*

%option noyywrap
%%

if                        { return IF; }
else                      { return ELSE; }
while                     { return WHILE; }
do                        { return DO; }
for                       { return FOR; }
print                     { return PRINT; }
int                       { return INT_TYPE; }
float                     { return FLOAT_TYPE; }
bool                      { return BOOL_TYPE; }
true                      { return TRUE; }
false                     { return FALSE; }
{DIGIT}+                  { yylval.value = atoi(yytext); return VAL; }
{DIGIT}+.{DIGIT}+         { yylval.value = atof(yytext); return VAL2; }
{ID}                      { yylval.id = string_int_get(&global_ids, yytext); return ID; }
[ \t\r\n]+                /* discard whitespace */
[-*/+%><=;\{\}\(\)]       { return *yytext; }
&&                        { return AND; }
\|\|                      { return OR; }
\++                       { return INC; }
--                        { return DEC; }
\+=                       { return INCX; }
-=                        { return DECX; }
\*=                        { return MULX; }
\/=                        { return DIVX; }
%=                        { return MODX; }
\>=                       { return GE; }
\<=                       { return LE; }
==                        { return EQ; }
!=                        { return NE; }
.                         yyerror(NULL, NULL, "Unexpected character");

%%
