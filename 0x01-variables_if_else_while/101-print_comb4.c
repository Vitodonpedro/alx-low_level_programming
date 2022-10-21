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

	while (n <= 58)
	{
		m = n + 1;
		while (m <= 58)
		{
			l = m + 1;
			while (l <= 58)
			{
				putchar(n);
				putchar(m);
				putchar(l);
				if (n == 55 || m == 56 || l == 57)
				{
					putchar(com);
					putchar(32);
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
