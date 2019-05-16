#include "repeat.h"

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

int main()
{
    char string[6] = "apple";
    char *result = repeat_string(string, 5);
    printf("%s", result);

    free(result);

    return 0;
}