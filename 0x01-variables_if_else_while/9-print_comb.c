#include <stdio.h>

/**
* main - prints all possible single-digit combinations
* followed by a new line
* Return: 0 if function exits
*/

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
