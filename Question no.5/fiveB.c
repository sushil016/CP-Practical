#include <stdio.h>
#include <conio.h>
void main()
{
    int n, n1, r, sum = 0;
    printf("enter a number");
    scanf("%d", &n);
    n1=n;
    do
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    while (n>0);
    if (sum == n1)
    {
        printf("%d is armstrong number\n", sum);
    }
    else
    {
        printf("%d is not armstrong\n", n1);
    }
    getch();
}