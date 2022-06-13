#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: - string to be checked
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int len;

	while (*s++)
		len++;
	return(len);
}
