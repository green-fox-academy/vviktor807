#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int *pointer = NULL;
    int *pointer1 = NULL;

    pointer = (int *) malloc(sizeof(int) * 10);

    for (int i = 0; i < 10; ++i) {
        pointer[i] = i * 2;
    }

    pointer1 = (int *) malloc(sizeof(int) * 10);

    for (int j = 0; j < 10; ++j) {
        pointer1[j] = j * 2 + 1;
    }

    pointer = (int *)realloc(pointer, 20 * sizeof(int));

    for (int k = 10; k < 20; ++k) {
        pointer[k] = pointer1[k - 10];
    }

    /*for (int k = 0; k < 20; ++k) {
        printf("%d\n", pointer[k]);
    }*/

    for (int l = 0; l < 20; ++l) {
        for (int i = 0; i < 20 - 1 - l; ++i) {
            if (pointer[i] > pointer[i+1]) {
                int temp = pointer[i];
                pointer[i] = pointer[i+1];
                pointer[i+1] = temp;
            }
        }
    }
    for (int k = 0; k < 20; ++k) {
        printf("%d\n", pointer[k]);
    }
    free(pointer);
    pointer = NULL;
    free(pointer1);
    pointer1 = NULL;

    return 0;
}