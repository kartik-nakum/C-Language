6.	Check if a Person is Eligible to Vote
#include<stdio.h>
#include<conio.h>
void main()
{

  int age;
  clrscr();

  printf("enter age");
     scanf("%d",&age);
     if(age>=18)
     {
     printf("%d the vote");
     }
     else
     {
     printf("%d the not vote");
     }
     getch();

}
