#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer in question
 * Return: the abs of the int.
 */

int _abs(int n);
{
	if (n >= 0)
		n = -n;
	return (-n);
}
