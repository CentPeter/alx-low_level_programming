#include "main.h"

/**
 * _isalpha - Check to see if input is a letter
 * @c: Input to check if its a letter
 *
 * Return: Return 1 or 0 depending on condition
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
