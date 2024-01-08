#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character tpo look for
 * Return: NULL if character not found and or pointer to first character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
