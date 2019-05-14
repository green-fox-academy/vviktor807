#include <stdio.h>
#include <string.h>
#include "length.h"

int main()
{
    char Name[20];
    puts("Enter your name:\t ");
    gets(Name);

    printf("%d \n", lengthOfName(Name));
    printf("%d", lengthOfNameWithLengthH(Name));

    return 0;
}

int lengthOfName(char *name)
{
    int counter = 0;
    while (name[counter] != '\0') {
        counter++;
    }
    return counter;
}

int lengthOfNameWithLengthH(char *name)
{
    return strlen(name);
}