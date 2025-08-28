10.	Write a program to print the sum of digits of a given number using a while loop.
#include<stdio.h>
#include<conio.h>
void main()
{
  int num,sum=0;
  clrscr();

  printf("enter the number");
  scanf("%d",&num);

  while(num!=0)
  {
    sum+=num%10;
    num=num/10;

  }
    printf("sum %d",sum);
    getch();
}
