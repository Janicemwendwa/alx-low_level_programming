#include "main.h"
/**
 * int _abs - computes the absolute value of an integer
 * Return: absolut value of number or 0
 * @c: number being computed
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;
	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
