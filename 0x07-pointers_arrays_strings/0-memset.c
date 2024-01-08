#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes in memory to fill
 * Return: pointer to memory address of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return(s);
}
