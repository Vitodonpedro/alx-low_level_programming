#include "main.h"

/**
 * _strspn -a function that gets the length of a prefix substring.
 * @s: the string to be found
 * @accept: prefix to be measured
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, bytes, check;

	bytes = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				bytes++;
				check = 1;
			}
		}
		if (check == 0)
			return (bytes);
	}
	return (bytes);
}
