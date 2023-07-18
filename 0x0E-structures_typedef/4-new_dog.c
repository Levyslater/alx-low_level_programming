#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copies string from source
 * @src: string to copy
 * @dest: base address od copied string
 *
 * Return: Base address of destination
 */

char *_strcpy(char *dest, char *src)
{
	int count, i;

count = 0;

	while (src[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: pointer if success, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = strlen(name);
		len2 = strlen(owner);

		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{

free(dog);
free(dog->name);
return (NULL);
}

_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}

