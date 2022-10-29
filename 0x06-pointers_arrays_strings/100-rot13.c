#include "main.h"

/**
 * rot13 - Write a function that encodes a string using rot13
 * @s: string to encode
 * Return: address of s
 */

char *rot13(char *s)
{
	int o, p;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (o = 0; *(s + o); o++)
	{
		for (p = 0; p < 52; p++)
		{
			if (a[p] == *(s + o))
			{
				*(s + o) = b[p];
				break;
			}
		}
	}
	return (s);
}
