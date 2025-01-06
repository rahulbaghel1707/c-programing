#include<stdio.h>
#include<conio.h>
void main()
{
     long i,n;
     long t1=0,t2=1;
     long nextnum=t1+t2;
     clrscr();
     printf("\nEnter the numbers of terms :");
     scanf("%ld",&n);

     for(i=3;i<=n;i++)
     {
	  printf("\n%ld",nextnum);
	  t1=t2;
	  t2=nextnum;
	  nextnum=t1+t2;
     }
     getch();
}