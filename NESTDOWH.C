void main()
{
	int row=1,col,tri=1;
	clrscr();
	do{
	row=1;
	do{
		col=1;
		do{
		printf("*");
		col++;
		}while(col<=row);
		row++;
		printf("\n");
	}while(row<=3);
	tri++;
	printf("\t");
	}while(tri<=3);
	getch();
}