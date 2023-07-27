#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - prints characters
 * @args: arguments
 *
 * Return: number of characters printed out
 */

int print_char(va_list args)
{
	int c = va_arg(args, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}
