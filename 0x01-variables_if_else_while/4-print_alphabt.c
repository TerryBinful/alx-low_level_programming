#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* except q and e
* floowed by a new line
* Return: 0 if function exits
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}
	putchar('\n');

	return (0);
}
