#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,total;
	double per;
	clrscr();
	printf("enter s1 marks of : ");
	scanf("%d",&s1);
	printf("entern s2 marks of : ");
	scanf("%d",&s2);
	printf("enter s3 marks of : ");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;
	printf("\ntotal : %d",total);
	printf("\npercentage : %lf",per);
	if(per>=70)
	{
	    printf("\nDistinction");
	}
	else if(per>=60)
	{
	    printf("\nFirst Class");
	}
	else if(per>=50)
	{
	   printf("\nSecond Class");
	}
	else if(per>=40)
	{
		printf("\nPass Class");
	}
	else
	{
	   printf("\nper you are fail");
	}
	getch();
}