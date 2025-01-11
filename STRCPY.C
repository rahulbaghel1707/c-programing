#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[50],str2[50];
	clrscr();
	printf("\nEnter a String 1 :");
	gets(str1);
	strcpy(str2,str1);
	printf("\nString are copy : %s",str1);
	getch();
}