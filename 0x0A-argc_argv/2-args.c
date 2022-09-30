#include "main.h"
#include <stdio.h>

/**
 * main - Prints all th arguements it receives.
 * @argc: The number of arguements supplied to the program.
 * @argv: An array of pointers to the arguemnets.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
