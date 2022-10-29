#include "main.h"

/**
 * print_number - Write a function that prints any integer with putchar
 * @n: Number to prints
 * Return: Nothing
 */


void print_number(int n)
{
	unsigned int v;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	v = n;
	if (v / 10)
		print_number(v / 10);

	_putchar(v % 10 + '0');
}
