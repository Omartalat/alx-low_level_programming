#include <main.h>
int main(void) 
{
char str[] = "_putchar\n";
int i = 0;
while(i != '\0')
{
char c = str[i];
_putchar(c);
i++;
}
return (0);
}
