#include "main.h"
#include <stdio.h>

/**
 * _strncpy - This function copies a string
 * @dest: copy to
 * @src: copy from
 * @n: input char
 *
 * Return: Always 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		if (a < n)
			dest[a] = src[a];
		while (a < n)
			dest[a++] = '\0';

	return (dest);
}
