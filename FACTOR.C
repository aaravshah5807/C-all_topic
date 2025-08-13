#include<stdio.h>
#include<conio.h>

void  main()
{
    int no,fac=1,i;
    clrscr();

    printf("Enter the number:");
    scanf("%d",&no);

    for(i=no;i>=1;i--)
    {
	fac *= i;
    }
    printf("factor is %d",fac);
    getch();
}