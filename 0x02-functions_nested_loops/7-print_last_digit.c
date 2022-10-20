#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Prototype: int print_last_digit(int)
 * @n: n is an integer
 * Return: int last
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
