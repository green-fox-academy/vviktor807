#include <stdio.h>
#include "write.h"

int main()
{
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin); //stdin: beolvas mindent amit beírunk de csak 20 karakterig írja bele

    write_single_line("../my-file.txt", name);

    return 0;
}