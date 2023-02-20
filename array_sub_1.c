#include <stdio.h>
/**
 * main - Entry point
 * return - success(0) if program successfully
 */
int main(void)
{
	int matrix [2][3] = { {1, 4, 2}, {3, 6, 8} };
	/* Creating a loop variables */
	matrix[0][0] = 9;

	int x, y;

	for (x = 0; x < 2; x++)
	{
		for (y = 0; y < 3; y++)
		{
			/* printing the output of 2 x 3 array */
			printf("%d\n", matrix[x][y]);
		}
	}
	return (0);
}
