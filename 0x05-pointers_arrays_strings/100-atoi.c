#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be looked up
 * Return: int
 */

int _atoi(char *s)
{
	 unsigned int i = 0, size = 0, j = 0;
	 unsigned int neg = 1, dec = 1;
	 unsigned int res = 0, _int = 0;

	while (*(s + i) != '\0')
	{
		if (size > 0 && (*(s + i) < '0' || *(s + i) > '9'))
		{
			break;
		}

		if (*(s + i) == '-')
		{
			neg *= -1;
		}

		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			if (size > 0)
			{
				dec *= 10;
			}

			size++;
		}

		i++;

	}

	for (j = i - size; j < i; j++)
	{
		res = res + ((*(s + j) - 48) * dec);
		dec /= 10;
	}

	_int = res * neg;

	return (_int);
}

