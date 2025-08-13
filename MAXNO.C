#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();
	printf("enter 3 values:");
	scanf("%d %d %d",&no1,&no2,&no3);
	if(no1>no2)
	{
	 if(no1>no3)
	 {
	  printf("\n No1 is max%d",no1);
	 }
	 else
	 {
	  printf("\n No3 is max%d",no3);
	 }
	}
	else if(no1==no2 || no2==no3 ||no1==no3)
    {
        if(no1==no2==no3)
        {
            printf("All three values are equal");
        }
        if(no1==no2)
        {
            printf("No1 and no2 are equal");
        }
        else if(no2==no3)
        {
            printf("no2 and no3 are equal");
        }
        else
        printf("No1 and no3 are equal");
    }
	else
	{
	 if(no2>no3)
	 {
	  printf("\n No2 is max%d",no2);
	 }
	 else
	 {
	  printf("\n No3 is max%d",no3);
	 }
	}
getch();
}
