2.	Find the Largest of Two Numbers
#include<stdio.h>
#include<conio.h>
  void main()
{

   int n1,n2;
   clrscr();

   printf("enter two number");
   scanf("%d %d",&n1,&n2);

    if(n1>n2)
    {
    	 printf("%d is hargest",n1);
	}
   else if(n2>n1)
   {
   	printf("%d is larges",n2);
   }
   
   else 
   {
   	 printf("both are equal");
   }
   
    getch();
}
