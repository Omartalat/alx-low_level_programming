#include "main.h"
#include <stdlib>
/**
 **malloc_checked - function that allocates memory using malloc.
 **@b: The number of bytes to be allocated.
 **
 ** Return:  a pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
