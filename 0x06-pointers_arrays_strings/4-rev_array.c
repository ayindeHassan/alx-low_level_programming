#include "main.h"

/**
 * reverse_array - function that reverses the content of an array integer
 * @a: array to be reversed
 * @n: numbers of content in an array
 */

void print_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
