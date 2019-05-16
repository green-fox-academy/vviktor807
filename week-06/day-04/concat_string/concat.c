//
// Created by Viktor on 2019. 05. 16..
//

#include "concat.h"


char *concatenate(char *string, char *string1)
{
    int string_size = strlen(string);
    int string1_size = strlen(string1);

    char *pointer = NULL;
    pointer = (char *) malloc(sizeof(char) * (string_size + string1_size + 1));
    int i;

    for (i = 0; i < string_size; ++i) {
        pointer[i] = string[i];
    }
    int j;
    for (j = 0; j < string1_size; ++j) {
        pointer[j + i] = string1[j];
    }

    pointer[string_size + string1_size] = '\0';

    return pointer;
}
