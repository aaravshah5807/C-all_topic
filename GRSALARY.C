#include<stdio.h>
#include<conio.h>
void main()
{
	long int sal,gross;
	float hra,da;
	clrscr();

	printf("enter your salary");
	scanf("%ld",&sal);

	if(sal<=10000)
	{
	 hra=(sal/10)*2;
	 printf("your hra is %f\n",hra);
	 da=(sal/10)*8;
	 printf("your da is %f\n",da);
	 gross=sal+hra+da;
	 printf("your gross salary is %ld\n",gross);
	}
	else if(sal<=20000)
	{
	 hra=(sal/10)*2.5;
	 printf("your hra is %f\n",hra);
	 da=(sal/10)*9;
	 printf("your da is %f\n",da);
	 gross=sal+hra+da;
	 printf("your gross salary is %ld\n",gross);
	}
	else if(sal>20000)
	{
	 hra=(sal/10)*3;
	 printf("your hra is %f\n",hra);
	 da=(sal/10)*9.5;
	 printf("your da is %f\n",da);
	 gross=sal+hra+da;
	 printf("your gross salary is %ld\n",gross);
	}

	getch();




}