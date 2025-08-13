void main()
{
	int i,no,sum=0,temp;
	clrscr();

	printf("enter the number:");
	scanf("%d",&no);

	for(;no>0;)
	{
		temp=no%10;
		if(temp%2==1)
		{
			sum+=temp;
		}
		no/=10;
	}
	printf("sum:%d",sum);
	getch();

}