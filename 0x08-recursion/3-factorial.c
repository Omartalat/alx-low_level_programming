#include "main.h"
#include <stdio.h>

/**
 ** factorial -  returns the factorial of a given number.
 ** @n: given number.
 ** Return: If n is lower than 0,
 **         the function should return -1 to indicate an error.
 **/
int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
		return (1);
	else
		return(n * factorial(n - 1));
}
