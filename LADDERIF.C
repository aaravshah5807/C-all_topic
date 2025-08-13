/* CONCEPT- CONDITIONAL STATMENT ladder if else
programer name-aarav shah
program name-identyfy positive and negative values */
#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("enter the value");
	scanf("%d",&no);
	if(no>0)
	{
		printf("the no is %d\n",no);
		printf("this is positive value\n");
	}
	else if(no<0)
	{
		printf("the no is %d\n",no);
		printf("this is negative");
	}
	else
	{
		printf("the number is zero");
	}
	getch();
}