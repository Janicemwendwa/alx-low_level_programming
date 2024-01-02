#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: argument
 * @b: argument
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int new = *a;
	*a = *b;
	*b = new;
}
