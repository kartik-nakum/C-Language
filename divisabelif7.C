7.	Check if a Number is Divisible by 5 and 7
#include<stdio.h>
#include<conio.h>
void main()
{

  int a;
  clrscr();

  printf("enter number");
     scanf("%d",&a);
     if(a%5==0 && a%7==0)
     {
     printf("%d the divisible");
     }
     else
     {
     printf("%d the not divisible");
     }
     getch();

}
