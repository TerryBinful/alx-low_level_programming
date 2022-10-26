#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * where n is the number of elements of the array to be printed
 * numbers must be separated by comma and a space
 * followed by a new line,
 * @a: array to be used
 * @n: integer (number of elements to be printed)
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	_putchar('\n');
}
