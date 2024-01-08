#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 * Return: on success 1
 * On error, -1 is returned, and errno is set  automatically
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
