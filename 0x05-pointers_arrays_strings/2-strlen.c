#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: parameter of type pointer of string
 * Return: int (lenght of string)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len = len + 1;
	}

	return (len);
}
