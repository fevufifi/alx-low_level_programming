#include <unistd.h>

/**
 * _putchar - writses the character c to stdout
 * @c: The character to print
 * Return: on succes 1.
 * On eroor, -1 is retuned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
