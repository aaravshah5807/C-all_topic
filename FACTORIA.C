#include<stdio.h>
#include<conio.h>
void main()
{
	int i,user,sum=1;
	clrscr();

	printf("enter the number:");
	scanf("%d",&user);
	for(i=1;i<=user;i++)
	{
		sum=sum*i;
	}
	printf("value is %d",sum);
	getch();
}