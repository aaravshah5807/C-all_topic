#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,o,p,q;
	clrscr();

	i=1;
	while(i<=5)
	{
	   k=5;
	   while(k>i)
	   {
	      printf(" ");
	      k--;
	   }
	   j=1;
	   while(j<=i)
	   {
	    printf("* ");
	    j++;
	   }
	   printf("\n");
	   i++;
	}
	o=1;
	while(o<=5)
	{
	   p=1;
	   while(p<o)
	   {
	      printf(" ");
	      p++;
	   }
	   q=5;
	   while(q>=o)
	   {
	    printf("* ");
	    q--;
	   }
	   printf("\n");
	   o++;
	}

	getch();
}