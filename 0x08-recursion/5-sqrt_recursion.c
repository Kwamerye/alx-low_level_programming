#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);

/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: Input
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - checks if perfect sqaure
 * @n: Input
 * @i: squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int i)
{
	if (n > i / 2)
		return (-1);
	else if (n * n == i)
		return (n);
	return (_sqrt(n + i, i));
}
