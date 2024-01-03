#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: argument
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, j, k;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i;
	for (j = k - i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

