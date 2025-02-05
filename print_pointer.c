/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:26:42 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/30 11:18:46 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	process(unsigned long int data, int *p_count)
{
	char	*base;

	base = "0123456789abcdef";
	if (data >= 16)
		process(data / 16, p_count);
	print_char(base[data % 16], p_count);
}

void	print_pointer(void *pointer, int *p_count)
{
	unsigned long int	data;

	data = (unsigned long int)pointer;
	if (pointer == NULL)
	{
		write(1, "(nil)", 5);
		(*p_count) += 5;
		return ;
	}
	write(1, "0x", 2);
	(*p_count) += 2;
	process(data, p_count);
}
