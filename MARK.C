/* CONCEPT- CONDITIONAL STATMENT ladder if else
programer name-aarav shah
program name- home work*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int ss,maths,sci,total,avg;
	clrscr();
	printf("enter the marks of ss");
	scanf("%d",&ss);
	printf("enter the marks of maths");
	scanf("%d",&maths);
	printf("enter the marks of sci");
	scanf("%d",&sci);

	total=ss+sci+maths;

	printf("the total marks is %d",total);

	avg=total/3;
	printf("the avg marks is %d",avg);
	if(avg>=90)
	{
		printf("you got A+");
	}
	else if(avg>=80)
	{
		printf("you got A");
	}
	else if(avg>=70)
	{
		printf("you got B");
	}
	else if(avg>=60)
	{
		printf("you got C");
	}
	else if(avg>=50)
	{
		printf("you got D");
	}
	else if(avg>=40)
	{
		printf("you got E");
	}
	else
	{
		print("you are fail");
	}

	getch();
}