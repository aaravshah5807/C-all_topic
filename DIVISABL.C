#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();

	printf("enter the value ");
	scanf("%d",&a);

	if(a%11==0 && a%5==0)
	{
		printf("its  divisibal by 5 and 11 both");

	}
	else if(a%11==0)
	{
		printf("its divisabl by 11");
	}
	else if(a%5==0)
	{
		printf("its  divisibal by 5");
	}
	else
	{
		printf("its not divisable by 5 of 11");
	}
	getch();


}