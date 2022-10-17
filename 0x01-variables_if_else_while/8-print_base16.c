#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** main - Entry point
 **
 ** Return: Always 0
 **/

int main(void)

{

	int d;

	char up;

	for (d = '0'; d <= '9'; d++)

		putchar(d);

	for (up = 'a'; up <= 'f'; up++)

		putchar(up);

	putchar('\n');

	return (0);

}
