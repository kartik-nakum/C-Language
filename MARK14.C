14.	Write a C Program that accepts marks of 3 subjects and calculate the total and percentage. total = mark1 + mark2 + mark3
per = total/3.0

#include<stdio.h>
#include<conio.h>
void main()
{
 float t,p,m1,m2,m3;
 clrscr();

 printf("mark1 value");
 scanf("%f",&m1);
 printf("mark2 value");
 scanf("%f",&m2);
 printf("mark3 value");
 scanf("%f",&m3);

 t=m1+m2+m3;
 printf("total %f",t);
 p=t/3;
 printf("percentage %f",p);
 getch();

}
