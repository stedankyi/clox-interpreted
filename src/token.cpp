// Copyright - Stephen Basoah Dankyi @ 2024

#include <stdio.h>
#include <string.h>
#include "token.h"

#define MAX_STR_BUFFER_SIZE 256


  char* Object::toString() {
    return NULL;
  }

char* Token::toString() {
  char string[MAX_STR_BUFFER_SIZE];
  int string_length = strlen(tokenToString(type)) + strlen(lexeme) + strlen(literal.toString()) + 1;

  if (string_length > MAX_STR_BUFFER_SIZE) {
      printf("Error: Concatenated string too large for buffer!\n");
      return NULL;
  }
  
  strcpy(string, tokenToString(type));
  strcat(string, lexeme);
  strcat(string, literal.toString());
  
  return string;
}


char* Token::tokenToString(TokenType token) {
    switch (token) {
    case LEFT_PAREN:
      {
        return "LEFT_PAREN";
        break;
      }

    case RIGHT_PAREN:
      {
        return "RIGHT_PAREN";
        break;
      }
    case LEFT_BRACE:
      {
        return "LEFT_BRACE";
        break;
      }
    case RIGHT_BRACE:
      {
        return "RIGHT_BRACE";
        break;
      }
    case COMMA:
      {
        return "COMMA";
        break;
      }
    case DOT:
      {
        return "DOT";
        break;
      }
    case MINUS:
      {
        return "MINUS";
        break;
      }
    case PLUS:
      {
        return "PLUS";
        break;
      }
    case SEMICOLON:
      {
        return "SEMICOLON";
        break;
      }
    case SLASH:
      {
        return "SLASH";
        break;
      }
    case STAR:
      {
        return "STAR";
        break;
      }
    case BANG:
      {
        return "BANG";
        break;
      }
    case BANG_EQUAL:
      {
        return "BANG_EQUAL";
        break;
      }
    case EQUAL:
      {
        return "EQUAL";
        break;
      }
    case EQUAL_EQUAL:
      {
        return "EQUAL_EQUAL";
        break;
      }
    case GREATER:
      {
        return "GREATER";
        break;
      }
    case GREATER_EQUAL:
      {
        return "GREATER_EQUAL";
        break;
      }
    case LESS:
      {
        return "LESS";
        break;
      }
    case LESS_EQUAL:
      {
        return "LESS_EQUAL";
        break;
      }
    case IDENTIFIER:
      {
        return "IDENTIFIER";
        break;
      }
    case STRING:
      {
        return "STRING";
        break;
      }
    case NUMBER:
      {
        return "NUMBER";
        break;
      }
    case AND:
      {
        return "AND";
        break;
      }
    case CLASS:
      {
        return "CLASS";
        break;
      }
    case ELSE:
      {
        return "ELSE";
        break;
      }
    case FALSE:
      {
        return "FALSE";
        break;
      }
    case FUN:
      {
        return "FUN";
        break;
      }
    case FOR:
      {
        return "FOR";
        break;
      }
    case IF:
      {
        return "IF";
        break;
      }
    case NIL:
      {
        return "NIL";
        break;
      }
    case OR:
      {
        return "OR";
        break;
      }
    case PRINT:
      {
        return "PRINT";
        break;
      }
    case RETURN:
      {
        return "RETURN";
        break;
      }
    case SUPER:
      {
        return "SUPER";
        break;
      }
    case THIS:
      {
        return "THIS";
        break;
      }
    case TRUE:
      {
        return "TRUE";
        break;
      }
    case VAR:
      {
        return "VAR";
        break;
      }
    case WHILE:
      {
        return "WHILE";
        break;
      }
    case TOKEN_EOF:
      {
        return "TOKEN_EOF";
        break;
      }
    default:
      {
        return "INVALID TOKEN";
        break;
      }
  }
}