#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a new line
 * print_alphabet - print alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
