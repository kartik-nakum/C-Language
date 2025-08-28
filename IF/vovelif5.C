5.	Check if a Character is a Vowel or Consonant
#include<stdio.h>
#include<conio.h>
void main()
{
  char c;
  int l,u;
  clrscr();

  printf("enter vovel and constant");
     scanf("%c",&c);

  l=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
  u=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
     if(l||u)
     {
     printf("%c the vovel",c);
     }
     else
     {
     printf("%c the consonat",c);
     }
     getch();

}
