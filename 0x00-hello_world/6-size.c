#include <stdio.h>

/**
 * main - Entry point
 * program checks the size of various type in the computer
 *
 *return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long L;
	float f;

	printf("Size of a char: %lu\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu\n", (unsigned long)sizeof(L));
	printf("Size of a float: %lu\n", (unsigned long)sizeof(f));

	return (0);
}
