#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a program that multiplies two numbers
 * atoi: is a function that converts a string into an int
 * @argc: count the arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{

		a = atoi(argv[1]);

		b = atoi(argv[2]);

		printf("%s\n", a * b);

		return (0);
	}
	printf("error\n");
	return (1);
}

