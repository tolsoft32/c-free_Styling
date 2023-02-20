#include <stdio.h>
/**
 * main - Entry point
 * return - success (0) when program works
 */
int main(void)
{
	char greetings[] = "Hello World";

	printf("%c\n", greetings[0]);
	/* Changing value of char */
	greetings[0] = 'J';
	printf("%s\n", greetings);
	return (0);
}
