#include "main.h"

/**
 * _isalpha - checks if alphabet
 * @c: c in a charachter
 *
 * Description: checks alphabet and returns 1,0
 *
 * Return: 1 if alphabet
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		if (c <= 'Z' || c >= 'a')
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
