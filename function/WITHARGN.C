#include<stdio.h>
#include<conio.h>

void sum(int,int);
void main()
{
   int a,b,c;
   clrscr();
   printf("\n enter two value");
   scanf("%d %d",&a,&b);
   sum(a,b);
   getch();
}
void sum(int x, int y)
{
   int z;
   z=x+y;
   printf("\n sum is %d",z);
}