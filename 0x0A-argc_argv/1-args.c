#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: count the arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%s\n", argc - 1);

	return (0);
}
