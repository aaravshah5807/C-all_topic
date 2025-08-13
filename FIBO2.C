#include<stdio.h>
#include<conio.h>
void main()
{
	int start,end,first=0,second=1,next,i;
	clrscr();

	printf("enter starting and ending values");
	scanf("%d %d",&start,&end);

	for(i=start;i<=end;i++)
	{
	  // first=0;
	 // second=1;
	   // for(;i<0;)
	   // {
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
	   // }
	    getch();
	}


}