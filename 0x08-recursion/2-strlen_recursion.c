#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 ** _strlen_recursion - Return the length of a string.
 **
 ** @s: string to take its length
 **
 ** Return: Always the length of a string.
 **/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		s++;
		i += _strlen_recursion(s);
	}
	return (i);
}
