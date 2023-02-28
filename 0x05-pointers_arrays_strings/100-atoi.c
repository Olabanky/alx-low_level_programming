#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ola = 0;
	int min = 1;
	int ban = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			ban = 1;
			ola = (ola * 10) + (s[c] - '0');
			c++;
		}

		if (ban == 1)
		{
			break;
		}

		c++;
	}

	ola *= min;
	return (ola);
}
