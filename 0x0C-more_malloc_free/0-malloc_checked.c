#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * malloc_checked - entry
 * Description: function that allocates memory using malloc
 * @b: parameter 1
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *res = malloc(b);

	if (res  ==  NULL)
		exit(98);
	return (res);
}
