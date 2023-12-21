#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @n: character being checked
 * Return: 1 for uppercase and 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
