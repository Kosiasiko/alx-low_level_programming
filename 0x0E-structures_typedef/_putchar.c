#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 *
 * Return: On Sucess 1. 
 * on error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
