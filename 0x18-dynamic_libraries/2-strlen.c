#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: - string to be checked
 *
 * Return: the length of @s
 */

int _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}
