#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: parametre in function
 * followed by a new line
 * Return: none
 */

void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
