#include<stdio.h>
#include<conio.h>'
void main()
{
	int num,first=0,second=1,next,i;
	clrscr();

	printf("enter the number of terms");
	scanf("%d",&num);

	printf("fibonacci series :");

	for(i=0;i<num;i++)
	{
		if(i==0)
		{
		 next=first;
		}
		else if(i==1)
		{
		 next=second;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		printf("%d\t",next);
	}
	getch();
}