#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	double arr[10];
	clrscr();
	printf("\nEnter the number :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nEnter the Number %d :",i);
		scanf("%lf",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}
	}
	printf("\nMax element =%lf",arr[0]);
	getch();
}2