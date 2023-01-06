#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * change - number of cents
 * Description: verify if it is a number
 * @coins: paremeter 1
 * @size: parameter 2
 * @money: parameter 3
 * Return: 1 or 0
 */
int change(int coins[], int size, int money)
{
	int i, res = 0;

	if (money == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		while (money >= coins[i])
		{
			money = money - coins[i];
			res = res + 1;
		}
	}
	return (res);
}
/**
 * main - entry
 * Description: program that prints its name, followed by a new line
 * @argc: prameter 1
 * @argv: parameter 2
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int size = 5;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("%d\n", change(coins, size, atoi(argv[1])));
		return (0);
	}
}
