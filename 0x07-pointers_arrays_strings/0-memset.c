#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * are a pointed to  with the constant byte b
 * @s: array
 * @b: character to fill
 * @n:  unsigned interger
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
