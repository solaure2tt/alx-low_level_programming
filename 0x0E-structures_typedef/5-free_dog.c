#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dog
 * Description: function that frees dogs.
 * @d: parameter 1
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
