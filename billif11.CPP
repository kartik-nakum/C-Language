11.	Write a C program to calculate the electricity bill based on the units of electricity consumed. The billing rates vary depending on the consumption range as follows:
I.	 For the first 50 units, the cost is $0.50 per unit.
II.	 For the next 100 units (i.e., 51 to 150), the cost is $0.75 per unit.
III  For the next 100 units (i.e., 151 to 250), the cost is $1.20 per unit.
     For units above 250, the cost is $1.50 per unit.
#include<stdio.h>
#include<conio.h>
void main()
{
  float units,bill=0.0;
  clrscr();

  printf("enter the units");
  scanf("%f",&units);

  if(units<=50)
  {
  bill=units*0.50;
  }
  else if(units<=150)
  {
   bill=(50*0.50)+((units-50)*0.75);
  }
  else if(units<=250)
  {
  bill=(50*0.50)+(100*0.75)+((units-150)*120) ;
  }
  else
  {
  bill=(50*0.50)+(100*0.75)+(100*1.20)+((units-250)*1.50);
  }
  printf("the electricity bill %f:",bill);
 getch();
}
