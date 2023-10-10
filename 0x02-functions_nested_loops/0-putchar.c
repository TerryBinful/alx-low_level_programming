#include "main.h"

/**
* main - program that prints _putchar
*
* Description: print _putchar
*
* Return: 0 if function exits
*/

int main(void)
{
	char mytext[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(mytext[i]);
	}
	_putchar('\n');

	return (0);
}
