#include "main.h"

/**
 *_puts_recursion - A function that prints a string followed by a new line
 *
 * @s: character value
 * if statement: checks for end of string and add a new line
 * else: increment the character value
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
}
