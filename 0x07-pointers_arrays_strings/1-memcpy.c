#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: souce memory area
 * @n:  unsigned interger
 * Return: pointer to memory s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
