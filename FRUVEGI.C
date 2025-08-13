#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,subchoice,qty,price,bill;
	clrscr();

	printf("1.fruits\n");
	printf("2.vagetables\n");

	printf("enter your choice\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		printf("you selected the fruit\n");
		printf("1.apple 150rs\n");
		printf("2.mango 550rs\n");
		printf("3.kiwi 350rs\n");

		printf("enter the sub-choice :");
		scanf("%d",&subchoice);

		switch(subchoice)
		{
		 case 1:
		 printf("you selected apple \n");
		 printf("enter qty :");
		 scanf("%d",&qty);
		 price=150;
		 bill=price*qty;
		 printf("your total is%d",bill);
		 break;

		 case 2:
		 printf("you selected mango \n");
		 printf("enter qty :");
		 scanf("%d",&qty);
		 price=550;
		 bill=price*qty;
		 printf("your total is%d",bill);
		 break;

		 case 3:
		 printf("you selected kiwi \n");
		 printf("enter qty :");
		 scanf("%d",&qty);
		 price=350;
		 bill=price*qty;
		 printf("your total is%d",bill);
		 break;
		}
		break;
		case 2:
		printf("you selected the vagetables\n");
		printf("1.tometo 20rs\n");
		printf("2.onion 50rs\n");
		printf("3.potato 35rs\n");

		printf("enter the sub-choice :");
		scanf("%d",&subchoice);

		switch(subchoice)
		{
		 case 1:
		 printf("you selected tometo \n");
		 printf("enter qty :");
		 scanf("%d",&qty);
		 price=20;
		 bill=price*qty;
		 printf("your total is%d",bill);
		 break;

		 case 2:
		 printf("you selected onion \n");
		 printf("enter qty :");
		 scanf("%d",&qty);
		 price=50;
		 bill=price*qty;
		 printf("your total is%d",bill);
		 break;

		 case 3:
		 printf("you selected potato \n");
		 printf("enter qty :");
		 scanf("%d",&qty);
		 price=35;
		 bill=price*qty;
		 printf("your total is%d",bill);
		 break;
		}
		break;
	}
	getch();
}
