#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */

int main(void)
{
	int n, m, l;

	while (n = 18; n < 28; n++)
	{
		while (m = 19; m < 28; m++)
		{
			while (l = 20; l < 28; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 25 || m != 26 || l != 27)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}


