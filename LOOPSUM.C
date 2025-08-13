#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num,sum=0;
	clrscr();

	printf("enter the number");
	scanf("%d",&num);

	for(i=1; i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	if(sum==num)
	{
		printf("this number is perfect");
	}
	else
	{
		printf("this number is not perfect");
	}
	getch();
}