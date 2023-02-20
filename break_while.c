#include <stdio.h>
/**
 * main - Entry point
 * success - return (0) - if programs run well
 */
int main(void)
{
	int a;

	while (a < 10)
	{
		if (a == 5)
		{
			break;
		}
		printf("%d\n", a);
		a++;
	}
	return (0);
}
