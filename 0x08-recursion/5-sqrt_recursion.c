#include "main.h"


/**
 *_sqrt - Recursively compares given number to the square of various numbers
 *@n: base integer
 *@y: iterator integer
 *Return: y
 */

int _sqrt(int n, int y)
{
	if (n == y * y)
		return (y);
	else if (n >= y * y)
		return (_sqrt(n, ++y));
	else
		return (-1);
}

/**
 *_sqrt_recursion - A function that return natural square root of n
 *@n: base integer
 *Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);
	else
		return (_sqrt(n, 2));
}
