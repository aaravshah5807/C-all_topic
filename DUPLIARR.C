#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,num,a[50],k;
	clrscr();

	printf("enter the size of elements:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements is :\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<num;i++)
	{
		for(k=i+1;k<num;k++)
		{
			if(a[i]==a[k])
			{
				for(j=k;j<num;j++)
				{
					a[j]=a[j+1];
				}
				num--;
				k--;
			}
		}
	}
	printf("after remove the duplicate elemantes:\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();

}