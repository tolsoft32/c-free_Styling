#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return or getch()- success (0) back
 *
 */
int main(void)
{
	/* Declaring variables */
	int a, b, sum;
	clrscr();

	/* Print enter two number */
	printf("Enter two numbers");
	scanf("%d %d", &a, &b);
	sum = a + b;

	/* Outputting sum */
	printf("sum = %d", sum);
	/* hold output screen */
	getch();
	/*Return result */
	return (0);
}
