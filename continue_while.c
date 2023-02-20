#include <stdio.h>
/**
 * main - Entry point
 * return - success(0) if program runs well
 */
int main(void)
{
	int k;

	while (k < 10)
	{
		if (k == 6)
		{
			k++;
			continue;
		}
		printf("%d\n", k);
		k++;
	}
	return (0);
}
