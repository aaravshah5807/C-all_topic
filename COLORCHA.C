#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char ch='a';
	clrscr();

	for(j=1;j<10;j++)
	{
		for(i=0;i<80;i++)
		{
			gotoxy(j,i+1);
			sound(i*20);
			delay(2);
			nosound();
			textcolor(i+1);
			cprintf("%c",ch+i);
		}
	}
	getch();
}