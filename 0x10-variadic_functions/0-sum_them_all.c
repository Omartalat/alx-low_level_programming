#include <stdio.h>
#include <stdarg.h>
/**
 ** sum_them_all - Returns the sum of all its paramters.
 ** @n: The number of paramters passed to the function.
 ** @...: A variable number of paramters to calculate the sum of.
 **
 ** Return: If n == 0 - 0.
 **         Otherwise - the sum of all parameters.
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list parg;
	unsigned int sum = 0, index;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(parg, n);
		for (index = 0; index < n; index++)
		{
			sum += va_arg(parg, int);
		}
		return (sum);
	}
	va_end(parg);
}
