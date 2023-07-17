#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to struct
 * @name: name to initialize
 * @age: age
 * @owner: owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d  == NULL)
	return (NULL);
d->name = name;
d->owner = owner;
d->age = age;
}
