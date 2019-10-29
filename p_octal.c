#include "holberton.h"
/**
 * p_octal - Print octal
 * @arguments: list of arguments passed to printf
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: Print octal
 * Return: 0
 */

int p_octal(va_list arguments, char *buffer, int i_b)
{
	int decimal, remainder, i, j = 0;
	char octal[100];

	decimal = va_arg(arguments, int);

	while (decimal)
	{
		remainder = decimal % 8;
		if (remainder < 8)
			octal[j++] = 48 + remainder;
		decimal = decimal / 8;
	}
	for (i = j; i > 0; i--, i_b++)
		buffer[i_b] = octal[i - 1];
	return (i_b);
}
