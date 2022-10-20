#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m, l;

	for (n = 18; n < 28; n++)
	{
		for (m = 19; m < 28; m++)
		{
			for (l = 20; l < 28; l++)
			{
				if (l > m && m > n)
				{
					_putchar(n);
					_putchar(m);
					_putchar(l);
					if (n != 25 || m != 26)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
	}
	_putchar('\n');

	return (0);
}


