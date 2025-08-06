3. Write a program to get input from users and find the minimum from it.
#include<stdio.h>
#include<conio.h>
void main()
{
    int b,a[5]={10,20,30,40,50};
    int min=a[0];
    clrscr();

    for(b=1;b<5;b++)
    {
     if(a[b]<min)
     {
      min=a[b];
     }
    }
    printf("%d",min);
    getch();
}