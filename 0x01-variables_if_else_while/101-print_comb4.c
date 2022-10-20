#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */

int main(void)
{
	int n, m, l;

	for (n = 0; n <= 8; n++)
	{
		for (m = 0; m <= 8; m++)
		{
			for (l = 0; l <= 8; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n == 5 && m == 6 && l == 7)
					{
						break;
					}
					else
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


