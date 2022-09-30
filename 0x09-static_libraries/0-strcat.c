#include "main.h"
#include <stdio.h>

/**
 * _strcat - This function concatenates two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: two concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; (dest[a + b] = *src++) != '\0'; b++)
	{
	}

	return (dest);
}
