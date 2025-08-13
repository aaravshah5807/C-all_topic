#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,choice;
	clrscr();

	printf("enter the 2 numbers :");
	scanf("%d %d",&no1,&no2);

	//printf("enter your choice:");
	printf("\nenter 1 for addition:");
	printf("\nenter 2 for substraction:");
	printf("\nenter 3 for multiplication:");
	printf("\nenter 4 for division:");
	printf("\nenter 5 for moduler:");
	printf("\nenter 6 for enter new numbers:");
	printf("\nenter 7 for exit:");
	start:
	printf("\nenter your choice:");
	scanf("%d",&choice);
	//start:
		switch(choice)
		{
			 case 1:
			// add=n1+n2;
			// add=no1+no2;
			 printf("your addition of value is %d",(no1+no2));
			 break;

			 case 2:
		       //  sub=n1-n2;
			// sub=no1-no2;
			 printf("your substraction of value is %d",(no1-no2));
			 break;

			 case 3:
			// multi=n1*n2;
			// multi=no1*no2;
			 printf("your multiplcation of value is %d",(no1*no2));
			 break;

			 case 4:
			// divi=n1/n2;
		       //	 divi=no1/no2;
			 printf("your division of value is %d",(no1/no2));
			 break;

			 case 5:
		       //	 mod=no1%no2;
		      //	 mod=n1%n2;
			 printf("your addition of value is %d",(no1%no2));
			 break;

			 case 6:
			 printf("enter new value of no1 and no2");
			 scanf("%d %d",&no1,&no2);
			 break;
			 //goto start;
			 case 7:
			 exit();

			 default:
			 printf("you selected wrong choice");

	}
	goto start;
	getch();

}