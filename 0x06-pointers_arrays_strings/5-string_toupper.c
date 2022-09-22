#include "main.h"

/**
 * string_toupper - This function changes all lowercase
 * @n: string to be modified
 *
 * Return: 0
 */

char *string_toupper(char *n)
{
	int x;

	for (x = 0; n[x] != '\0'; x++)
	{
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 32;
	}
	return (n);
}
