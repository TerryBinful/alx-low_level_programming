#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line, to stdout
 * @s: parameter of type pointer
 * Return: none
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
