9.	Write a C-program to convert Meter into Kilometers
#include<stdio.h>
#include<conio.h>
void main()
{
   float m,km;
   clrscr();

   printf("enter kilomiter:");
   scanf("%f",&km);

   m=km * 1000;
   printf("%f meter",m);

   getch();
}
