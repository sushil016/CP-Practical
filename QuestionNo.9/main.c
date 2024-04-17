#include <stdio.h>

float fact(int n);

int main()
{
    float n;
    printf("Enter a Number to Calculate Factorial : ");
    scanf("%f", &n);

    printf("Factorial of Number is : %f", fact(n));
}

float fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1); 
}