#include <stdio.h>
#include "old_enough.h"

int main()
{
    int age;

    printf("Type in your age: ");
    scanf("%d", &age);
    if (is_old_enough(age)) {
        printf("You can buy alcohol in Hungary.");
    } else {
        printf("You are not old enough to buy alcohol in Hungary.");
    }

    return 0;
}

char is_old_enough(int x)
{

    if (x >= 18) {
        return 1;
    } else {
        return 0;
    }
}