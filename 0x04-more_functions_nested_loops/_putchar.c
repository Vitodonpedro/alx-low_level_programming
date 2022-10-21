#include "main.h"

/**
 * _putchar - writes the charater c to the stdout
 * @c: the character to print
 * Return: on success 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
