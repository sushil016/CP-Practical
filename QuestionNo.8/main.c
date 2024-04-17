#include <stdio.h>
#include <math.h>

int power(int base, int exp);

int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d", &x);

    printf("computition of y = %d \n", power(x, 2));
}

int power(int base, int exp)
{

    return pow(base, exp);
};