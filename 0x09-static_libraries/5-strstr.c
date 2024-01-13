#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - a function
 * @haystack: argument
 * @needle: argument
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
