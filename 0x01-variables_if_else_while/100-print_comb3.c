#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 * Return: returns 0
 */
int main(void)
{
	int d, p;

	for (d = '0'; d <= '9'; d++)
	{
	for (p = d + 1; p <= '9'; d++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (d == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
