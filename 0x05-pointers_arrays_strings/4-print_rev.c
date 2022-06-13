#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: - string to be printed
 *
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int index;

	while (s[index++])
		len++;
	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
