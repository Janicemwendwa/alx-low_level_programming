#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 1 for lower case and 0 for anything else
 * @c: character being checked
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

