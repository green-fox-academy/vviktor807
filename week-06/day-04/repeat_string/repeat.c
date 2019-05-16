//
// Created by Viktor on 2019. 05. 16..
//

#include "repeat.h"

char *repeat_string(char *string, int x)
{

    int size = strlen(string);
    char *pointer = NULL;
    pointer = (char *) calloc(sizeof(char), size * x);

    int z = 0;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < size; ++j) {
            pointer[j + z] = string[j];
        }
        z += size;
    }

    return pointer;
}
