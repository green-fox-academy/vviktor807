#include <stdio.h>
#include "print.h"

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main()
{
    print_lines("../my-file.txt");

    return 0;
}