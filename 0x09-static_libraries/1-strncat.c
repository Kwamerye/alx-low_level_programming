#include "main.h"
#include <stdio.h>

/**
 * _strncat - This function also concatenate two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of maximum bytes to be used
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, co;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[a + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}

	return (dest);
}
