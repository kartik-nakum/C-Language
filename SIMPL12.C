12.	Write a C Program to Calculate Simple Interest 
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,p,q,r;
    clrscr();

    printf("enter principal");
    scanf("%d",&p);

    printf("enter value");
    scanf("%d",&q);

    printf("enter rate");
    scanf("%d",&r);

    i=(p*q*r)/100;
    printf("insert is %d",i);

    getch();
}
