#include "main.h"

/**
 *range - checks for the length of inputted character
 *@s: character value
 *Return: length of characters
 */


int range(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + range(s + 1));
}


/**
 *palindrome_checker - checks for palindrome
 *@s: character value
 *@start: integer
 *@end: integer
 *Return: 1 if palindrome, otherwise 0
 */

int palindrome_checker(char *s, int start, int end)
{
	if (*(s + end) == *(s + start))
		return (palindrome_checker(s, start + 1, end - 1));
	else if (end >= start)
		return (0);
	else
		return (1);
}


/**
 *is_palindrome - checks for palindrome
 *@s: character value
 *Return: 1 if palindrome, otherwise 0
 */


int is_palindrome(char *s)
{
	int length = range(s);

	if (length == 1 || length == 0)
		return (1);
	else
		return (palindrome_checker(s, 0, length - 1));
}
