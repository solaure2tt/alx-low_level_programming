#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_numbers - prints parameters
 * Description:  function that prints numbers, followed by a new line
 * @separator: parameter 1
 * @n: parameter 2
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	if (n >= 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (((i + 1) < n) && (separator != NULL))
				printf("%s", separator);

		}
		va_end(args);
		printf("\n");
	}
}
