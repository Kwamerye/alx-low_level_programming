#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square metrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, total1 = 0, total2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		total1 = total1 + a[i];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		total2 = total2 + a[j];
	printf("%i, %i\n", total1, total2);
}
