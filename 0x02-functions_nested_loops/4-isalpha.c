#include "main.h"

/**
 * _isalpha - return 1 if c is a letter,lowercase or uppercase
 * @c: contains value to be compared
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
