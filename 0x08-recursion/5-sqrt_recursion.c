#include "main.h"


/**
 *_sqrt - Recursively compares given number to the square of various numbers
 *@n: integer
 *@y: Integer
 *Return: -
 */

int _sqrt(int n, int y)
{
	if (n == y * y)
		return (y);
	else if (n > y)
		return (_sqrt(n, ++y));
	else
		return (-1);
}

/**
 *_sqrt_recursion - A function that return natural square root
 *@n: integer
 *@y: Integer
 *Return: -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	int _sqrt(int n, int y);
	int y = 1;

	return (_sqrt(n, y));
}
