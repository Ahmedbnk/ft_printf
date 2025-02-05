/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:26:25 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/30 10:46:36 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa(unsigned int n, char specif, int *p_count)
{
	char	*base;

	if (specif == 'x')
		base = "0123456789abcdef";
	else if (specif == 'X')
		base = "0123456789ABCDEF";
	else
		return ;
	if (n >= 16)
	{
		print_hexa(n / 16, specif, p_count);
	}
	print_char(base[n % 16], p_count);
}
