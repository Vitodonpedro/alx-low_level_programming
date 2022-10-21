#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @n: size of the triangle
 */

void print_triangle(int n)
{
	int v, tri;

	if (n > 0)
	{
		for (v = 1; v <= n; v++)
		{
			for (tri = n - v; tri > 0; tri--)
				_putchar(' ');

			for (tri = 0; tri < v; tri++)
				_putchar('#');

			if (v == n)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
