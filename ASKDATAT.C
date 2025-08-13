#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	int a;
	float b;
	char c;
	double d;
	long int e;
	clrscr();
	start:
	printf("\n 1 for int");
	printf("\n 2 for float");
	printf("\n 3 for char");
	printf("\n 4 for double");
	printf("\n 5 for long int");
	printf("\n 6 for exit");
	printf("\n enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("enter your integer value");
		scanf("%d",&a);
		printf("your value is %d",a);
		break;
		case 2:
		printf("enter your float value");
		scanf("%f",&b);
		printf("your value is %f",b);
		break;
		case 3:
		printf("enter your charcter value");
		scanf(" %c",&c);
		printf("your value is %c",c);
		break;
		case 4:
		printf("enter your double value");
		scanf("%lf",&d);
		printf("your value is %lf",d);
		break;
		case 5:
		printf("enter your long integer value");
		scanf("%ld",&e);
		printf("your value is %ld",e);
		break;
		case 6:
		exit();
		break;
		default:
		printf("you enterd wrong choice");
	}
	getch();
	goto start;
}