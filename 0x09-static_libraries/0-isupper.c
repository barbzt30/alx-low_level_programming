#include "main.h"

/**
 * _isupper - Entry point
 * Description: 'checking whether a variable c is uppercase or not'
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
