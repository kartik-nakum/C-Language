#include<stdio.h>
#include<conio.h>

int sum(int,int);
void main()
{
   int a,b,c;
   clrscr();
   printf("\n enter two value");
   scanf("%d %d",&a,&b);
   c=sum(a,b);
   printf("\n the sum is %d",c);
   getch();
}
int sum(int x, int y)
{
   int z;
   z=x+y;
   return z;
}