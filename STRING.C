#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
       char str1[50],str2[50],str3[50];
       int l1,x;
       clrscr();
       printf("\nEnter string 1 :");
       gets(str1);
       //scanf("%s",str1);
       printf("\ngiven string 1 is ls %s",str1);
       l1=strlen(str1);
       printf("\nlength of string 1 is %d",l1);

       printf("\nEnter string 2 :");
       gets(str2);
       printf("\ngiven string 2 is ls %s",str2);
       x=strcmp(str1,str2);
       //printf("\nx : %s",x);
       if(x==0)
       {
	    printf("\nBoth are same ");
       }
       else
       {
	    printf("\nBoth are different ");
       }
       strcpy(str3,str1);
       printf("\nAfter copy string 3 ls %s",str3);

       strcat(str1,str2);
       printf("\nAfter concatnation string 1 ls %s",str1);

       strrev(str1);
       printf("\nAfter reverse string 1 ls %s",str1);
       getch();
}