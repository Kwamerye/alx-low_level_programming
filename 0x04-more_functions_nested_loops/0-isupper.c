#include "main.h"

/**
*_isupper - checks if a characteris uppercase
*@x: The character to be checked
*
*Return: 1 for uppercase or 0 anything else
*/

int _isupper(int x)
{
	if ((x >= 'A') && (x <= 'Z'))
	{
		return (1);
	}

	return (0);
}
