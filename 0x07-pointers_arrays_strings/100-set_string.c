#include "main.h"

/**
 * set_string - entry
 * Description: function that sets the value of a pointer to a char
 * @s: parameter 1
 * @to: parameter 2
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	char **p = s;
	char *t = to;

	(*p) = t++;
}
