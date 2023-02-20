#include <stdio.h>
/**
 * main - Entry point
 * return - success(0) if program works
 */
int main(void)
{
	int docks;

	puts("Enter the number of docks");
	scanf("%i", &docks);
	/* making a dock decision */
	if (docks < 1)
	{
		puts("That is not a valid number of docks");
		return (1);
	}
	/* if dock is >=1*/
	printf("There are %i cards\n", (docks * 52));
	return (0);
}
