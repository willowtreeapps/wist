grammar BrightScript;

startRule
    : component EOF
    ;

component
    : endOfLine* libraryStatement* endOfLine* componentBody
    ;

componentBody
    : componentBodyElement (endOfLine+ componentBodyElement)* endOfLine*
    ;

componentBodyElement
    : functionDeclaration
    | subDeclaration
    ;

block
    : blockStatement (endOfStatement blockStatement)* endOfStatement+
    ;

blockStatement
    : comment
    | dimStatement
    | exitStatement
    | forStatement
    | forEachStatement
    | ifThenElseStatement
    | nextStatement
    | printStatement
    | returnStatement
    | stopStatement
    | whileStatement
    | expression
    ;

arrayInitializer
    : '[' NEWLINE* ((expression | arrayInitializer | associativeArrayInitializer) ((',' | endOfLine) NEWLINE* (expression | arrayInitializer | associativeArrayInitializer))*)? NEWLINE* ']'
    ;

associativeArrayInitializer
    : '{' NEWLINE* (associativeElementInitializer ((',' | endOfLine) NEWLINE* associativeElementInitializer)*)? NEWLINE* '}'
    ;

associativeElementInitializer
    : (identifier | reservedWord | stringLiteral) ':' assignableExpression
    ;

dimStatement
    : DIM identifier '[' parameterList ']'
    ;

exitStatement
    : EXIT WHILE
    | EXIT FOR
    ;

forStatement
    : FOR identifier '=' expression TO expression (STEP expression)? endOfLine+ block* nextStatement? (END FOR)?
    ;

forEachStatement
    : FOR EACH identifier IN expression endOfLine+ block* nextStatement? (END FOR)?
    ;

ifThenElseStatement
    : IF expression THEN? blockStatement (ELSE blockStatement)?
    | ifBlockStatement ifElseIfBlockStatement* ifElseBlockStatement? END IF
    ;

ifBlockStatement
    : IF expression THEN? endOfLine+ block*
    ;

ifElseIfBlockStatement
    : ELSE IF expression THEN? endOfLine+ block*
    ;

ifElseBlockStatement
    : ELSE endOfLine+ block*
    ;

libraryStatement
    : LIBRARY STRING_LITERAL
    ;

nextStatement
    : NEXT
    ;

printStatement
    : (PRINT | QUESTION_MARK) (expression (';'? expression)* ';'?)?
    ;

returnStatement
    : RETURN assignableExpression?
    ;

stopStatement
    : STOP
    ;

whileStatement
    : WHILE expression endOfLine+ block* END WHILE
    ;

anonymousFunctionDeclaration
    : FUNCTION parameterList? (AS baseType)? endOfLine+ block* END FUNCTION
    ;

functionDeclaration
    : FUNCTION untypedIdentifier parameterList? (AS baseType)? endOfLine+ block* END FUNCTION
    ;

anonymousSubDeclaration
    : SUB parameterList? endOfLine+ block* END SUB
    ;

subDeclaration
    : SUB untypedIdentifier parameterList? endOfLine+ block* END SUB
    ;

parameterList
    : '(' (parameter (',' parameter)*)? ')'
    ;

parameter
    : (literal | identifier) ('=' assignableExpression)? (AS baseType)?
    ;

baseType
    : BOOLEAN
    | DOUBLE
    | DYNAMIC
    | FLOAT
    | FUNCTION
    | INTEGER
    | OBJECT
    | STRING
    | VOID
    ;

expressionList
    : (expression | associativeArrayInitializer | arrayInitializer) (',' (expression | associativeArrayInitializer | arrayInitializer))*
    ;

globalFunctionInvocation
    : globalFunction '(' expressionList ')'
    ;

globalFunction
    : CREATEOBJECT
    | GETLASTRUNCOMPILEERROR
    | GETGLOBALAA
    | GETLASTRUNRUNTIMEERROR
    | STRING
    | TAB
    ;

expression
    : primary
    | expression '.' (identifier | reservedWord)
    | expression '[' expression ']'
    | globalFunctionInvocation
    | expression '(' expressionList? ')'
    | ('+'|'-') expression
    | expression ('++'|'--')
    | expression ('*'|'/'|MOD|'\\') expression
    | expression ('+'|'-') expression
    | expression ('<<'|'>>') expression
    | expression ('<'|'>'|'='|'<>'|'<='|'>=') expression
    | NOT expression
    | expression (AND|OR) expression
    | <assoc=right> expression ('='|'+='|'-='|'*='|'/='|'\\='|'>>='|'<<='|'%=') assignableExpression
    ;

primary
    : '(' expression ')'
    | literal
    | identifier
    | reservedWord '(' expression ')'
    ;

literal
    : numberLiteral
    | stringLiteral
    | booleanLiteral
    | invalidLiteral
    ;

assignableExpression
    : expression
    | arrayInitializer
    | associativeArrayInitializer
    | anonymousFunctionDeclaration
    | anonymousSubDeclaration
    ;

numberLiteral
    : INT_LITERAL
    | FLOAT_LITERAL
    ;

stringLiteral
    : STRING_LITERAL
    ;

booleanLiteral
    :  TRUE
    |  FALSE
    ;

invalidLiteral
    : INVALID
    ;

identifier
    : IDENTIFIER IDENTIFIER_TYPE_DECLARATION?
    ;

untypedIdentifier
    : IDENTIFIER
    ;

