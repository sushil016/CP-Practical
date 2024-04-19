#include <stdio.h>
#include <conio.h>
void main()
{
    char ch1 = 'a';
    char ch2;
    clrscr();
    putchar(ch1);
    printf("\nenter a character :");
    ch2 = getchar();

    printf("\nyou entered:");
    putchar(ch2);
    getch();
}