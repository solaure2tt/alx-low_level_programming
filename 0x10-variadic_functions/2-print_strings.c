#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_strings - prints parameters
 * Description:  function that prints strings, followed by a new line
 * @separator: parameter 1
 * @n: parameter 2
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (n >= 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(args, char*);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
			if (((i + 1) < n) && (separator != NULL))
				printf("%s", separator);

		}
		va_end(args);
		printf("\n");
	}
}
