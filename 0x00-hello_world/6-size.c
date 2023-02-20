#include <stdio.h>

/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s) \n", (unsigned char) Sizeof(a));
	printf("Size of a int: %lu byte(s) \n", (unsigned int) Sizeof(b));
	printf("Size of a long int: %lu byte(s) \n", (unsigned long) Sizeof(c));
	printf("Size of a long long int: %lu byte(s) \n", (unsigned long) Sizeof(d));
	printf("Size of a fload: %lu byte(s) \n", (unsigned float) Sizeof(f));
	return (0);
}
