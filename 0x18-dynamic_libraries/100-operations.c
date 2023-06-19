#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - add values
 * @a: integer
 * @b: integer
 *
 * Return: a + b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - substracte two values
 * @a: integer
 * @b: integer
 *
 * Return: a - b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplate a by b
 * @a: integer
 * @b: integer
 *
 * Return: a * b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide a by b
 * @a: integer
 * @b: integer
 *
 * Return: a / b
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - modulus
 * @a: integer
 * @b: integer
 *
 * Return: a % b
 */

int mod(int a, int b)
{
	return (a % b);
}
