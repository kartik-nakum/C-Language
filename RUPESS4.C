4.	Write a C program To Convert dollars into Rupee.
#include<stdio.h>
#include<conio.h>
void main()
{
   float rupess,dollars;
    clrscr();
   printf("enter rupess");
   scanf("%f",&rupess);
   dollars=rupess/80;
   printf("%f dollars",dollars);
   getch();
}
