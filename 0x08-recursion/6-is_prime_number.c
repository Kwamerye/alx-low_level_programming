#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - return the 1 of n is prime
 * @n: Input to check
 *
 * Return: Always 0
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - return the number 1 if n is prime
 * @n: Input to check
 * @start: number to start checkingfrom
 *
 * Return: 1 if n is prime, 0 if otherwise
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (_is_prime(n, start - 1));
}
