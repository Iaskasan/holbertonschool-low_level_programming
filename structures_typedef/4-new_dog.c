#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

char *_strcpy(char *dest, char *src);

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge = malloc(sizeof(dog_t));

	if (doge == NULL)
	{
		return (NULL);
	}
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doge->name = malloc(_strlen(name) + 1);
	doge->owner = malloc(_strlen(owner) + 1);

	if (doge->name == NULL || doge->owner == NULL)
	{
		free(doge->name);
		free(doge->owner);
		free(doge);
		return (NULL);
	}

	doge->name = _strcpy(doge->name, name);
	doge->age = age;
	doge->owner = _strcpy(doge->owner, owner);
	return (doge);
}

/**
 * _strcpy - copy a string
 * @dest: the destination of the string
 * @src: the source of the string
 * Return: Returns the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - the function to return the lenght of a string
 * Return: Returns the lenght of a string
 * @s: a char
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
