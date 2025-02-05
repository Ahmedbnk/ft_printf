/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:27:24 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/29 18:27:26 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_string(char *str, int *p_count)
{
	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		print_char(*str, p_count);
		str++;
	}
}
