#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{

	float p,r,t,a,si,ci;
	clrscr();
	printf("\nEnter P :");
	scanf("%f",&p);
	printf("\nEnter R :");
	scanf("%f",&r);
	printf("\nEnter T :");
	scanf("%f",&t);

	si=p*r*t/100;
	printf("\nsimple interest =%f",si);

	a=p*((pow((1+r/100),t)));
	ci=a-p;
	printf("\ncompound interest is : %lf ",ci);
	getch();
}