#include <stdio.h>
/* main - Entry point
 * return always 0 (success)
 * prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 */
int main (void)
{	char c;
	c = 'a';
	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	char c;
        c = 'A';
        while (c <= 'Z')
        {
                putchar (c);
                c++;
        }
	putchar ('\n');
	return (0);
}
