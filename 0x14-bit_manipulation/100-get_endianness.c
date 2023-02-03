#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - endianness
 * Description: function that checks the endianness.
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char*) &e;

	return ((int)*c);
}
