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
	var_list parg;
	unsigned int sum = 0, index;

	var_start(parg, n);
	unsigned int value = var_arg(parg, unsigned int);

	for (index = 0; index < n; index++)
	{
		sum += value;
	}
	return (sum);
}
