void main()
{
	int no,count=0;
	clrscr();

	printf("enter the number:");
	scanf("%d",&no);

	for(;no>0;)
	{
		count++;
		no/=10;
	}
	printf("count of numbers is %d:",count);
	getch();

}