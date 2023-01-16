#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - initialize dog
 * Description: function that creates a new dog
 * @name: parameter 1
 * @age: parameter 2
 * @owner: parameter 3
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
