10.	Write a C Program to Print an Area of Circle 
#include<stdio.h>
#include<conio.h>
#define pi 3.14

void main()
{
   float area,radius;
   clrscr();

   printf("enter radius");
   scanf("%f",&radius);

   area=pi*radius*radius;
   printf("circle %f",area);

   getch();
}
