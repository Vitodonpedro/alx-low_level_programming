#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

}
