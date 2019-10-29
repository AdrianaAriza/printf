#include "holberton.h"
/**
 * p_hexa - Print hexadecimal
 * @arguments: list of arguments passed to printf
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: Print hexadecimal
 * Return: 0
 */

int p_hexa(va_list arguments, char *buffer, int i_b)
{
	int decimal, remainder, i, j = 0;
	char hexadecimal[100];

	decimal = va_arg(arguments, int);

	while (decimal)
	{
		remainder = decimal % 16;
		if (remainder < 10)
			hexadecimal[j++] = 48 + remainder;
		else
			hexadecimal[j++] = 87 + remainder;
		decimal = decimal / 16;
	}
	for (i = j; i > 0; i--, i_b++)
		buffer[i_b] = hexadecimal[i - 1];
	return (i_b);
}
