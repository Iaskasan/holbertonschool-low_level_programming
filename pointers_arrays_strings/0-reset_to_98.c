#include "main.h"

/**
 * reset_to_98 - Take a pointer to an int and update its value
 *
 * @n: the value to be changed
 */

void reset_to_98(int *n)
{
	int value = 0;
	
	value = *n;
	*n = value;
}
