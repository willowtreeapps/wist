grammar BrightScript;

startRule
    : component EOF
    ;

component
    : componentHead* componentBody
    ;

componentHead
    : endOfLine* componentHeadElement (endOfLine+ componentHeadElement)* endOfLine*
    ;

componentHeadElement
    : libraryStatement
    | conditionalCompilationStatement
    | comment
    | componentBody
    ;

componentBody
    : endOfLine* componentBodyElement (endOfLine+ componentBodyElement)* endOfLine*
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
    | conditionalCompilationStatement
    | dimStatement
    | exitStatement
    | forStatement
    | forEachStatement
    | ifThenElseStatement
    | gotoStatement
    | labelStatement
    | nextStatement
    | printStatement
    | returnStatement
    | stopStatement
    | whileStatement
    | endStatement
    | expression
    ;

arrayInitializer
    : OPEN_BRACKET NEWLINE* ((expression | arrayInitializer | associativeArrayInitializer) ((COMMA | endOfLine) NEWLINE* (expression | arrayInitializer | associativeArrayInitializer))*)? NEWLINE* CLOSE_BRACKET
    ;

associativeArrayInitializer
    : OPEN_BRACE NEWLINE* (associativeElementInitializer ((COMMA | endOfLine) NEWLINE* associativeElementInitializer)*)? COMMA? NEWLINE* CLOSE_BRACE
    ;

associativeElementInitializer
    : (identifier | reservedWord | stringLiteral) COLON assignableExpression
    ;

conditionalCompilationStatement
    : conditionalCompilationConstStatement
    | conditionalCompilationErrorStatement
    | conditionalCompilationIfThenElseStatement
    ;

conditionalCompilationConstStatement
    : CONDITIONAL_CONST untypedIdentifier EQUALS expression
    ;

conditionalCompilationErrorStatement
    : CONDITIONAL_ERROR .*?
    ;

conditionalCompilationIfThenElseStatement
    : conditionalCompilationIfBlockStatement conditionalCompilationIfElseIfBlockStatement* conditionalCompilationIfElseBlockStatement? CONDITIONAL_ENDIF
    ;

conditionalCompilationIfBlockStatement
    : CONDITIONAL_IF expression THEN? endOfStatement+ (block+ | componentBody+)*
    ;

conditionalCompilationIfElseIfBlockStatement
    : CONDITIONAL_ELSEIF expression THEN? endOfStatement+ (block+ | componentBody+)*
    ;

conditionalCompilationIfElseBlockStatement
    : CONDITIONAL_ELSE endOfStatement+ (block+ | componentBody+)*
    ;

dimStatement
    : DIM identifier OPEN_BRACKET parameterList CLOSE_BRACKET
    ;

endStatement
    : END
    ;

exitStatement
    : EXIT WHILE
    | EXITWHILE
    | EXIT FOR
    ;

forStatement
    : FOR identifier EQUALS expression TO expression (STEP expression)? endOfStatement+ block* nextStatement? (END FOR)?
    ;

forEachStatement
    : FOR EACH identifier IN expression endOfStatement+ block* nextStatement? (END FOR)?
    ;

gotoStatement
    : GOTO IDENTIFIER
    ;

ifThenElseStatement
    : ifSingleLineStatement
    | ifBlockStatement ifElseIfBlockStatement* ifElseBlockStatement? (END IF | ENDIF)
    ;

ifSingleLineStatement
    : IF expression THEN? blockStatement (ELSE blockStatement)?
    ;

ifBlockStatement
    : IF expression THEN? endOfStatement+ block*
    ;

ifElseIfBlockStatement
    : (ELSE IF | ELSEIF) expression THEN? endOfStatement+ block*
    ;

ifElseBlockStatement
    : ELSE endOfStatement+ block*
    ;

labelStatement
    : IDENTIFIER COLON
    ;

libraryStatement
    : LIBRARY STRING_LITERAL
    ;

nextStatement
    : NEXT
    ;

printStatement
    : (PRINT | QUESTION_MARK) (expression (SEMICOLON? expression)* SEMICOLON?)?
    ;

returnStatement
    : RETURN assignableExpression?
    ;

stopStatement
    : STOP
    ;

whileStatement
    : WHILE expression endOfStatement+ block* (ENDWHILE | END WHILE)
    ;

anonymousFunctionDeclaration
    : FUNCTION parameterList? (AS baseType)? endOfStatement+ block* (ENDFUNCTION | END FUNCTION)
    ;

functionDeclaration
    : FUNCTION untypedIdentifier parameterList? (AS baseType)? endOfStatement+ block* (ENDFUNCTION | END FUNCTION)
    ;

anonymousSubDeclaration
    : SUB parameterList? endOfStatement+ block* (ENDSUB | END SUB)
    ;

subDeclaration
    : SUB untypedIdentifier parameterList? endOfStatement+ block* (ENDSUB | END SUB)
    ;

