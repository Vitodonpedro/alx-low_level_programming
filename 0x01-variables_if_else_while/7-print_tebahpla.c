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

	char fly;

	for (fly = 'z'; fly >= 'a'; fly--)

		putchar(fly);

	putchar('\n');

	return (0);

}
