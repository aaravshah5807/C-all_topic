#include<stdio.h>
#include<conio.h>

void main() {
    int n, i, posCount = 0, negCount = 0, zeroCount = 0;
    int arr[100];
    clrscr();

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
	if (arr[i] > 0) {
	    posCount++;
	} else if (arr[i] < 0) {
	    negCount++;
	} else {
	    zeroCount++;
	}
    }

    printf("Positive elements: %d\n", posCount);
    printf("Negative elements: %d\n", negCount);
    printf("Zero elements: %d\n", zeroCount);

    getch();
}