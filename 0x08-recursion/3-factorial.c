#include "main.h"

/*
 *factorial - a function that find the factorial of a number
 *@n: number of factorial
 *Return: Always (success)
 */
int factorial(int n)
{
	//n! = n * (n - 1)!
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n-1));
}
