16.	Swap Two Numbers Without a Temporary Variable
#include<stdio.h>
#include<conio.h>
void main()
{
   float h,s,m;
   clrscr();

   printf("enter hours");
   scanf("%f",&h);

   m=h*60;
   s=h*3600;
   printf("minutes=%f, seconds=%f",m,s);

   getch();

}
