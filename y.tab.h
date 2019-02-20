/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AND = 258,
    OR = 259,
    GE = 260,
    LE = 261,
    EQ = 262,
    NE = 263,
    FALSE = 264,
    TRUE = 265,
    IF = 266,
    ELSE = 267,
    WHILE = 268,
    FOR = 269,
    PRINT = 270,
    BOOL_TYPE = 271,
    INT_TYPE = 272,
    ID = 273,
    VAL = 274,
    IF_ALONE = 275,
    INC = 276,
    DEC = 277,
    INCX = 278,
    DECX = 279,
    MODX = 280,
    MULX = 281,
    DIVX = 282
  };
#endif
/* Tokens.  */
#define AND 258
#define OR 259
#define GE 260
#define LE 261
#define EQ 262
#define NE 263
#define FALSE 264
#define TRUE 265
#define IF 266
#define ELSE 267
#define WHILE 268
#define FOR 269
#define PRINT 270
#define BOOL_TYPE 271
#define INT_TYPE 272
#define ID 273
#define VAL 274
#define IF_ALONE 275
#define INC 276
#define DEC 277
#define INCX 278
#define DECX 279
#define MODX 280
#define MULX 281
#define DIVX 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "parser.y" /* yacc.c:1909  */

  int value;
  size_t id;
  struct expr *expr;
  enum value_type {
    ERROR = -1,
    UNTYPED = 0,
    INTEGER = 1,
    BOOLEAN = 2,
  } type;
  struct stmt *stmt;

#line 121 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void *module, void *builder);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
