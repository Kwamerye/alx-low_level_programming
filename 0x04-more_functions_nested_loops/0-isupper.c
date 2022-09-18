#include "main.h"

/**
*_isupper - checks if a characteris uppercase
*@x: The character to be checked
*
*Return: 1 if x is uppercase, 0 otherwise
*/

int _isupper(int x)
{
	if ((x >= 'A') && (x <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
