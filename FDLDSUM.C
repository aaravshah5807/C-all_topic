#include<stdio.h>
#include<conio.h>
void main()
{
	int num,fd,ld,sum;
	clrscr();

	printf("enter the number");
	scanf("%d",&num);
	ld=num%10;
	printf("last digit%d\n",ld);
	for(;num>10;)
	{
		num=num/10;
	}
	fd=num;
	printf("first digit is %d\n",fd);
	sum=fd+ld;

	printf("sum of first and last digit is%d",sum);

	getch();
}