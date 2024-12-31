#include<stdio.h>
#include<conio.h>

void main()
{
      int year;
      clrscr();
      printf("\nEnter year :");
      scanf("%d",&year);

      if(year%4==0||year%400==0||year%100==0)
      {
	     printf("\nIs leap year..");
      }
      else
      {
	     printf("\nIs not leap year..");
      }
      getch();
}