#include <unistd.h>

/**
 * _putchar - writes the charater
 * @c: to print character
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
