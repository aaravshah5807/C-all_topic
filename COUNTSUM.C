void main()
{
       long int no,temp=0,sum=0;
	clrscr();

	printf("enter the number:");
	scanf("%ld",&no);

	for(;no>0;)
	{
		temp=no%10;
//		no/=10;
		sum=sum+temp;
		no/=10;
	}
	printf("the sum of count is %d",sum);
	getch();

}