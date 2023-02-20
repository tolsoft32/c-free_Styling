#include <stdio.h>
/**
 * main - Entry point
 * return - success (0) when program works
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			continue;
		}
		printf("%d\n", i);
	}
	return (0);
}
