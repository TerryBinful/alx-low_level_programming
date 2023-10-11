#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: c in a charachter
 *
 * Description: checks case and returns 1,0
 *
 * Return: 1 if lowercase character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
