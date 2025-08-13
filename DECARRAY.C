#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],num,i,j,temp;
	clrscr();
	printf("enter the size of array");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements is : \n");
	for(i=0;i<num;i++)
	{
	 printf("%d\n",a[i]);
	}
	for(i=0; i<num;i++)
	{
		for(j=i+1;j<num; j++)
		{
			if(a[i] < a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

		}
	}
	printf("array dec to ase : \n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}