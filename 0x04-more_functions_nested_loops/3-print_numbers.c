#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)
		_putchar(b + '0');
	_putchar('\n');
}
