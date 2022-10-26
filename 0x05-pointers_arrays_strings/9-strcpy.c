#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src
 * to the buffer pointed to by dest
 * including the terminating null byte (\0)
 * followed by a new line,
 * @src: source pointer
 * @dest: dstination pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
