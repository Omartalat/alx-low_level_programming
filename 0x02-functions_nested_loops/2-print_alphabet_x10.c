#include "main.h"

/**
 ** print_alphabet_x10 - Make alphabet x10 times
 **
 ** Description: 'the program's description'
 **
 ** Return: Always 0 (Success)
 **/
void print_alphabet_x10(void)
{
char c = 'a';
while (c <= 'Z')
{
for (int i = 0; i >= 9; i++)
{
_putchar(c);
}
_putchar('\n')
c++;
}

