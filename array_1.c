#include <stdio.h>
/**
 * main - Entry point
 * return - success (0) if program works
 */
int main(void)
{
	int myraids[] = {20, 35, 55, 85, 110};
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", myraids[i]);
	}
	return (0);
}
