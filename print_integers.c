#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_integers - prints integers
 *
 * @args: arguments
 *
 * Return: number of charactesr to be printed
 */

int print_integers(va_list args)
{
	int x = va_arg(args, int);
	int i = 0;
	int neg = 0;
	unsigned int j;
	int div = 1;

	if (x == 0)
	{
		putchar('0');
		return (1);
	}
	else if (x < 0)
	{
		j = (unsigned int)(-x);
		neg = 1;
	}
	else
		j = (unsigned int)x;

	while (j / div > 9)
	{
		div *= 10;
		++i;
	}
	if (neg)
	{
		putchar('-');
		++i;
	}

	while (div > 0)
	{
		putchar('0' + j / div);
		j %= div;
		div /= 10;
	}
	return (neg + i);

}

/**
  * print_bin - print binary represantation of an unsigned int
  *
  * @bin: binary argumets
  *
  * Return: void
  */

void print_bin(va_list bin)
{
	unsigned int x = va_arg(bin, unsigned int);
	unsigned char *binary;
	int i;

	binary = (unsigned char *)&x;

	for (i = 7; i >= 0; --i)
	{
		putchar(binary([i]);
	}
	return (0);
}
