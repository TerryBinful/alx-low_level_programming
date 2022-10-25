#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line, to stdout
 * @str: parameter of type pointer
 * Return: none
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
