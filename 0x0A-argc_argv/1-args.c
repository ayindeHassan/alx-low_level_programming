#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 1)
	{
		int i = 0;

		for (i = 1; i < argc; i++)
		{
			sum++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
