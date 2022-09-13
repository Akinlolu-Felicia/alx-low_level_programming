#include "main.h"

/**
 * _isalpha - checks whether or not a character is lowercase
 * @c: integer representing ascii value of character
 * Return: 1 if it is lowercase or 0 otherwise
 */

int _isalpha(int c)
{
	if (c <= 'z' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
