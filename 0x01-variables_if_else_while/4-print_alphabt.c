#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/

int main(void)

{

	char ch, x, y;

	x = 'x';

	y = 'y';

	for (ch = 'a'; ch <= 'z'; ch++)

	{

		if (ch != x && ch != y)

			putchar(ch);

	}

	printf("\n");

	return (0);

}
