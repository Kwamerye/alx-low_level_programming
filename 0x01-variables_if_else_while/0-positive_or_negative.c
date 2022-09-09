#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if positive, zero or negative
 *
 * Return (0)
 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	if (n > n)
	{
		printf("%d is positive\n",n);
	} else if (n == 0)
	{
		printf("%d is zero\n",n);
	} else 
	{
		printf("%d is negative\n"n);
	}
	return (0);
}

