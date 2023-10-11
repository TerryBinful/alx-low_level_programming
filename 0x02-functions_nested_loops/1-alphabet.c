#include "main.h"

/**
* print_alphabet - print the alphabets
*
* Description: print alphabets
*
* Return: void
*/

void print_alphabet(void)
{
	char startLetter = 'a';
	char letter = startLetter;

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

_putchar('\n');
}
