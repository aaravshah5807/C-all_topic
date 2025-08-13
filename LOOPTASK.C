#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	clrscr();
	for(i=1;i<=50;i++)
	{       sum+=i;
		printf("\n%d",i);
	}
	printf("\nsum:%d",sum);
	getch();
}