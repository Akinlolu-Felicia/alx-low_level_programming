#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: string whose length to be returned
 *
 * Return: int
 *
 */

int _strlen(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
