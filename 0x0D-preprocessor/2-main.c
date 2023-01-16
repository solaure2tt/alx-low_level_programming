#include <stdio.h>
#include "main.h"
/**
 * main - entry
 * Description: program that prints the name of the file it was compiled from
 * Return: 0 success 1 no success
 */
int main()
{
	char *file = __FILE__;

	while (*file != '\0')
	{
		_putchar(*(file));
		file++;
	}
	_putchar('\n');
	return (0);
}
