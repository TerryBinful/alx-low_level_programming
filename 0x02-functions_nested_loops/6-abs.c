#include "main.h"

/**
* _abs - computes the absolute value of any value
* @n : n is an integer
*
* Description: computes the abs value and returns the value
*
* Return: integer (absolute value)
*/

int _abs(int n)
{
	int r = 0;

	if (n < 0)
	{
		r = n * -1;
	}
	else
	{
		r = n;
	}


	return (r);
}
