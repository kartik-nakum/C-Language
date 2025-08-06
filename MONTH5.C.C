5.	Month Name from Number.
#include<stdio.h>
#include<conio.h>
void main()
{
  int ch;
  printf("enter your month 1 to 12");
  scanf("%d",&ch);

  switch(ch)
  {
  case 1:
  printf("january");
  break;
  case 2:
  printf("february");
  break;
  case 3:
  printf("march");
  break;
  case 4:
  printf("april");
  break;
  case 5:
  printf("may");
  break;
  case 6:
  printf("june");
  break;
  case 7:
  printf("july");
  break;
  case 8:
  printf("august");
  break;
  case 9:
  printf("septeber");
  break;
  case 10:
  printf("octeber");
  break;
  case 11:
  printf("naveber");
  break;
  case 12:
  printf("deceber");
  break;
  default:
  printf("invalid choice");
  }
}
