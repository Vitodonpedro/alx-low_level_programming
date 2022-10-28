#include "main.h"
#include <stdio.h>

/**
 * leet - Write a function that encodes a string into 1337
 * @n: input
 * Return: the value of n
 */

char *leet(char *n)
{
	int o, p;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (o = 0; n[o] != '\0'; o++)
	{
		for (p = 0; p < 10; p++)
		{
			if (n[o] == s1[p])
			{
				n[o] = s2[p];
			}
		}
	}
	return (n);
}
