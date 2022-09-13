#include "main.h"

/**
 * _islower - check if letter is lowercase or not
 * @c: Letter to check case of argument
 *
 * Return: Return 1 and 0 depending on condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
