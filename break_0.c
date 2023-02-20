#include <stdio.h>
/**
 * main - Entry point
 * return - success (0) - if program works
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 4)
		{
			break;
		}
		printf("%d\n", x);
		}
	return (0);
}
