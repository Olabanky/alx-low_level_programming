#include "main.h"


/**
 *_number - checks if input integer is prime number
 *@n: integer
 *@y: integer
 *Return: -
 */
int _number(int n, int y)
{
	if (y == 1 || y == 0)
		return (0);
	else if (n % y == 0)
		return (1);
	else
		return (_number(n, y - 1));
}

/**
 *is_prime_number - checks if input integer is prime number
 *@n: integer
 *Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (!_number(n, n - 1));
}
