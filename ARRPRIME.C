#include <stdio.h>
#include <conio.h>

void main()
 {
    int a[5] = {1, 2, 3, 4, 5}, i, j, f, first = 1;

    clrscr();
    printf("Prime elements: ");

    for (i = 0; i < 5; i++) 
	{
        if (a[i] > 1)
		{
            
            f = 1;
            for (j = 2; j <= a[i] / 2; j++)
			 {
                if (a[i] % j == 0) {
                    f = 0;
                    break;
                }
            }
            if (f) 
			{
                if (!first) printf(", ");
                printf("%d", a[i]);
                first = 0;
            }
        }
    }

    printf("}\n");
    getch();
}