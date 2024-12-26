#include<stdio.h>
#include<conio.h>

void main()
{
       FILE *f;
       char s[100];
       clrscr();
       f=fopen("tops1.txt","w");
       if(f==NULL)
       {
	     printf("\nfile not created");
       }
       else
       {
	    printf("\nfile created");
	    fprintf(f,"this is file management demo using c programming language");
       }
       fclose(f);

       f=fopen("tops1.txt","a");
       fprintf(f,"\nthis file is now appended.\nthis is another line");
       fclose(f);

       f=fopen("tops1.txt","r");
       //fgets(s,100,f);
       //printf("\n%s",s);
       while((fgets(s,100,f)!=NULL))
       {
	  printf("\n%s",s);
       }
       fclose(f);
       getch();
}