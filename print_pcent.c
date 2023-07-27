#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_pcent - print % sign
 *
 * @args: arguments
 *
 * Return: number of characters printed out
 */

int print_pcent(va_list args)
{
	(void)args;
	putchar('%');
	return (1);
}
