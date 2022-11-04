#include "main.h"

/**
 * len - prints string length
 * @s: string
 * Return: 1  or 0
 */

int len(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + len(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * evaluator - helps more
 * @i: integer
 * @s: string
 * Return: int value
 */

int evaluator(int i, char *s)
{
	if (*s)
	{
		if (*s != s[len(s) - i])
		{
			return (0);
		}
		else
		{
			return (evaluator(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - is it paldindrome
 * @s: string to be checked
 * Return: 1
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (evaluator(i, s));
}
