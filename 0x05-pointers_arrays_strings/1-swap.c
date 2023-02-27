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
	int temp;
	printf("*a=%d, *b=%d\n", *a, *b);
	temp = *a;
	*a = *b;
	*b = temp;
	printf("*a=%d, *b=%d\n", *a, *b);
}
