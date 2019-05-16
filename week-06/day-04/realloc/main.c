#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int x;
    int y = 0;

    int *pointer = NULL;
    int *pointer1 = NULL;

    printf("Enter a number: "); // Prompt the user to enter a number. -> This number will be X.
    scanf("%d", &x);

    pointer = (int *) malloc(sizeof(int) * x); // Allocate memory for X numbers.
    printf("Enter a numbers: "); // Prompt the user to enter X numbers.
    for (int i = 0; i < x; ++i) { // which is the sum of the X numbers.
        scanf("%d", &pointer[i]);
        y += pointer[i];
    }

    pointer1 = (int *) malloc(sizeof(int) * y); // Allocate memory for Y numbers,

    for (int j = 0; j < y; ++j) {
        pointer1[j] = j + 1;
        printf("%d\n", pointer1[j]);
    }

    free(pointer);
    pointer = NULL;
    free(pointer1);
    pointer1 = NULL;


    return 0;
}