3.	Find the Largest of three Numbers
#include<stdio.h>
#include<conio.h>
void main()
{
   int n1,n2,n3;
   clrscr();

   printf("enter three number");
   scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2&&n1>n3)
    printf("both are equal",n1);
    if(n2>n1&&n2>n3)
    printf("%d is larges",n2);
    if(n3>n1&&n3>n2)
    printf("%d is lessthan",n3);

    getch();
}
