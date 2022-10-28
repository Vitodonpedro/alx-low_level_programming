#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int e;
	int f;

	for (e = 0; e < n; e++)
	{
		n--;
		f = a[e];
		a[e] = a[n];
		a[n] = f;
	}
}
