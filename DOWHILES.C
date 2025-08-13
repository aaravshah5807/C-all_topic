void main()
{
	int i,sum=0;
	clrscr();

	i=1;
	do
	{
		sum+=i;
		printf("\nI:%d",i);
		i++;
	}while(i<=5);
	printf("\n Sum :%d",sum);
	getch();
}