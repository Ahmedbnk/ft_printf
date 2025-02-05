/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:27:16 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/30 11:19:01 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_number(int n, int *p_count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*p_count += 11;
		return ;
	}
	if (n < 0)
	{
		print_char('-', p_count);
		n = n * -1;
	}
	if (n >= 10)
	{
		print_number(n / 10, p_count);
	}
	print_char((n % 10) + '0', p_count);
}
