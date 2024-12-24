#include<stdio.h>
#include<conio.h>

struct student
{
      int rno,s1,s2,s3,total;
      char *sname;
      double per;
};

void main()
{
      struct student s1;
      clrscr();
      printf("\nEnter name of student :");
      gets(s1.sname);
      printf("\nEnter roll no :");
      scanf("\n%d",&s1.rno);
      printf("\nEnter marks of subject 1 :");
      scanf("%d",&s1.s1);
      printf("\nEnter marks of subject 2 :");
      scanf("%d",&s1.s2);
      printf("\nEnter marks of subject 3 :");
      scanf("%d",&s1.s3);

      s1.total=s1.s1+s1.s2+s1.s3;
      s1.per=s1.total/3;

      printf("\nstudent name : %s",s1.sname);
      printf("\nroll no : %d",s1.rno);
      printf("\ntotal :%d",s1.total);
      printf("\npercentage : %lf",s1.per);

      if(s1.per>=70)
      {
	   printf("\ndistiction ");
      }
      else if (s1.per>=60)
      {
	   printf("\nfirst class");
      }
      else if(s1.per>=50)
      {
	  printf("\n second class");
      }
      else if(s1.per>=40)
      {
	  printf("\n third class");
      }
      else if(s1.per>=30)
      {
	  printf("\n fail");
      }
      getch();
}