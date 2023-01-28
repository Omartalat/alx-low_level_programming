#include <stdio.h>
/**
 ** before_main -  prints You're beat! and yet, you must allow,\nI
 **		   bore my house upon my back!\n before the main function is executed.
 **
 ** Return: NULL.
 **/
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
