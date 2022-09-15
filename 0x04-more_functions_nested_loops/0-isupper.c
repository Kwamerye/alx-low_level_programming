#include "main.h"

/**
*_isupper - checks if a characteris uppercase
*@x: The character to be checked
*
*Return: 1 for uppercase or 0 anything else
*/

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
