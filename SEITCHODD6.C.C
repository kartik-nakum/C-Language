6.	Even or Odd Checker
#include<stdio.h>
#include<conio.h>
void main()
{
  int num;
  clrscr();

  printf("enter a number");
  scanf("%d",&num);

  switch(num%2)
  {
    case 0:
    printf("even");
    break;
    case 1:
    printf("odd");
    break;

  }
  getch();
}
