#include "main.h"

/**
 * print_rev - function that print the reverse of a  given string
 *
 * @s: parameter holding string value
 */

void print_rev(char *s)
{
int len = 0;

int index;

while (s[index++])
	len++;

for (index = len - 1; index >= 0; index--)
	_putchar(s[index]);

_putchar('\n');
}
