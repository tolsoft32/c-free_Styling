#include <stdio.h>
/**
 * main - Entry point
 * return - success(0) if program work well
 */
int main(void)
{
	int a;

	printf("Enter the value of a :");
	scanf("Enter a number %d", &a);
	/* Displaying the a tables */
	for (int i = 1; i <= a; i++)
	{
		/* Inner loop */
		for (int j = 1; j <= 10; j++)
		{
			/* Printing the value */
			printf("%d\t", (i * j));
		}
		printf("\a");
	}
	return (0);
}
