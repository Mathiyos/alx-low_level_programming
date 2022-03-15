#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *  Return: Always 0 (success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = Rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negetive\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	}
	return (0);
}