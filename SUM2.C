2.	Write a C program To Find a Sum of Two Numbers.
#include<stdio.h>
#include<conio.h>

void main()
{
    int sum=0,n1,n2;
    clrscr();
    printf("enter two sum");
    scanf("%d %d ",&n1,&n2);

    sum=n1+n2;

    printf("sum: %d",sum);
    getch();
}
