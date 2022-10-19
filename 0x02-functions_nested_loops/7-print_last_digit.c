#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
		n = -n;

	_putchar(x + '0');

	return (x);
}
