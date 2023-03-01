#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: integer to be swap
 * @b: integer to be swap
 */
void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int m;

        m = *a;
	*a = *b;
	*b = m;
}
