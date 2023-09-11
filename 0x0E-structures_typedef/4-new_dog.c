#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 *
 * Return: struct dog, returns NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, lname, lowner;

	d = malloc(sizeof(*d));
	if (d == NULL || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	d->name = malloc(lname + 1);
	d->owner = malloc(lowner + 1);

	if (!(d->name) || !(d->owner))
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	d->age = age;

	for (i = 0; i < lowner; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	return (d);
}
