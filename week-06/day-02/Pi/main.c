#include <stdio.h>

#define PI 3.14

float areaOfCircle(float);

int main()
{
    float result;
    result = areaOfCircle(5.6);
    printf("%.2f", result);

    return 0;
}

float areaOfCircle(float x)
{
    float result;
    result = x * x * PI;
    return result;
}