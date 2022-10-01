#include "main.h"

/**
 * _isdigit - check if character is a digit
 *
 * @c: character to be checked
 *
 * Return: 1 if it is a digit otherwise 0
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