reservedWord
    : AND
    | BOX
    | CREATEOBJECT
    | DIM
    | EACH
    | ELSE
    | ELSEIF
    | END
    | ENDFUNCTION
    | ENDIF
    | ENDSUB
    | ENDWHILE
    | EVAL
    | EXIT
    | EXITWHILE
    | FALSE
    | FOR
    | FUNCTION
    | GETGLOBALAA
    | GETLASTRUNCOMPILEERROR
    | GETLASTRUNRUNTIMEERROR
    | GOTO
    | IF
    | INVALID
    | LET
    | LINE_NUM
    | NEXT
    | NOT
    | OBJFUN
    | OR
    | POS
    | PRINT
    | REM
    | RETURN
    | RUN
    | STEP
    | STOP
    | SUB
    | TAB
    | THEN
    | TO
    | TRUE
    | TYPE
    | WHILE
    ;

comment
    : COMMENT
    ;

endOfLine
    : (NEWLINE | comment) NEWLINE*
    ;

endOfStatement
    : (endOfLine | ':') NEWLINE*
    ;

AND
    : A N D
    ;

AS  : A S
    ;

BOOLEAN
    : B O O L E A N
    ;

BOX
    : B O X
	;

CREATEOBJECT
    : C R E A T E O B J E C T
    ;

DIM
    : D I M
	;

DOUBLE
    : D O U B L E
    ;

DYNAMIC
    : D Y N A M I C
    ;

EACH
    : E A C H
	;

ELSE
    : E L S E
	;

ELSEIF
    : E L S E I F
	;

END
    : E N D
	;

ENDFUNCTION
    : E N D F U N C T I O N
	;

ENDIF
    : E N D I F
	;

ENDSUB
    : E N D S U B
	;

ENDWHILE
    : E N D W H I L E
	;

EXIT
    : E X I T
	;

EXITWHILE
    : E X I T W H I L E
	;

EVAL
    : E V A L
    ;

FALSE
    : F A L S E
	;

FLOAT
    : F L O A T
    ;

FOR
    : F O R
	;

FUNCTION
    : F U N C T I O N
	;

GETGLOBALAA
    : G E T G L O B A L A A
    ;

GETLASTRUNCOMPILEERROR
    : G E T L A S T R U N C O M P I L E E R R O R
    ;

GETLASTRUNRUNTIMEERROR
    : G E T L A S T R U N R U N T I M E E R R O R
    ;

GOTO
    : G O T O
	;

IF
    : I F
	;

IN
    : I N
    ;

INTEGER
    : I N T E G E R
    ;

INTERFACE
    : I N T E R F A C E
    ;

INVALID
    : I N V A L I D
	;

LET
    : L E T
	;

LIBRARY
    : L I B R A R Y
    ;
    
LINE_NUM
    : L I N E '_' N U M
    ;

MOD
    : M O D
    ;

NEXT
    : N E X T
	;

NOT
    : N O T
	;

OBJECT
    : O B J E C T
    ;

OBJFUN
    : O B J F U N
	;

OR
    : O R
	;

POS
    : P O S
	;

PRINT
    : P R I N T
	;

REM
    : R E M
	;

RETURN
    : R E T U R N
	;

RUN
    : R U N
    ;

STEP
    : S T E P
	;

STOP
    : S T O P
	;

STRING
    : S T R I N G
    ;

SUB
    : S U B
	;

TAB
    : T A B
	;

THEN
    : T H E N
	;

TO
    : T O
	;

TRUE
    : T R U E
	;

VOID
    : V O I D
    ;

TYPE
    : T Y P E
    ;

WHILE
    : W H I L E
	;

STRING_LITERAL
    : '"' (~["\r\n] | '""')* '"'
    ;

INT_LITERAL
    : [0-9]+ '&'?
    | '&' H [0-9A-Fa-f]+ '&'?
    ;

FLOAT_LITERAL
    : [0-9]* '.' [0-9]+ (((E | D) ('+' | '-') [0-9]+) | ('!' | '#'))?
    ;

IDENTIFIER
    : [a-zA-Z_][a-zA-Z_0-9]*
    ;

IDENTIFIER_TYPE_DECLARATION
    : [$%!#&]
    ;

COMMENT
    :   (SINGLE_QUOTE | (REM WS)) ~[\r\n\u2028\u2029]* -> channel(HIDDEN)
    ;

NEWLINE
    : [\r\n\u2028\u2029]+
    ;

WS
    : [ \t]+ -> skip
    ;

SINGLE_QUOTE
    : '\''
    ;

QUESTION_MARK
    : '?'
    ;

fragment A
    : ('a' | 'A')
    ;

fragment B
    : ('b' | 'B')
    ;

fragment C
    : ('c' | 'C')
    ;

fragment D
    : ('d' | 'D')
    ;

fragment E
    : ('e' | 'E')
    ;

fragment F
    : ('f' | 'F')
    ;

fragment G
    : ('g' | 'G')
    ;

fragment H
    : ('h' | 'H')
    ;

fragment I
    : ('i' | 'I')
    ;

fragment J
    : ('j' | 'J')
    ;

fragment K
    : ('k' | 'K')
    ;

fragment L
    : ('l' | 'L')
    ;

fragment M
    : ('m' | 'M')
    ;

fragment N
    : ('n' | 'N')
    ;

fragment O
    : ('o' | 'O')
    ;

fragment P
    : ('p' | 'P')
    ;

fragment Q
    : ('q' | 'Q')
    ;

fragment R
    : ('r' | 'R')
    ;

fragment S
    : ('s' | 'S')
    ;

fragment T
    : ('t' | 'T')
    ;

fragment U
    : ('u' | 'U')
    ;

fragment V
    : ('v' | 'V')
    ;

fragment W
    : ('w' | 'W')
    ;

fragment X
    : ('x' | 'X')
    ;

fragment Y
    : ('y' | 'Y')
    ;

fragment Z
    : ('z' | 'Z')
    ;