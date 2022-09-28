#include "main.h"
#include <stdio.h>
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: Input
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion(n, (n + 1) / 2));
}
/**
 * squareroot - checks if perfect sqaure
 * @n: Input
 * @i: counter
 *
 * Return: if square root
 */

int _sqrt_recursion(int n)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt_recursion(n, i - 1));
}
