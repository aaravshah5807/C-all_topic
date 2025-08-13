void main()
{
	int no,x,temp,sum;
	clrscr();

	printf("enter the number:");
	scanf("%d",&no);
	for(;no>0;)
	{
		temp=no%10;
	}
	x=no/100;
	sum=temp+x;
	printf("the sum is %d",sum);
	getch();

}