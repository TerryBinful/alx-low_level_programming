#include "main.h"

/**
* print_to_98 - prints numbers to 98
* @n : n is an integer
*
* Description: prints numbers to a stop number,
* replace variable stop to preference
*
* Return: void
*/

void print_to_98(int n)
{
	int start = n;
	int stop = 98;

	while (start != stop)
	{
		if (start > stop)
		{
			printf("%d, ", start);
			start--;
		}
		else
		{
			printf("%d, ", start);
			start++;
		}
	}

	printf("%d\n ", stop);
}
