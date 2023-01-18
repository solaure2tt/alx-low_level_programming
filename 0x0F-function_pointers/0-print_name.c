#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - print a name
 * Description: function that prints a name
 * @name: parameter 1
 * @f: parameter 2
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
