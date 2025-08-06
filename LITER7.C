//7.	Write a C program To Convert Liter to Mili liter.
#include<stdio.h>
#include<conio.h>
void main()
{
  float liter,mili;
  clrscr();

  printf("enter liter");
  scanf("%f",&liter);

  mili=liter*1000;
  printf("%f mili",mili);

  getch();

}

