#include<stdio.h>
#include<conio.h>
void main()
{
	char op;
	int num1,num2,res;
	clrscr();
	printf("Enter 1st number:\n");
	scanf("%d",&num1);
	printf("Enter 2nd number:\n");
	scanf("%d",&num2);
	start:
	printf("Operation(+,-,*,/,%):\n");
	fflush(stdin);
	scanf("%c",&op);
	switch(op)
	{
		case '+':
		{
			res=num1+num2;
			break;
		}
		case '-':
		{
			res=num1-num2;
			break;
		}
		case '*':
		{
			res=num1*num2;
			break;
		}
		case '/':
		{
			res=num1/num2;
			break;
		}
		case '%':
		{
			res=num1%num2;
			break;
		}
		case '!':
		{
		 exit();
		}
		default:
		{
			printf("Invalid choice...");
		}
	}
	printf("Answer: %d",res);
	getch();
	goto start;
}