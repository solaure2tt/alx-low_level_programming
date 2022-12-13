#include "main.h"

/**
 * _isalpha - alphabetic chararcter
 * Description: function that checks for alphabetic character
 * @c: character in the entry
 * return: 1  if c is a letter, lowercase or uppercase
 * 0 otherwise
 */
int _isalpha(int c)
{
	int res = 0;

	if ((c >= 97) && (c <= 122))
		res = 1;
	if ((c >= 65) && (c <= 90))
		res =1;
	if ((c >= 'a') && (c <= 'z'))
		res = 1;
	if ((c >= 'A') && (c <= 'Z'))
		res = 1;
	return (res)
}
