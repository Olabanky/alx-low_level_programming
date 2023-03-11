#include "main.h"

/**
 *factorial - A function that find the factorial of a number
 *@n: number of factorial
 *Return: Always (success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
