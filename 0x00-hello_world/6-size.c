#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the size of various type
 * Description: This program print the size of various type on 32 or 64 bits
 * Return: 0
 */

int main(void)
{
	char c;
	int a;
	long la;
	long long ll;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d bytes(s)\n", sizeof(la));
	printf("Size of a long long int: %d byte(s)\n", sizeof(ll));
	printf("Size of a float: %d bytes(s)\n", sizeof(f));
	return (0);
}
