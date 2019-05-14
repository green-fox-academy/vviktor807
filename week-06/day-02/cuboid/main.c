#include <stdio.h>

int main()
{
    printf("Type in the size of the first side: ");
    double length;
    scanf("%lf", &length);
    printf("Type in the size of the second side: ");
    double width;
    scanf("%lf", &width);
    printf("Type in the size of the third side: ");
    double height;
    scanf("%lf", &height);
    double Surface = 2 * width * length + 2 * length * height + 2 * width * height;
    double Volume = length * width * height;

    printf("Volume: %.2lf \n", Volume);
    printf("Surface Area: %.2lf \n", Surface);

    return 0;
}