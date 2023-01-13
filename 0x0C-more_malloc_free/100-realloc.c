#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _realloc - realloc with malloc
 * Description: function that  reallocates a memory block using malloc and free
 * @ptr: parameter 1
 * @old_size: parameter 2
 * @new_size: parameter 3
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	res = malloc(new_size);
	if (res == NULL)
		return (NULL);
	free(ptr);
	return (res);
}
