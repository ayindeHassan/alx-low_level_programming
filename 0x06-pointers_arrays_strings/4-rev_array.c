#include "main.h"

/**
 * reverse_array - function that reverses the content of an array integer
 * @a: array to be reversed
 * @n: numbers of content in an array
 */

void print_array(int *a, int n)
{
	int tmp;
	int i;
	int d;

	d = n - 1;
	i = 0;

	while (i < d)
	{
		temp = a[i];
		a[i] = a[d];
		a[d] = temp;
		i++;
		d--;
	}
}
