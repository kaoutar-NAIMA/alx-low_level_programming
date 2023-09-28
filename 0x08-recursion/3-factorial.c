#include "main.h"
#include <stdio.h>

/**
 * factorial - return the factorial of a given number
 * @n: int
 * Return: int
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
return (n * factorial(n - 1));
}
