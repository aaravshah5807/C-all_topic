#include <stdio.h>
#include <conio.h>
void main()
{
    int cx = 40, cy = 3, bx = 40, by = 22, score = 0, life = 3, d;
    char ch;

    start:
    clrscr();

    gotoxy(60, 5);
    printf("Score: %d", score);
    gotoxy(60, 6);
    printf("Lifeline: %d", life);

    gotoxy(cx, cy);
    printf("O");

    gotoxy(bx, by);
    printf("#");
    gotoxy(bx + 7, by);
    printf("#");
    gotoxy(bx, by + 1);
    printf("########");

    if (kbhit()) {
	ch = getch();
	switch (ch) {
	    case 'a':
	    case 'A':
		if (bx > 1) // Prevent going off the left edge
		    bx -= 3;
		break;
	    case 'd':
	    case 'D':
		if (bx + 7 < 80) // Prevent going off the right edge
		    bx += 3;
		break;
	    case 'x':
	    case 'X':
		exit(0);
	}
    }

    cy++;
    if (cy == by) {
	d = cx - bx;
	cy = 1;
	cx = rand() % 72 + 4; // Keep it within 4 to 75 to avoid falling off edges
	if (d >= 0 && d <= 7) {
	    score++;
	} else {
	    life--;
	    if (life == 0) {
		clrscr();
		gotoxy(35, 14);
		printf("Game Over!");
		delay(2000);
		exit(0);
	    }
	}
    }

    delay(200);
    goto start;
}