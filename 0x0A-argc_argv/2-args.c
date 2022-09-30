#include "main.h"
#include <stdio.h>

/**
 * main - Prints all th arguements it receives.
 * @argc: The number of arguements supplied to the program.
 * @srgv: An array of pointers to the arguemnets.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
