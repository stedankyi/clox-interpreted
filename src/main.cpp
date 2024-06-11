// Copyright - Stephen Basoah Dankyi @ 2024

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "main.h"

#define MAX_LINE_LENGTH 256

static bool hadError;

struct Tokens
{
    char* data;
    int size;
};

struct Scanner
{
    Tokens scanTokens(char* source)
    {
        return NULL;
    }
};


int main(int argc, char* argv[])
{
    hadError = false;
    if (argc != 2 )
    {
        printf("Usage: clox [script]");
        return 1;
    }
    else if (argc == 2)
    {
        runFile(argv);
        return 1;
    }
    else
    {
        runPrompt();
        return 1;
    }

    return 0;
}

void runFile(char* path[])
{
    FILE* file = fopen(path[1], "r");
    
    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening source file");
        return;
    }

    if (hadError)
    {
     return;
    }

    char line[MAX_LINE_LENGTH];
    while ((fgets( line, MAX_LINE_LENGTH, file)) != NULL) {
            run(line);
    }

    fclose(file);

}

void runPrompt()
{
    char* userInput;
    //scanf("%c", userInput);

    for (;;)
    {
        printf(">>>");

        scanf("%s", userInput);
        if (!userInput == NULL)
        {
            run(userInput);
            hadError = false;
        }
    }
}

void run(char* source)
{
    Scanner scanner;
    Tokens tokens = scanner.scanTokens(source);

    for (size_t i = 0; i < tokens.size; i++)
    {
        printf("%d", tokens.data[i]);
    }
}

void error(int line, char* message) //Why did I decide to use  a char* array? I am reverting to char* until I remember
{
    report(line, "", message);
}

void report(int line, char* where, char* message)
{
    //TODO: Fix line 109's error by concatenating the strings instead of jamming them into printf

    // char string[MAX_STR_BUFFER_SIZE];
    // int string_length = strlen(tokenToString(type)) + strlen(lexeme) + strlen(literal.toString()) + 1;

    // if (string_length > MAX_STR_BUFFER_SIZE) {
    //     printf("Error: Concatenated string too large for buffer!\n");
    //     return NULL;
    // }
    
    // strcpy(string, tokenToString(type));
    // strcat(string, lexeme);
    // strcat(string, literal.toString());

    printf("[Line %d ] Error %s : %s", line, where, message);
    hadError = true;
}
