#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		if ((b == 2) || (b == 4))
			continue;
		else
			_putchar(b + '0');
	}
	_putchar('\n');
}
