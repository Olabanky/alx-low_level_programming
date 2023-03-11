#include "main.h"

/**
 *_print_rev_recursion - A function that prints string in reverse
 *@s: character value
 *if statement: check for the end of string and add a new line
 *else statement: prints each character in reversal
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n')
	else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
