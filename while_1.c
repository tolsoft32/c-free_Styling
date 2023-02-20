#include <stdio.h>
/**
 * main - Entry point
 * return - success(0) if program successful
 */
int main(void)
{
	int x = 0;

	do {
		printf("%d\n", x);
		x++;
	} while (x < 10);
	/* return success of program */
	return (0);
}
