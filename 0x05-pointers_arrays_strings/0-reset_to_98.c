#include "main.h"

/**
 * reset_to_98 - updates the value it points to 98
 * @n: - the variable to be changed
 */

void reset_to_98(int *n)
{
	int m;

	n = &m;

	*n = 98;
}
