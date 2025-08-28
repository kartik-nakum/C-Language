8.	Check if a Number is Positive and Even
#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   clrscr();

   printf("enter number");
   scanf("%d",&n);
    if(n>0)
    printf("positive");
   else if(n==0)
    printf("even");
   else
    printf(" zero");

    getch();
}
