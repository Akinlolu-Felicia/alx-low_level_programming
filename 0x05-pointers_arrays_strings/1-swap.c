#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: interger whose value we want to swap
 *
 * @b: second integer we want to swap
 *
 * Return - void
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
