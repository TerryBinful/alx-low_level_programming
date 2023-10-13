#include "main.h"

/**
* print_last_digit - print last digit of any value
* @n : n is an integer
*
* Description: trims value and return last digit of value
*
* Return: integer (last digit)
*/

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
