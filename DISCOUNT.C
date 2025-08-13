#include<stdio.h>
#include<conio.h>
void main()
{
	float amt,dis,famt;
	clrscr();

	printf("Enter the Purchase amount:");
	scanf("%f",&amt);

	if(amt>5000)
	{
		dis=amt*0.20;
	}
       else if(amt>3000)
	{
		dis=amt*0.15;
	}
	else if(amt>1000)
	{
		dis=amt*0.10;
	}
       else
	{
		dis=0.0;
	}
	famt=amt-dis;
	printf("\ntotal amount is %f",amt);
	printf("\ntotal discount is %f",dis);
	printf("\ndiscountrd amount is %f",famt);

	getch();
}