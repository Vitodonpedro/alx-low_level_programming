#include <stdio.h>
#include <stdlid.h>
#include <time.h>
/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)

		putchar(x);

	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
