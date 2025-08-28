#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
    sum();
    getch();

}
void sum()
{
  int x,y,z;
  printf("\n enter two value");
  scanf("%d %d",&x,&y);
  z=x+y;
  printf("\n the sum is %d",z);
}
