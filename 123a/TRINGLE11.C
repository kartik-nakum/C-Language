11.	Write a C Program to Print an Area of Tringle 
#include<stdio.h>
#include<conio.h>

void main()
{
   float b,h,area;
   clrscr();

   printf("enter base");
   scanf("%f",&b);

   printf("enter height");
   scanf("%f",&h);

   area=(b*h)/2;

   printf("area of triangle %f",area);
   getch();
}
