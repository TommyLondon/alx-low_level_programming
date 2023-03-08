#include "main.h"

/**
 *  _puts_recursion - function like puts();
 * @s - string
 * return: Always 0 (success)
 */

void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchr(*s)
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');


}
