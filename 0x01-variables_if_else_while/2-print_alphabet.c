#include <stdio.h>
/**
 *	 main - main block
 *
 *	Return: 0
 *
 *	prints alphabets in lowercase
 */
int main(void)
{	char c;
	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
