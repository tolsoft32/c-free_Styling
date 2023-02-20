#include <stdio.h>
/**
 * main - Entry point
 * success - return sucess (0) if code works
 */
int main(void)
{
	int day = 1;

	switch (day)
	{
		case 5:
			printf("Today is Thursday");
			break;
		case 6:
			printf("Today is Friday");
			break;
		case 2:
			printf("Today is Monday");
			break;
		default:
			printf("Looking forward to Sunday");
	}
	return (0);
}
