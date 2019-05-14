#include <stdio.h>
#include <string.h>
#include "Are_the_same.h"

int main()
{
    char word[10];
    char word1[10];

    printf("Enter a word: ");
    scanf("%s", word);

    printf("Enter another word: ");
    scanf("%s", word1);

    if (!areTheSame(word, word1)) {
        printf("The strings are not the same.");
    } else {
        printf("The strings are the same.");
    }

    return 0;
}

int areTheSame(char *word, char *word1)
{

    for (int i = 0; i < sizeof(word) / sizeof(char); ++i) {
        if (word[i] != word1[i]) {
            return 0;
        }
    }
    return 1;
}