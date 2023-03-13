#include "main.h"
/**
 *checker - compares 2 strings
 *@s1: character value
 *@s2: character value
 *Return: 0 or 1
 */

int checker(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (checker(s1 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		if (checker(s1, s2 + 1))
			return (1);
		else if (*s1 != '\0' && checker(s1 + 1, s2))
			return (1);
	}
	else
		return (0);
}

/**
 *wildcmp - compares 2 strings
 *@s1: character value
 *@s2: character value
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	return (checker(s1, s2));
}
