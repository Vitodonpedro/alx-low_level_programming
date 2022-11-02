#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals of a s
 * quare matrix of integers
 * @a: input
 * @size: input
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i, n, full1 = 0, full2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		full1 = full1 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		full2 = full2 + a[n];
	printf("%d, %d\n", full1, full2);
}
