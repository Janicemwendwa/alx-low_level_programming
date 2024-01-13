#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _memcpy - function
 * @dest: argu
 * @src: argu
 * @n: argu
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
