#include <stdio.h>
#include <conio.h>
void main (){
    int n1,n2,n3,max;
    printf("enter numbers:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    max=(n1>n2)?((n1>n3)?(n1):(n3)):((n2>n3)?(n2):(n3));
    printf("largest is :%d",max);
    getch();
}