#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();

	printf("enter the value ");
	scanf("%d",&a);

	if(a%3==0)
	{
		printf("its dividibal by 3");

	}
	else if(a%4==0)
	{
		printf("its divisabl by 4");
	}
	else
	{
		printf("its not divisibal by 3 or 4");
	}
	getch();


}