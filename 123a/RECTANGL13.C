13.	Write A Program to Calculate the Perimeter of a Rectangle.
#include<stdio.h>
#include<conio.h>
void main()
{
  float t,l,w;
  clrscr();

  printf("enter length value");
  scanf("%f",&l);

  printf("enter width value");
  scanf("%f",&w);

  t=2*(l+w);
  printf("perimeter of rectangle %f",t);
  getch();


}
