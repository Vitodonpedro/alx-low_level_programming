#include <unstd.h>

/**
 * _putchar - c to stout
 * @c: print character
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
