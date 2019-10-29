#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - Print %
 * @n: number for convert
  *
 * Description: return a binary
 * Return: 0
 */
char *print_binary(int n)
{
	int c, d, count, flag = 0;
	char *pointer, *cero = "0";

	count = 0;
	if (n == 0)
		return (cero);
	pointer = (char *)malloc(33);
	if (!pointer)
		exit(EXIT_FAILURE);
	for (c = 31; c >= 0; c--)
	{
		d = n >> c;
		if (d & 1)
			*(pointer + count) = 1 + '0';
		else
			*(pointer + count) = 0 + '0';
		count++;
	}
	*(pointer + count) = '\0';
	while (pointer)
	{
		if (*pointer != '0')
			flag = 1;
		if (flag == 1)
			return (pointer);
		pointer++;
	}
	free(pointer);
	return (pointer);
}
