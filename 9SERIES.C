#include<stdio.h>
#include<conio.h>

void main()
{
	int no,i;
	long int term=0,sum=0;
	clrscr();

	printf("Enter the number of series:");
	scanf("%d",&no);
	printf("the series is \n");
	for(i=1;i<=no;i++)
	{
		term=term*10+9;
		printf("%ld\t",term);
		sum+=term;
	}
	printf("\nthe sum of series is %d",sum);
	getch();
}