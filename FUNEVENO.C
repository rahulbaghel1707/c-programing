#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *f3,*f1,*f2;
	int n,i;
	printf("DATA file content is");
	f1=fopen("DATA.txt","w");
	for(i=1;i<10;i++)
	(
	      scanf("%d",&n);
	      if(n==0)
	      break;
	      putw(n,f1);
	}
	fclose(f1);
	f1=fopen("DATA.txt","r");
	f2=fopen("ODD.txt","w");
	f3=fopen("EVEN.txt","w");

	while((n=getw(f1))!=EOF)
	{
	if(n%2==0)
	     putw(n,f3);
	else
	     putw(n,f2);
	}
	 fclose(f1);
	 fclose(f2);
	 fclose(f3);
	 f2=fopen("ODD.txt","r");
	 f3=fopen("EVEN.txt","r");

	 printf("content of ODD file:");

	 while((n=getw(f2))!=EOF)
	 printf("%3d",n);
	 printf("content of EVEN file:");

	 while((n=getw(f3))!=EOF)
	 printf("%3d",n);
	 fclose(f2);
	 fclose(f3);
	 getch();
}