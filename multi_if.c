#include <stdio.h>
/**
 * main - Entry point
 * return - success (0) if programs run well
 */
int main(void)
{
	int time = 21;

	if (time <= 10)
	{
		printf("Good Morning");
	}
	else if (time <= 20)
	{
		printf("Good Afternoon");
	}
	else
	{
		printf("Good evening");
	}
	return (0);
}
