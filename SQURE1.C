1.	Find A Square and a Cube of Numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
  int t,s,c;
  clrscr();
  printf("\n enter a number");
  scanf("%d",&t);

  s=t*t;
  c=s*t;
  printf("\n squqre of %d is =%d",t,s);
  printf ("\n cube of %d is =%d",t,c);
     getch();

}
