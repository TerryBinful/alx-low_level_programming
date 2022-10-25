#include "main.h"

/**
 * rev_string - reverses a string,
 * followed by a new line
 * @s: parameter of type pointer
 * Return: none
 */

void rev_string(char *s)
{
	int i, m, h;
	char first, last, temp;

	i = 0;
	m = 0;
	h = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	h = i / 2;

	while (h >= 0)
	{
		last = s[i];
		first = s[m];
		temp = last;
		s[i]  = first;
		s[m] = temp;

		i--;
		m++;
		h--;
	}
}
