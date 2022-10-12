#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function prints a name
 * @name: The name to be printed.
 * @f: A pointer to the function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
