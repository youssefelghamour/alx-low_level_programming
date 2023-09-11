#include "dog.h"

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
	int name_len = 0, owner_len = 0, i, j;
	dog_t *d;

	d = malloc(sizeof(*dog_t));

	if (d == NULL || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}

	while (name[name_len])
		name_len++;

	while (owner[owner_len])
		owner_len++;

	d->name = malloc(sizeof(char) * (name_len + 1));
	d->owner = malloc(sizeof(char) * (owner_len + 1));

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	for (j = 0; j < owner_len; j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';

	d->age = age;

	return (d);
}
