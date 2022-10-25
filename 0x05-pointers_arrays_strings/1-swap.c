#include "main.h"

/**
 * swap_int - waps the values of two integers
 * @a: parameter of type pointer
 * @b: parameter of type pointer
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int m;
	int m = *a;
	*a = *b;
	*b = m;
}
