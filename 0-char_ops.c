#include "main.h"
#include <stdio.h>

/**
 * print_c - print char
 * @ar_list: array of characters
 *
 * Return: printed parameters
 */
int print_c(va_list ar_list)
{
	int c = va_arg(ar_list, int);

	return (putchar(c));
}

/**
 * print_s - print string
 * @ar_list: list of characters
 *
 * Return: printed parameters
 */
int print_s(va_list ar_list)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(ar_list, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i];i++)
		count += putchar(str[i]);

	return (count);
}
