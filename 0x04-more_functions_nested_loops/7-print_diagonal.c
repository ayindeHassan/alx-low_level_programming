#include "main.h"

/**
 * print_diagonal - function that print a diagonal line
 * @n: fuunction value
 * Return: void
 */

void print_diagonal(int n)
{
if (n <= 0)
	_putchar('\n');
else
{
int i = 0;

	while (i < n)
	{
		_putchar('\\');
		i++;
	}
	_putchar('\n');
}
}
