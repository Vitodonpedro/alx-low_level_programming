#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: count the arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
