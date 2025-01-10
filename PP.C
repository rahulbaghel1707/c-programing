#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();
	for(i=9;i>=0;i--)
	{
	      for(k=0;k<9-i;k++)
	      {
		  printf(" ");
	      }
	      for(j=0;j<=i;j++)
	      {
		  printf(" *");
	      }

	      printf("\n");
	      }
	      getch();
}