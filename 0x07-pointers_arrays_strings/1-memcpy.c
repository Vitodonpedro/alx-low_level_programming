#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: A pointer that stores copies n bytes from memory area src
 * @src: The source of the copy
 * @n: The number og bytes to copy fro, src
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);

}
