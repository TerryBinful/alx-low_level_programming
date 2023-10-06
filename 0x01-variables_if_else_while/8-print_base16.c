#include <stdio.h>

/**
* main - prints all the numbers of base 16
* in lowercase, followed by a new line
* Return: 0 if function exits
*/

int main(void)
{
	char hexa, dec;

	for (dec = 48; dec <= 57; dec++)
	{
		putchar(dec);
	}

	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}

	putchar('\n');

	return (0);
}
