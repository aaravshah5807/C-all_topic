#include<stdio.h>
#include<conio.h>
void main()
{
	int i,odd=0,even=0,user;
	clrscr();

	printf("enter the number");
	scanf("%d",&user);

	for(i=1;i<=user;i++)
	{
		if(i%2==0)
		{
			even=even+i;
		}
		else
		{
			odd=odd+i;
		}
	}
	printf("sum of odd is %d\n",odd);
	printf("sum of even is %d",even);
	getch();
}
