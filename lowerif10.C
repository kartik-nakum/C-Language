9.	Grade a Student Based on Marks.
#include<stdio.h>
#include<conio.h>
void main()
{

  char ch;
  clrscr();

  printf("enter any character");
     scanf("%c",&ch);

     if(ch>='A' && ch<='Z')
     {
     printf(" uppercase");
     }
     else if(ch>='a' && ch<='z')
     {
     printf("lowercase");
     }
     else
     {
     printf("not alphabet");
     }
     getch();

}
