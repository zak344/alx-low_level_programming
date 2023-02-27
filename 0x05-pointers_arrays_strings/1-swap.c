#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 *
 * swap_int will swap a's value to b and b's value to a
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
