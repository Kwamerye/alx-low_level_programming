#include "main.h"

/**
 * reverse_array - Reverse content of an array of intergers
 * @a: content
 * @n: element of content to reverse
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n; x++)
	{
		n--;
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
