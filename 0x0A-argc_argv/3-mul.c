#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the ultiples of two numbers.
 * @argc: The number of arguements supplied to the program.
 * @argv: An array of pointers to the arguements.
 * atoi is a function that converts a string into an int.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
