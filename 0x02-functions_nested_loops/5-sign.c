#include "main.h"

/**
 * print_sign - find if input is pos, neg, or 0
 * @n: argument passed
 *
 * Return: return 1 0 -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
