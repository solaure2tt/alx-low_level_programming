#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.On error, -1 is returned, and errno is set appropriatel
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - entry
 * Description: program that prints the name of the file it was compiled from
 * Return: 0 success 1 no success
 */
int main(void)
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
