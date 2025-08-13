/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
void  main()
{
   int i,a[5],sum=0;
   clrscr();
   printf("Enter 5 number\n");

   for(i=0;i<5;i++)
   {
       scanf("%d",&a[i]);

   }
   for(i=0;i<5;i++)
   {
       printf("%d\n",a[i]);
       sum+=a[i];
   }
   printf("%d",sum);

   getch();
}