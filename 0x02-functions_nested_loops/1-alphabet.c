#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet
 * Return: void
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
