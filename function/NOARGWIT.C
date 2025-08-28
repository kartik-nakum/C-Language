#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
   int c;
   c=sum();
   printf("\n the sum is %d",c);
   getch();
}
int sum()
{
  int a,b,z;
  printf("\n enter two value");
  scanf("%d %d",&a,&b);
  z=a+b;
  return z;
}