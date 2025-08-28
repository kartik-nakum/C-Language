4.	Vowel or Consonant Checker.
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();

  printf("enter a character");
  scanf("%c",&ch);

  switch(ch)
  {
    case 'a':
    case 'e':
    case 'i' :
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("vovel");
    break;
    default:
    printf("consonat");

  }
  getch();
}
