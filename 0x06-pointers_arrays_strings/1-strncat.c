#include "main.h"

/**
 * _strncat - function that concatenate using byte  number
 * @dest: destination string
 * @src: source string
 * @n: number
 * Return: A pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
