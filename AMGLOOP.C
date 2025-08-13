#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int str,end,sum,count,temp,i,r;
	clrscr();

	printf("enter starting and ending value");
	scanf("%d %d",&str,&end);

	for(i=str;i<=end;i++)
	{
		temp=i;
		sum=0;
		 count=0;

		for(;temp>0;)
		{
		 temp=temp/10;
		 count++;
		}
		temp =i;

		for(;temp>0;)
		{
		 r=temp%10;
		 sum=sum+pow(r,count);
		 temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}

	}
	getch();
}