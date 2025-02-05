/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:26:52 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/29 18:26:54 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_unsigned(unsigned int i, int *p_count)
{
	if (i >= 10)
	{
		print_unsigned((i / 10), p_count);
	}
	print_char(i % 10 + '0', p_count);
}
