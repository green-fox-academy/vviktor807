#include <stdio.h>
#include "sandwich.h"
#include <string.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

int main()
{
    struct sandwich sandwich;

    strcpy(sandwich.name, "Pulled Pork");
    sandwich.price = 3.45;
    sandwich.weight = 300;

    float result = total_amount_to_pay(sandwich, 2);
    printf("The total amount to pay: %.1f", result);
    
    return 0;
}