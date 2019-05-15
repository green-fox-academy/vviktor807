//
// Created by Viktor on 2019. 05. 15..
//

#include "count.h"

int count_lines(char *fileName)
{
    int counter = 0;
    FILE *fPointer;
    fPointer = fopen(fileName, "r");
    char singleLine[50];
    while (!feof(fPointer)) {
        fgets(singleLine, 150, fPointer);
        counter++;
    }

    return counter;
}
