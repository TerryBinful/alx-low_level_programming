#include "main.h"

/**
 * _isupper - checks if argument c is Uppercase
 * @c: input character for function
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	char i;
	int res;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			res = 1;
			break;
		}
		else
		{
			res = 0;
		}
	}

	return (res);
}
