#include <iostream>

// Create a function which swaps the values of 'a' and 'b'
// This time use a void function and pointers
void swap(int *x, int *y);
int main() {

    int a = 10;
    int b = 316;
    int *aPointer = &a;
    int *bPointer = &b;
    swap(&a, &b);
    std::cout << a << ", " << b << std::endl;
    return 0;
}
void swap(int *x, int *y)
{
    int i = *x;
    *x = *y;
    *y = i;
}