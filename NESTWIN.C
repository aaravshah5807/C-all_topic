#include<stdio.h>
#include<conio.h>
void main()
{
	int start,end,r,sum,mul,i,temp;
	clrscr();

	printf("enter the starting and ending values");
	scanf("%d %d",&start,&end);

	for(i=start;i<=end;i++)
	{
		sum=0;
		mul=1;
		temp=i;
		for(;temp>0;)
		{
		 r=temp%10;
		 sum=sum+r;
		 mul=mul*r;
		 temp=temp/10;
		}
		if(sum==mul)
		{
			printf("%d\t",i);
		}

	}
	getch();
}