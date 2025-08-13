#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();

	printf("enter the year");
	scanf("%d",&year);

	if(year%4==0)
	{
		printf("this year is leap year");
	}
	else
	{
		printf("this year is not leap year");
	}
	getch();
}