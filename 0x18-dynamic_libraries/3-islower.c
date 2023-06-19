#include "main.h"

/**
 * _islower - Entry point
 *
 * Description : checks for lowercase character.
 *
 * @c: the integer value it receives
 *
 * Return: 1 if true. 0 if false.
 **/

int _islower(int c)
{
int l;
for (l = 'a'; l <= 'z'; l++)
{
if (l == c)
{
return (1);
}
}
return (0);
}
