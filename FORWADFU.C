#include<stdio.h>
#include<conio.h>

 void printline()
for(int i=0;i<50;i++)

void main()
{
    clrscr();
    printline();
    printf("welcome to user defined function c programing\n");
    printline();
    getch();
}
 void printline()
 {
      for(int i=0;i<50;i++)
      {
	 printf("*");
      }
      printf("\n");
 }