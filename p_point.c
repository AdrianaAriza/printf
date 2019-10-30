#include "holberton.h"
/**
 * p_point - Print hexadecimal
 * @arguments: list of arguments passed to printf
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: Print hexadecimal
 * Return: 0
 */

int p_point(va_list arguments, char *buffer, int i_b)
{
	unsigned int decimal, remainder, i, j = 0;
	char hexadecimal[100];
	char *p = "(nil)";

	decimal = va_arg(arguments, unsigned int);
	if (decimal == 0)
	{
		for (; p[j]; j++, i_b++)
			buffer[i_b] = p[j];
		return (i_b);
	}
	while (decimal)
	{
		remainder = decimal % 16;
		if (remainder < 10)
			hexadecimal[j++] = 48 + remainder;
		else
			hexadecimal[j++] = 87 + remainder;
		decimal = decimal / 16;
	}
	buffer[i_b] = 48;
	i_b++;
	buffer[i_b] = 120;
	i_b++;
	for (i = j; i > 0; i--, i_b++)
		buffer[i_b] = hexadecimal[i - 1];
	return (i_b);
}
