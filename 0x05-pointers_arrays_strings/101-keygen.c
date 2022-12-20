#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomPassword - random passwor generate
 * Description: generate a randon password
 * @n: parameter 1
 * Return: nothing
 */
void randomPassword(int n)
{
	int i = 0;
	int test = 0;
	char letters[] = "abcdefghijklmnpqrstuvwxyz";
	char lettersUpper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char numbers[] = "0123456789";
	char symb[] = "!@#$^&*?";
	char pwd[100];

	srand((unsigned int)(time(NULL)));
	test = rand() % 4;
	for (i = 0; i < n; i++)
	{
		if (test == 0)
		{
			pwd[i] = numbers[rand() % 10];
			test = rand() % 4;
			printf("%c", pwd[i]);
		}
		else if (test == 1)
		{
			pwd[i] = symb[rand() % 8];
			test = rand() % 4;
			printf("%c", pwd[i]);
		}
		else if (test == 2)
		{
			pwd[i] = lettersUpper[rand() % 26];
			test = rand() % 4;
			printf("%c", pwd[i]);
		}
		else
		{
			pwd[i] = letters[rand() % 26];
			test = rand() % 4;
			printf("%c", pwd[i]);
		}
	}
}

/**
 * main - entry
 * Description: random password
 * Return: 0 success
 */
int main()
{
	int n = 15;

	randomPassword(n);
	return (0);
}
