#include<stdio.h>
#include<conio.h>
void main()
{
	int num,fmd,fd,ld,lmd,sum;
	clrscr();

	printf("enter the number");
	scanf("%d",&num);
	ld=num%100;
	lmd=ld/10;
	printf("last digit%d\n",lmd);
	for(;num>100;)
	{
		num=num/10;
	}
	fd=num;
	fmd=fd%10;
	printf("first digit is %d\n",fmd);
	sum=fmd+lmd;

	printf("sum of first and last digit is%d",sum);

	getch();
}