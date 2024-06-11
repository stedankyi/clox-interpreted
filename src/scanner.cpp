// Copyright - Stephen Basoah Dankyi @ 2024

#include <stdio.h>
#include <string.h>
#include "token.h"

struct scanner
{
    char* source;
    Token tokens[];
};
