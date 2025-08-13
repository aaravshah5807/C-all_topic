#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,max;
	clrscr();

	printf("enter the two numbers :");
	scanf("%d%d",&no1,&no2);

	if(no1>no2)
	{
		max=no1;
	}
	else
	{
		max=no2;
	}
	max+=100;
	printf("the final value is %d",max);
	getch();
}