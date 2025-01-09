#include<stdio.h>
#include<conio.h>
#include<math.h>


void main()
{
	   int breadth,length,area,choice,radius;
	   float pi;
	   clrscr();
	   printf("\n1. area of triangle ");
	   printf("\n2. area of rectangle ");
	   printf("\n3. area of circle \n");

	   printf("\n Enter your choice...");
	   scanf("%d",&choice);

	   switch(choice)
	   {
		 case 1:
			  printf("\nEnter of length :");
			  scanf("%d",&length);
			  printf("\nEnter of breadth :");
			  scanf("%d",&breadth);
			  area=length*breadth/2;
			  printf("\narea of triangle is :%d",area);
			  break;
		 case 2:

			  printf("\nEnter of length :");
			  scanf("%d",&length);
			  printf("\nEnter of breadth :");
			  scanf("%d",&breadth);
			  area=length*breadth;
			  printf("\nArea of rectangle is : %d",area);
			  break;
		 case 3:
			  printf("\nEnter of radius :");
			  scanf("%d",&radius);
			  pi=3.141;
			  area=pi*radius*radius;
			  printf("\nArea of circle is :%d",area);
			  break;
	   }
	   getch();
}
