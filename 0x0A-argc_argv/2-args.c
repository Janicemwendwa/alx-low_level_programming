#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @arvc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
