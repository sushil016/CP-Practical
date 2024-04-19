#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    float d;

    printf("Enter a Number 1");
    scanf("%d",&a);

    printf("enter a number 2");
    scanf("%d",&b);
     
    c = a+b;
    printf("Sum of a + b is :- %d\n", c);

    c = a-b;
    printf("Difference is :%d\n",c);

    c = a*b;
    printf("product is :%d\n", c);

    c = a/b;
    printf("division is:%d\n " , c);

    c = a%b;
    printf("remainder is:%d\n ", c);



}