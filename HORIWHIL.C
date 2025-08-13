void main()
{
	int row,i,j,k,t;
	char c;
	clrscr();
	printf("enter the rows you want:");
	scanf("%d",&row);
	printf("enter the number of start you want:");
	scanf("%d",&t);
	printf("enter the char you want:");
	scanf(" %c",&c);
	k=1;
	while(k<=row)
	{
		i=1;
		while(i<=t)
		{
			j=1;
			while(j<=k)
			{

				textcolor(i+1);
				cprintf("%c",c);
				j++;
			}
			printf("\t");
			i++;
		}
		printf("\n");
		k++;
	}
	getch();
}