#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,newn=0, temp, fa=1,swapped;
     clrscr();
     num=1234;

    for (i = 0; i < 4; i++)
     {
	temp = num % 10;
	num /= 10;

	if (i == 1)
	 {
	    int swapped = num % 10;
	    num /= 10;
	    newn += swapped * fa * 10;
	    temp = swapped;
	}

	newn += temp * fa;
	fa *= 10;
    }

    printf("Output number: %d\n", newn);

    getch();
}