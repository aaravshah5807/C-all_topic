#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("\n%d",i);
	}
	for(i=5;i>=1;i--)
	{
		printf("\n5%d",i);
	}
	getch();
}