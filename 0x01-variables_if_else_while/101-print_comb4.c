#include <stdio.h>

/**
* main - prints combinations of three different digits
* followed by a new line
* Return: 0 if function exits
*/

int main(void)
{
	int n, m, a;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			for (a = 50; a <= 57; a++)
			{
				if (a > m && n < m)
				{
					putchar(n);
					putchar(m);
					putchar(a);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
