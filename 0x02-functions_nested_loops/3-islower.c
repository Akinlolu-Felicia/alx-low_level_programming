#include "main.h"
/**
 * _islower - check if character is an alphabet
 *
 * @c: interger representing ascii value character
 *
 * Return: 1 if it lowercase else 0
 *
 */

int _islower(int c)
{
	if (c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
