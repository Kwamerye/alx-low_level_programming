#include "main.h"

/**
 * _islower - function checks for lowercase characters
 * @c: is the int that wilbe used for the arguement of the function
 * Return: 0
 */

int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
