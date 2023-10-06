#include <stdio.h>

/**
* main - prints combinations of two different digits
* followed by a new line
* Return: 0 if function exits
*/

int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			
				putchar(n);
				putchar(m);
				if (n == 57 && m == 57)
				{

					break;
				}
				putchar(',');
				putchar(' ');
			
		}
	}

	putchar('\n');

	return (0);
}
