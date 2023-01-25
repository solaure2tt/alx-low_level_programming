#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - prints parameters
 * Description:  function that prints anything.
 * @format: parameter 1
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char * const f = format;
	char c;
	int i, ignore;
	char *s;

		i = 0;
		va_start(args, format);
		while ((format != NULL) && (f[i] != '\0'))
		{
			c = f[i];
			switch (c)
			{
				case 'c':
					printf("%c", (char)va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", (float)va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char*);
					printf("%s", s);
					break;
				default:
					ignore = 1;
			}
			i++;
			if (f[i] != '\0' && ignore != 1)
				printf(", ");
			ignore = 0;
		}
		va_end(args);
		printf("\n");
}
