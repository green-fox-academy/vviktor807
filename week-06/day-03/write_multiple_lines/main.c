#include <stdio.h>
#include <string.h>
#include "write.h"

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

int main()
{
    char name[20];
    printf("Enter a word: ");
    fgets(name, 20, stdin);

    write_multiple_line("../my-file.txt", name, 5);

    return 0;
}