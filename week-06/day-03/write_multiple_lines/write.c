//
// Created by Viktor on 2019. 05. 15..
//

#include "write.h"

void write_multiple_line(char *fileName, char *name, int x)
{
    FILE *fPointer;
    fPointer = fopen(fileName, "w");
    for (int i = 0; i != x; ++i) {
        fprintf(fPointer, "%s", name);
    }

    fclose(fPointer);
}
