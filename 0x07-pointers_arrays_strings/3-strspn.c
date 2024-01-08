#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string to check bytes with
 * Return: number of bytes n the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i;
	int c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}



