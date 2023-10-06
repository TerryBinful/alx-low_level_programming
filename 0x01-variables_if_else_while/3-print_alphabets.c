#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* and in UPPPERCASE
* followed by a new line
* Return: 0 if function exits
*/

int main(void)
{
	char alpha, bet;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (bet = 'A'; bet <= 'Z'; bet++)
	{
		putchar(bet);
	}

	putchar('\n');

	return (0);
}
