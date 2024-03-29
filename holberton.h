#ifndef HOLBERTON_H
#define HOLBERTON_H

#define SIZE 2048

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int (*get_type(char *s))(va_list arguments, char *buffer, int i_b);
int p_char(va_list arguments, char *buffer, int i_b);
int p_string(va_list arguments, char *buffer, int i_b);
int p_int(va_list arguments, char *buffer, int i_b);
int p_binary(va_list arguments, char *buffer, int i_b);
int p_percent(va_list arguments, char *buffer, int i_b);
int p_rot13(va_list arguments, char *buffer, int i_b);
int p_reverse(va_list arguments, char *buffer, int i_b);
int print_number(int n, char *buffer, int i_b);
int p_unumber(va_list arguments, char *buffer, int i_b);
int _strlen(char *string);
int _putchar(char c);
char *print_binary(int n);
int p_hexa(va_list arguments, char *buffer, int i_b);
int p_Hexad(va_list arguments, char *buffer, int i_b);
int p_octal(va_list arguments, char *buffer, int i_b);
int p_point(va_list arguments, char *buffer, int i_b);
int p_Sstring(va_list arguments, char *buffer, int i_b);
int Hexa(char s, char *buffer, int i_b);

/**
 * struct t_input - Struct t_input
 * @letter: The class
 * @f: The function associated
 *
 * Description: This is a longer description
 */
typedef struct t_input
{
	char *letter;
	int (*f)(va_list arguments, char *buffer, int i_b);
} t_i;

#endif
