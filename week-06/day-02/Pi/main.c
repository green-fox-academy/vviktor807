#include <stdio.h>
#include "Pi.h"

int main()
{
    float area;
    area = areaOfCircle(5.6);
    printf("Area: %.2f \n", area);

    float circumference;
    circumference = circumferenceOfCircle(8.2);
    printf("Circumference: %.2f", circumference);

    return 0;
}

float areaOfCircle(float x)
{
    float result;
    result = x * x * PI;
    return result;
}

float circumferenceOfCircle(float x)
{
    float result;
    result = 2 * x * PI;

    return result;
}
