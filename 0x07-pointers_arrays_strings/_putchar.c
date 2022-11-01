#include "main.h"
#include <unistd.h>



/**
 * _putchar - write the character c to stdout
 * @c: char to be printed
 * Return: 1 on success
 * on error, -1 is returned, and errno is set appropriately
 */



int _putchar(char c)

{
	return (wrte(1, &c, 1));

}
