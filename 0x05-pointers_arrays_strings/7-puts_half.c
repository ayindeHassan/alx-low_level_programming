#include "main.h"

/**
 * puts_half - function that print the other half of a string
 * @str: variable container
 */

void puts_half(char *str)
{
int counter = 0;

int pos;

while (str[counter] != '\0')
{
	counter++;
}
pos = counter / 2;
while (str[pos] != '\0')
{
	_putchar(str[pos]);
	pos++;
}
_putchar('\n');
}
