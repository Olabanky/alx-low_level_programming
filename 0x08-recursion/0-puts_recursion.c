#include "main.h"

/**
 *_puts_recursion - A function that prints a string followed by a new line
 *
 * @s: character value
 * if statement: increment the character
 * else: checks for end of string and add a new line
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
