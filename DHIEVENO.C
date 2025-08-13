void main()
{
	int a,b,c,d,e;
	clrscr();

	printf("Emter the 5 numbers :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	if(a%2==0 && b%2==0 && c%2==0 && d%2==0 && e%2==0)
	{
		printf("All numbers are even");
	}
	else if(a%2==0 && b%2==0 && c%2==0 && d%2==0 && e%2!=0)
	{
		printf("e is not even number");
	}
	else if(a%2==0 && b%2==0 && c%2==0 && d%2!=0 && e%2==0)
	{
		printf("d is not even number");
	}
	else if(a%2==0 && b%2==0 && c%2!=0 && d%2==0 && e%2==0)
	{
		printf("c is not even number");
	}
	else if(a%2==0 && b%2!=0 && c%2==0 && d%2==0 && e%2==0)
	{
		printf("b is not even number");
	}
	else if(a%2!=0 && b%2==0 && c%2==0 && d%2==0 && e%2==0)
	{
		printf("a is not even number");
	}
	else if(a%2!=0 && b%2!=0 && c%2==0 && d%2==0 && e%2==0)
	{
		printf("a and b is not even number");
	}
	else if(a%2==0 && b%2!=0 && c%2!=0 && d%2==0 && e%2==0)
	{
		printf("b and c is not even number");
	}
	else if(a%2==0 && b%2==0 && c%2!=0 && d%2!=0 && e%2==0)
	{
		printf("c and d is not even number");
	}
	else if(a%2==0 && b%2==0 && c%2==0 && d%2!=0 && e%2!=0)
	{
		printf("d and e is not even number");
	}
	else if(a%2!=0 && b%2!=0 && c%2!=0 && d%2==0 && e%2==0)
	{
		printf("a , b and c is not even number");
	}
	else if(a%2==0 && b%2!=0 && c%2!=0 && d%2!=0 && e%2==0)
	{
		printf("b,c and d is not even number");
	}
	else if(a%2==0 && b%2==0 && c%2!=0 && d%2!=0 && e%2!=0)
	{
		printf("c,d and e is not even number");
	}
	else
	{
		printf("all are odd numbers");
	}

	getch();
}