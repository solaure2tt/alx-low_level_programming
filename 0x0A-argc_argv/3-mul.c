#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Description: program that prints its name, followed by a new line
 * @argc: prameter 1
 * @argv: parameter 2
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	return (0);
}
