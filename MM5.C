5.	Write a C program To Convert mm to inch (1 inch = 25.4) mm/inch.
#include<stdio.h>
#include<conio.h>
void main()
{

   float mm,inch;
   clrscr();
   printf("enter mm");
   scanf("%f",&mm);

    inch=mm/25.4;
    printf("%f inch",inch);
    getch();
}
