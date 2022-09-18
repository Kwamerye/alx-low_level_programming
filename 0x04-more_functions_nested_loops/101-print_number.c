#include <stdio.h>
#include "main.h"

/**
* print_number - Prints an integer.
* @n: The integer to print.
*
* Return: Nothing!
*/

void print_number(int n)
{
	unsigned int b = n;

	if (n < 0)
	{
		n *= -1;
		b = n;
		_putchar('-');
	}

	b /= 10;

	if (k != 0)
		print_number(k);

	_putchar((unsigned int) n % 10 + '0');

}
