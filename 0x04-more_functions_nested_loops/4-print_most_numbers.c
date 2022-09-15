#include "main.h"
/**
 * print_most_numbers - prints integers from 0 - 9 except 2 and 4
 *
 * Return: void
 *
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; (c >= 48 && c <= 57 && (c != 2 || c != 4)); c++)
	{
		_putchar(c);
	}

	_putchar(10);
}
