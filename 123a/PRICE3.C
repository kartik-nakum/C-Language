3.	Write a C program to find the amount from the price and quantity.
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,total;
  clrscr();
  printf("enter yoyr price");
  scanf("%d",&a);
  printf("enter your quality");
  scanf("%d",&b);
  total=a*b;
  printf("%d",total);
  getch();
}
