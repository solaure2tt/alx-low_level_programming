#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog
 * Description: function that initialize a variable of type struct dog
 * @d: parameter 1
 * @name: parameter 2
 * @age: parameter 3
 * @owner: parameter 4
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
