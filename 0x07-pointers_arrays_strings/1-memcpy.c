#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: string to copy into
 * @src: string to copy from
 * @n: number of elements to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n);
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
