#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string with n
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}
