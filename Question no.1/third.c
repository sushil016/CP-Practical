#include <stdio.h>
#include <conio.h>
void main()
{
    char ch1[10] = "rahul";
    char ch2[10];
    clrscr();
    puts(ch1);
    printf("\n enter a string :");
    gets(ch2);
    printf("\n you entered :");
    puts(ch2);

    getch();
}