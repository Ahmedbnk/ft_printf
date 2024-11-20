/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:52:28 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/20 17:16:30 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	char c;
	int i;
	va_list arg;
	i = 0;
	t_infos *infos;
	p = malloc(sizeof(t_infos));
	if (p != NULL)
		return (-1);
	else
		start_infos(infos);
	while(*str != '\0')
	{
		if (*str == '%')
		{
			check_format(*str);
		}
		str ++;
	}
	

}
