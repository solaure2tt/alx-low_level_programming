#include <stdio.h>

/**
 * main - entry
 * Description: program that prints its name, followed by a new line
 * @argc: prameter 1
 * @argv: parameter 2
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
