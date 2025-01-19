#include<stdio.h>
#include<conio.h>

void main()
{
     FILE *f;
     char s[100];
     int rno,s1,s2,s3,total;
     double per;
     char *sname;
     clrscr();

     printf("\nEnter name of student :");
     gets(sname);
     printf("\nEnter roll no :");
     scanf("%d",&rno);
     printf("\nEnter marks of s1 :");
     scanf("%d",&s1);
     printf("\nEnter marks of s2 :");
     scanf("%d",&s2);
     printf("\nEnter marks of s3 :");
     scanf("%d",&s3);

     total=s1+s2+s3;
     per=total/3;
     f=fopen("rahul.txt","w");
     fprintf(f,"%s %d %d %d %d %d %lf","rahul",22,56,78,89,223,74.33);
     fclose(f);
     getch();
}

