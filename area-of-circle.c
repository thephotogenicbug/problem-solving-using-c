#include <stdio.h>

int main()
{
    float radius, area;
    float PI = 3.14;

    printf("Enter the radius of a circle : ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of a circle is %.2f", area);

    return 0;
}