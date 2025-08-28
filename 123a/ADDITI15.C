15.	Write a C program to input two values and perform various Arithmetic Operations (Addition, Subtraction, Multiplication, and Division)
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,w,x,y,z;
  clrscr();

  printf("enter firest");
  scanf("%d",&a);
  printf("enter second");
  scanf("%d",&b);


  w=a+b;
  printf("adition %d",w);
  x=a-b;
  printf("subtraction %d",x);
  y=a*b;
  printf("multiplication %d",y);
  z=a/b;
  printf("division %d",z);

  getch();

}
