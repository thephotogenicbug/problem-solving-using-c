#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping:\n");
    printf("num 1 = %d\n", num1);
    printf("num 2 = %d\n", num2);

    return 0;
}