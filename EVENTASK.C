#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=20;i++)
	{       if(i%2==0)
		{
			printf("%d\t",i);
		}
	       //	printf("\n%d",i);
	}
       //	printf("\nsum:%d",sum);
	getch();
}