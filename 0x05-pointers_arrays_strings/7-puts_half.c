#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line,
 * @str: string
 * Return: none
 */

void  puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	j = i / 2;

	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}
