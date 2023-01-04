#include "main.h"
/**
 * cmp1 - compare 1
 * Description: compare with *
 * @s1: parameter 1
 * @s2: parameter 2
 * @i: parameter 3
 * @j: parameter 4
 * Return: number
 */
int cmp1(char *s1, char *s2, int i, int j)
{
	if ((s1[i + 1] == '\0') && (s2[j] != '\0'))
		return (0);
	if ((s1[i + 1] != '\0') && (s2[j] == '\0'))
		return (0);
	if ((s1[i + 1] == '\0') && (s2[j] == '\0'))
		return (1);
	if (s1[i + 1] == s2[j])
		return (cmp(s1, s2, i + 1, j));
	return (cmp1(s1, s2, i, j + 1));
}
/**
 * cmp2 - compare 1
 * Description: compare with *
 * @s1: parameter 1
 * @s2: parameter 2
 * @i: parameter 3
 * @j: parameter 4
 * Return: number
 */
int cmp2(char *s1, char *s2, int i, int j)
{
	if ((s1[i] == '\0') && (s2[j + 1] != '\0'))
		return (0);
	if ((s1[i] != '\0') && (s2[j + 1] == '\0'))
		return (0);
	if ((s1[i] == '\0') && (s2[j + 1] == '\0'))
		return (1);
	if (s1[i] == s2[j + 1])
		return (cmp(s1, s2, i + 1, j + 1));
	return (cmp2(s1, s2, i, j + 1));
}
/**
 * cmp - compare 1
 * Description: compare with *
 * @s1: parameter 1
 * @s2: parameter 2
 * @i: parameter 3
 * @j: parameter 4
 * Return: number
 */
int cmp(char *s1, char *s2, int i, int j)
{
	if ((s1[i] == '\0') && (s2[j] == '\0'))
		return (1);
	if (s1[i] == s2[j])
		return (cmp(s1, s2, i + 1, j + 1));
	if (s1[i] == '*')
		return (cmp1(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (cmp2(s1, s2, i + 1, j));
	return (0);
}

/**
 * wildcmp - compare two strings
 * Description: compares two strings and returns 1 if the strings can be c
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	return (cmp(s1, s2, i, j));
}
