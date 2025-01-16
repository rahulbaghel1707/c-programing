#include<stdio.h>
#include<conio.h>
void main()
{
	long i,fact=1,number;
	clrscr();
	printf("\nEnter a Number ");
	scanf("%ld",&number);
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial of %ld is : %ld",number,fact);
	getch();
}
