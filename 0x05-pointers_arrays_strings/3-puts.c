#include "main.h"

/**
 * print_rev - function that print the reverse of the original string
 * @s: string parameter
 */

void print_rev(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
