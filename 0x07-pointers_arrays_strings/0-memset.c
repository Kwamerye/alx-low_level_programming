#include "main.h"

/**
 * _memset - fills a memory block with a constant byte
 * @s: pointed destination
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: Always 0 (Succes)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
