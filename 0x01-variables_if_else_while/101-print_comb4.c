#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */

int main(void)
{
	int n = 48;
	int m, l;
	int com = 44;

	while (n <= 57)
	{
		m = n + 1;
		while (m <= 57)
		{
			l = m + 1;
			while (l <= 57)
			{
				putchar(n);
				putchar(m);
				putchar(l);
				if (n != 55 || m != 56 || l != 57)
				{
					putchar(',');
					putchar(' ');
				}
				l += 1;
			}
			m += 1;
		}
		n += 1;
	}
	putchar('\n');

	return (0);
}
