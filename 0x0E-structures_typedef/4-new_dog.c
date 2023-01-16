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
	char *n;
	char *o;
	char *na = name;
	char *ow = owner;
	int s;

	s = 0;
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	while (*na != '0')
	{
		s++;
		na++;
	}
	n = malloc(s * sizeof(char));
	if (n == NULL)
		return (NULL);
	n = name;
	s = 0;
	while (*ow != '\0')
	{
		s++;
		ow++;
	}
	o = malloc(s * sizeof(char));
	if (o == NULL)
		return (NULL);
	o = owner;
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
