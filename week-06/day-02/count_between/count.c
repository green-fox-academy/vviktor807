//
// Created by Viktor on 2019. 05. 17..
//

// Create a function which takes a string as a parameter and
// returns the number of characters between two repeating characters
// the repeating char can be a local variable in the function itself or
// it can be passed to the function as parameter

#include "count.h"

int count_between_chars(char *word)
{
    int string_size = strlen(word);
    int x = 0;
    char karakter = 'g';
    int i;
    for (i = 0; i != string_size; ++i) {
        if (word[i] == karakter) {
            break;
        }
    }

    i++;

    for (; i < string_size; ++i) {
        if (word[i] == karakter) {
            break;
        }
        x++;
    }

    return x;
}
