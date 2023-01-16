#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Description: program that prints the name of the file it was compiled from
 * Return: 0 success 1 no success
 */
int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
