#include <stdio.h>
/**
 * main - Entry point
 * return - success(0) - program runs well
 */
int main(void)
{
	char cue = 'H';

	switch (cue)
	{
		case 'C':
			puts("Clubs");
			break;
		case 'D':
			puts("Diamond");
			break;
		case 'P':
			puts("Programming");
		case 'H':
			puts("Hearts Engineer");
			break;
		default:
			puts("Coding in C");
	}
	return (0);
}