parameterList
    : OPEN_PARENTHESIS (parameter (COMMA parameter)*)? CLOSE_PARENTHESIS
    ;

parameter
    : (literal | identifier) (EQUALS assignableExpression)? (AS baseType)?
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
    : (expression | associativeArrayInitializer | arrayInitializer) (COMMA (expression | associativeArrayInitializer | arrayInitializer))*
    ;

expression
    : primary
    | globalFunctionInvocation
    | expression (DOT | ATTRIBUTE_OPERATOR) (identifier | reservedWord)
    | expression OPEN_BRACKET expression CLOSE_BRACKET
    | expression OPEN_PARENTHESIS expressionList? CLOSE_PARENTHESIS
    | (ADD|SUBTRACT) expression
    | expression (INCREMENT|DECREMENT)
    | expression (MULTIPLY|DIVIDE|MOD|DIVIDE_INTEGER) expression
    | expression (ADD|SUBTRACT) expression
    | expression (BITSHIFT_LEFT|BITSHIFT_RIGHT) expression
    | expression (GREATER_THAN|LESS_THAN|EQUALS|NOT_EQUAL|GREATER_THAN_OR_EQUAL|LESS_THAN_OR_EQUAL) expression
    | NOT expression
    | expression (AND|OR) expression
    | <assoc=right> expression (EQUALS|ASSIGNMENT_ADD|ASSIGNMENT_SUBTRACT|ASSIGNMENT_MULTIPLY|ASSIGNMENT_DIVIDE|ASSIGNMENT_DIVIDE_INTEGER|ASSIGNMENT_BITSHIFT_LEFT|ASSIGNMENT_BITSHIFT_RIGHT) assignableExpression
    ;

globalFunctionInvocation
    : globalFunction OPEN_PARENTHESIS expressionList? CLOSE_PARENTHESIS
    ;

globalFunction
    : CREATEOBJECT
    | EVAL
    | GETLASTRUNCOMPILEERROR
    | GETGLOBALAA
    | GETLASTRUNRUNTIMEERROR
    | RUN
    | STRING
    | TAB
    | TYPE
    ;

primary
    : OPEN_PARENTHESIS expression CLOSE_PARENTHESIS
    | literal
    | identifier
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
    : (endOfLine | COLON) NEWLINE*
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
    : (SINGLE_QUOTE | (REM (WS | NEWLINE))) ~[\r\n\u2028\u2029]* -> channel(HIDDEN)
    ;

NEWLINE
    : [\r\n\u2028\u2029]+
    ;

WS
    : [ \t]+ -> skip
    ;

CONDITIONAL_CONST
    : '#' C O N S T
    ;

CONDITIONAL_ELSE
    : '#' ELSE
    ;

CONDITIONAL_ELSEIF
    : '#' (ELSE WS IF | ELSEIF)
    ;

CONDITIONAL_ENDIF
    : '#' (END WS IF | ENDIF)
    ;

CONDITIONAL_ERROR
    : '#' E R R O R
    ;

CONDITIONAL_IF
    : '#' IF
    ;

SINGLE_QUOTE
    : '\''
    ;

QUESTION_MARK
    : '?'
    ;

ATTRIBUTE_OPERATOR
    : '@'
    ;

INCREMENT
    : '++'
    ;

DECREMENT
    : '--'
    ;

OPEN_BRACKET
    : '['
    ;

CLOSE_BRACKET
    : ']'
    ;

OPEN_BRACE
    : '{'
    ;

CLOSE_BRACE
    : '}'
    ;

OPEN_PARENTHESIS
    : '('
    ;

CLOSE_PARENTHESIS
    : ')'
    ;

COMMA
    : ','
    ;

SEMICOLON
    : ';'
    ;

COLON
    : ':'
    ;

EQUALS
    : '='
    ;

DOT
    : '.'
    ;

ADD
    : '+'
    ;

SUBTRACT
    : '-'
    ;

MULTIPLY
    : '*'
    ;

DIVIDE
    : '/'
    ;

DIVIDE_INTEGER
    : '\\'
    ;

BITSHIFT_LEFT
    : '<<'
    ;

BITSHIFT_RIGHT
    : '>>'
    ;

GREATER_THAN
    : '>'
    ;

LESS_THAN
    : '<'
    ;

GREATER_THAN_OR_EQUAL
    : '>='
    ;

LESS_THAN_OR_EQUAL
    : '<='
    ;

NOT_EQUAL
    : '<>'
    ;

ASSIGNMENT_ADD
    : '+='
    ;

ASSIGNMENT_SUBTRACT
    : '-='
    ;

ASSIGNMENT_MULTIPLY
    : '*='
    ;

ASSIGNMENT_DIVIDE
    : '/='
    ;

ASSIGNMENT_DIVIDE_INTEGER
    : '\\='
    ;

ASSIGNMENT_BITSHIFT_LEFT
    : '<<='
    ;

ASSIGNMENT_BITSHIFT_RIGHT
    : '>>='
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
