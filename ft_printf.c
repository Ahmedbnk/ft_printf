/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:13:17 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/30 10:22:13 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	process(char **format, va_list args, int *p_count)
{
	if (**format == '%')
	{
		(*format)++;
		if (**format == '%')
			print_char('%', p_count);
		if (**format == 'c')
			print_char(va_arg(args, int), p_count);
		else if (**format == 's')
			print_string(va_arg(args, char *), p_count);
		else if (**format == 'd' || **format == 'i')
			print_number(va_arg(args, int), p_count);
		else if (**format == 'x' || **format == 'X')
			print_hexa(va_arg(args, unsigned int), **format, p_count);
		else if (**format == 'u')
			print_unsigned(va_arg(args, unsigned int), p_count);
		else if (**format == 'p')
			print_pointer(va_arg(args, void *), p_count);
		(*format)++;
	}
}

int	ft_printf(char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == '\0')
		{
			count = -1;
			format++;
		}
		else if (*format == '%')
			process(&format, args, &count);
		else
		{
			print_char(*format, &count);
			format++;
		}
	}
	va_end(args);
	return (count);
}
