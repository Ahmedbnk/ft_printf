/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:27:37 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/29 18:27:39 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
//# include <stdio.h>
# include <unistd.h>

void	print_char(char c, int *p_count);
void	print_string(char *str, int *p_count);
void	print_number(int n, int *p_count);
void	print_hexa(unsigned int n, char specif, int *p_count);
void	print_unsigned(unsigned int i, int *p_count);
void	print_pointer(void *pointer, int *p_count);
#endif
