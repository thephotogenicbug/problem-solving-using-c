#include <stdio.h>

void sum(int num1, int num2)
{
    int result = num1 + num2;
    printf("Sum of two numbers is: %d ", result);
}
int main()
{
    int a = 50;
    int b = 40;

    sum(a, b);

    return 0;
}