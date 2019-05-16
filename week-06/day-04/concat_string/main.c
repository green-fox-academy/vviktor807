#include <stdio.h>
#include <stdlib.h>
#include "concat.h"

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

int main()
{
    char first[10] = "alma";
    char second[10] = "fa";
    char *result = concatenate(first, second);
    printf("%s", result);

    free(result);

    return 0;
}