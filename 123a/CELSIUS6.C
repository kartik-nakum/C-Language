6.	Write a C program To Convert Fahrenheit to Celsius: F = (Fahrenheit - 32) * 5/9
#include<stdio.h>
#include<conio.h>
void main()
{
float fahrenheit,celsius;
clrscr();

    printf("enter fahrenheit:");
    scanf("%f",&fahrenheit);


    celsius=(fahrenheit-32)*5/9;
   printf("celsius : %f",celsius);


getch();
}
