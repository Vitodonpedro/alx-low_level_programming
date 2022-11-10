#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints all arguments it receives
 * @argc: count the arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
