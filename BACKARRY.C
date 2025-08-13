#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Array in reverse order:\n");

    for (i=4;i>=0;i--)
    {
	printf("%d\n", arr[i]);
    }
     getch();
}