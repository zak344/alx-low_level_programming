#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 *
 * swap
 */
void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;
	printf("*a=%d, *b=%d\n", *a, *b);
	swap_int(&*a, &*b);
	printf("*a=%d, *b=%d\n", *a, *b);
}
