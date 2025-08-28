11.	Write a program to check whether a given number is a palindrome or not using a while loop.
#include<stdio.h>
#include<conio.h>
void main()
{
  int temp,sum=0,a,b;
  clrscr();

  printf("enter the number");
  scanf("%d",&a);
  temp=a;

  while(a>0)
  {
    b=a%10;
    sum=(sum*10)+b;
    a=a/10;

  }
  if(temp==sum)
  {
    printf("palindrome number");
    }
    else
    {
    printf("not palindrome");
    }
    getch();
}
