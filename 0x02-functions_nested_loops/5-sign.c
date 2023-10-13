#include "main.h"

/**
* print_sign - prints sign of a number
* @n : n is an integer
*
* Description: checks for number sign and returns sign
*
* Return: 1(if positive), 0 (if zero), -1 (if negative)
*/

int print_sign(int n)
{
	char s = '0';
	int r = 0;

	if (n > 0)
	{
		s = '+';
		r = 1;
	}
	else if (n < 0)
	{
		s = '-';
		r = -1;
	}
	else
	{
		s = '0';
		r = 0;
	}

	_putchar(s);

	return (r);	
}
