#include "main.h"

/**
 *_strcmp - Function that compares two strings
 *
 * @s1: The function of strings
 * @s2: The function of strcmp
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
