#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: the string to be passed
 *
 */

void _puts_recursion(char *s)
{

	while (*s != '\0')
		_putchar(*s++);
	_putchar('\n');

}
