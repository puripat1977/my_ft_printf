/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:03:21 by pratanaa          #+#    #+#             */
/*   Updated: 2022/11/16 17:58:55 by pratanaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_conversions(char *str, int *length, va_list arguments)
{
	if (*str == 'c')
		c_type(arguments, length);
	else if (*str == 's')
		s_type(arguments, length);
	else if (*str == 'd' || *str == 'i')
		d_i_type(arguments, length);
	else if (*str == 'u')
		u_type(arguments, length);
	else if (*str == 'x' || *str == 'X')
		x_type(arguments, length, str);
	else if (*str == 'p')
		p_type(arguments, length, str);
	else
		ft_putchar_wl(*str, length);
}

int	parse_input(const char *str, va_list arguments, int length)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			parse_conversions((char *)str, &length, arguments);
			str++;
		}
		else
		{
			ft_putchar_wl(*str, &length);
			str++;
		}
	}
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int		length;
	va_list	arguments;

	length = 0;
	va_start(arguments, str);
	length = parse_input(str, arguments, length);
	va_end(arguments);
	return (length);
}
