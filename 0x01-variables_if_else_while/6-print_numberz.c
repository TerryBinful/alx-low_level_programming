#include <stdio.h>

/**
* main - prints all single digit numbers of base 10
* starting from 0, followed by a new line.
* Return: 0 if function exits
*/

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
