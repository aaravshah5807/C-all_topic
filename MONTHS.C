#include<stdio.h>
#include<conio.h>
void main()
{
	int month,feb;
	clrscr();

	printf("enter the month number");
	scanf("%d",&month);

	switch(month)
	{
		case 1:
		printf("janaury 31 days");
		break;

		case 2:
		printf("enter year");
		scanf("%d",&feb);

		if(feb%4==0)
		{
			printf("this is leap year\n february 29 days");
		}
		else
		{
			printf("this is not leap year\n february 28 days");
		}


		case 3:
		printf("march 31 days");
		break;
		case 4:
		printf("april 30 days");
		break;
		case 5:
		printf("may 31 days");
		break;
		case 6:
		printf("june 30 days");
		break;
		case 7:
		printf("july 31 days");
		break;
		case 8:
		printf("august 31 days");
		break;

		case 9:
		printf("september 30 days");
		break;

		case 10:
		printf("october 31 days");
		break;
		case 11:
		printf("november 30 days");
		break;
		case 12:
		printf("december 31 days");
		break;

	}
	getch();

}