#include "main.h"

/**
* print_alphabet_x10 - print alphabets
*
* Description: prints lowercase alpabets 10x
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int loop;
	char letter;
	char startLetter = 'a';

	loop = 0;

	while (loop < 10)
	{
		letter = startLetter;

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		loop++;
	}
}
