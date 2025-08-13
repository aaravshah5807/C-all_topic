#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],row,col,i,j;
	clrscr();

	printf("enter the matrix element :\n");
	scanf("%d %d",&row,&col);
	printf("elements is:");
	for(i=0;i<row;i++)
	{
	 for(j=0;j<col;j++)
	  {
	     scanf("%d",&a[i][j]);
	  }
	}
	printf("%d * %d matrix is \n",row,col);
	for(i=0;i<row;i++)
	{
	 for(j=0;j<col;j++)
	  {
	     printf("%d ",a[i][j]);
	  }
	  printf("\n");
	}
	printf("\n");
	printf("the converted metrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(j<i || i<j)
			{
				printf(" 0 ");
			}
		       /*	else if(i>j)
			{
				printf(" 0 ");
			}            */
			else
			{
				printf(" 1 ");
			}

		}
		printf("\n");
	}
	getch();

}