#include "main.h"

/**
 * _isupper - checks if character is in uppercase
 *
 * check for uppercase letter
 *
 * Return: 1 if it is a uppercase character otherwise return 0
 *
 * @c: character to be checked
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
