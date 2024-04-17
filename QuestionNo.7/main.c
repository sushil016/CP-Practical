#include<stdio.h>

int main()
{
    int n ,i;

    printf("Enter a Number :");
    scanf("%d",&n);

    for ( i = 1; i < 11; i++)
     {
        if (i %2 == 0)
        { 
           
            continue;
        };
        printf("%d * %d = %d \n" , n, i, n*i); 
        
    
    };
    
    
};