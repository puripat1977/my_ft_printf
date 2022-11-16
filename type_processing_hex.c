/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_processing_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:48:44 by pratanaa          #+#    #+#             */
/*   Updated: 2022/11/15 12:48:52 by pratanaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	x_type(va_list arguments, int *length, char *str)
{
	unsigned int	nb;

	nb = va_arg(arguments, unsigned int);
	ft_puthex_wl(nb, length, str);
}

void	p_type(va_list arguments, int *length, char *str)
{
	unsigned long	address;

	address = va_arg(arguments, unsigned long);
	ft_putchar_wl('0', length);
	ft_putchar_wl('x', length);
	ft_puthex_wl(address, length, str);
}
