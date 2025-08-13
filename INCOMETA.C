#include<stdio.h>
#include<conio.h>
void main()
{
	long int income,tax=0;
	clrscr();

	printf("enter your income:");
	scanf("%ld",&income);

	if(income<250000)
	{
	 printf("no tax ");
	}
	else if(income>250000 || income<500000)
	{
		tax=income*0.05;
		printf("your tax is %ld",tax);
	}
	else if(income>500000 || income<1000000)
	{
		tax=income*0.20;
		printf("your tax is %ld",tax);
	}
	else if(income>1000000)
	{


		tax=income*0.30;
		printf("your tax is %ld",tax);
	}
	getch();
}