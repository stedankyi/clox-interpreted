// Copyright - Stephen Basoah Dankyi @ 2024

#ifndef TOKEN_DECLARATION_H
#define TOKEN_DECLARATION_H

enum TokenType {
  // Single-character tokens.
  LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
  COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

  // One or two character tokens.
  BANG, BANG_EQUAL,
  EQUAL, EQUAL_EQUAL,
  GREATER, GREATER_EQUAL,
  LESS, LESS_EQUAL,

  // Literals.
  IDENTIFIER, STRING, NUMBER,

  // Keywords.
  AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR,
  PRINT, RETURN, SUPER, THIS, TRUE, VAR, WHILE, 
  TOKEN_EOF
};
struct Object{
    char* toString();
};

struct Token {
  Token::Token(TokenType type, char* lexeme, Object literal, int line) {
    type = type;
    lexeme = lexeme;
    literal = literal;
    line = line;
  }
  TokenType type;
  char* lexeme;
  Object literal;
  int line;

  char* toString();

private:
  char* tokenToString(TokenType token);
};

#endif