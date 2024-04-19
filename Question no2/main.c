#include <stdio.h>
#include <conio.h>
void main(){
    float marks;
    printf("enter marks");
    scanf("%f",&marks);
    if (marks<40)
    {
        printf("FAIL");
    }
    else if (marks>=40&& marks<50)
    {
        printf("PASS");
    }
    else if (marks>=50&& marks<60)
    {
        printf("SECOND CLASS");
    }
    else if (marks>=60&& marks<70)
    {
        printf("FIRST CLASS");
    }
    else 
    {
        printf("YOU SCORED DISTINCTION");
    }
    getch();
}