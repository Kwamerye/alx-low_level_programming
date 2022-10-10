#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Function that creates a new dog
 * get len of name + owner, malloc them, cpy name + owner to new
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Poppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	Poppy = malloc(sizeof(dog_t));
	if (Poppy == NULL)
		return (NULL);

	Poppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (Poppy->name == NULL)
	{
		free(Poppy);
		return (NULL);
	}

	Poppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (Poppy->owner == NULL)
	{
		free(Poppy->name);
		free(Poppy);
		return (NULL);
	}

	Poppy->name = _strcopy(Poppy->name, name);
	Poppy->age = age;
	Poppy->owner = _strcopy(Poppy->owner, owner);

	return (Poppy);
}
