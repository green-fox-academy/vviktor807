//
// Created by Viktor on 2019. 05. 15..
//

#include "write.h"

void write_single_line(char *fileName, char *name)
{
    FILE *fPointer;
    fPointer = fopen(fileName, "w");
    fprintf(fPointer, "%s", name);

    fclose(fPointer);
}
