#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* in reverse, followed by a new line
* Return: 0 if function exits
*/

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
