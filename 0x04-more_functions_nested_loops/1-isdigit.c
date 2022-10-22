#include "main.h"

/**
 * _isdigit - checks if argument c is digit
 * @c: input character for function
 * Return: 1 if c is digit, 0 if otherwise
 */

int _isdigit(int c)
{
	char i;
	int res;

	for (i = 0; i <= 9; i++)
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
