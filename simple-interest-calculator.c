#include <stdio.h>

int main()
{

    float principle, rate, time;
    float interest;

    printf("Enter principle amount : ");
    scanf("%f", &principle);

    printf("Enter rate of interest : ");
    scanf("%f", &rate);

    printf("Enter time (in years) : ");
    scanf("%f", &time);

    interest = (principle * rate * time) / 100;

    printf("Simple interest = %.2f", interest);
}