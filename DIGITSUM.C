void main()
{
	int i,no,temp,sum=0;
	clrscr();
	printf("emter the no:");
	scanf("%d",&no);
	for(;no>0;)
	{
		   temp=no%10;
		   sum+=temp;
		   no=no/10;
	}
	printf("%d",sum);
	getch();
}