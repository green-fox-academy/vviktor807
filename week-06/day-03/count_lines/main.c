#include <stdio.h>
#include "count.h"

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int main()
{
    printf("%d", count_lines("../my-file.txt"));


    return 0;
}