#include "main.h"

/**
 * string_toupper - A function that Changes all lowercase letters to uppercase
 *
 * @u: The string will be modified to uppercase
 *
 * Return: char var
 */
char *string_toupper(char *u)
{
int a = 0;
while (u[a])
{
if (u[a] >= 97 && u[a] <= 122)
{
u[a] -= 32;
}
a++;
}
return (u);
}
