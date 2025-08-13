#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,num,count=0;
	clrscr();

	printf("enter the num:");
	scanf("%d",&num);
	do
	{
		if(num%i==0)
		{
			count++;
		}
		i++;
	}while(i<=num);
	if(count==2)
	{
		printf("prime");
	}
	getch();
}