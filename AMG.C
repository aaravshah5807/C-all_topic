#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int start , end, sum,count ,temp,i,r;
	clrscr();

	printf("enter the starting  num and ending num : ");
	scanf("%d %d",&start,&end);

	for(i=start; i<=end; i++)
	{

		sum=0;
		count=0;
		temp=i;

		for(;temp>0;)
		{
			temp = temp /10;
			count++;
		}
		temp=i;
		for(;temp >0;)
		{
		   r =temp % 10;
		   sum =sum+pow(r,count);
		   temp =temp /10;
		}

		if (sum ==i)
		{
			printf("%d\t",i);
		}
	}
	getch();

}