#include "main.h"
#include <stdio.h>
int squareroot(int n, int i);

/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: Input
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - checks if perfect square
 * @n: Input
 * @i: counter
 *
 * Return: the square root of n
 */

int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	return (squareroot(n, i - 1));
}
