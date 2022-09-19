#include <stdio.h>
#include "main.h"

/**
 * puts2 - function should print every other character
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
