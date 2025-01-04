#include<stdio.h>
#include<conio.h>
 void main()
 {
       long num,rev_num=0,remainder;
       clrscr();
       printf("\nEnter the number to reverse :");
       scanf("%ld",&num);

       while(num!=0)
       {
	     remainder=num%10;
	     rev_num=rev_num*10+remainder;
	     num=num/10;
       }
       printf("\the reversed number is : %ld",rev_num);
       getch();
 }

