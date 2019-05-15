#include <stdio.h>
#include <stdint.h>
#include "computer.h"

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

int main()
{
    struct Computer computer;

    computer.cpu_speed_GHz = 2.5;
    computer.ram_size_GB = 8;
    computer.bits = 64;
    printf("%.1f, %d, %d\n", computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);

    Notebook notebook;
    notebook.cpu_speed_GHz = 1.8;
    notebook.ram_size_GB = 4;
    notebook.bits = 32;
    printf("%.1f, %d, %d", notebook.cpu_speed_GHz, notebook.ram_size_GB, notebook.bits);

    return 0;
}