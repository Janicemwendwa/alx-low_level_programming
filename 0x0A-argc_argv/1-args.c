#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of pointers to argument
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
