4.	Check if a Number is Positive, Negative, or Zero
#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   clrscr();

   printf("enter three number");
   scanf("%d ",&n);
    if(n>0)
    printf("positive");
    if(n<0)
    printf("nagative");
    if(n==0)
    printf(" zero");

    getch();
}
