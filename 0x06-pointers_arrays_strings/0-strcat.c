#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int o;
	int p;

	o = 0;
	while (dest[0] != '\0')
	{
		o++;
	}
	p = 0;
	while (src[p] != '\0')
	{
		dest[o] = src[p];
		o++;
		p++;
	}
	dest[o] = '\0';
	return (dest);
}
