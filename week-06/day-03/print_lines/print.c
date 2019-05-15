//
// Created by Viktor on 2019. 05. 15..
//

#include "print.h"

void print_lines(char *fileName)
{
    FILE *fPointer;
    fPointer = fopen(fileName, "r");
    char singleLine[50];
    if (fPointer == NULL) {
        printf("Unable to open file.");
    } else {
        while (!feof(fPointer)) {
            fgets(singleLine, 150, fPointer);
            puts(singleLine);

        }
    }

    fclose(fPointer);
}
