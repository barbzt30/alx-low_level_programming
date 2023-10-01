#include "main.h"

/**
 * _puts_recursion - Entry point
 * Description: 'a function that prints a string, followed by a new line'
 * @s: the char string type
 * _putchar - prints the character c to stdout
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

}
