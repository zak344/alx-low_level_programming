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

	printf("*a=%d, *b=%d", *a, *b);
	swap_int(&*a, &*b);
	printf("*a=%d, *b=%d", *a, *b);
}
