#include "main.h"

/**
 * _sqrt_recursion - Write a function that returns
 * the natural square root of a number
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_sqrt_recursion(i + 1, n));

	else if (i * i == n)
		return (i);

	return (-1);
	return (-1);
}
