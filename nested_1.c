#include <stdio.h>
/**
 * main - Entry point
 * return - success(0) when programs run well
 */
int main(void)
{
	int i, j;

	/* declaring outer loop execute 2 times */
	for (i = 1; i <= 2; i++)
	{
		printf("Outer: %d\n", i);
	/* Inner loop execute 3 times */
	for (j = 1; i <= 3; j++)
	{
		printf("Inner: %d\n", j);
	}
	}
	return (0);
}
