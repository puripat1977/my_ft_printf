/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_processing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:35:24 by pratanaa          #+#    #+#             */
/*   Updated: 2022/11/15 12:47:37 by pratanaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	c_type(va_list arguments, int *length)
{
	char c;

	c = va_arg(arguments, int);
	ft_putchar_wl(c, length);
}

void	s_type(va_list arguments, int *length)
{
	char	*s;

	s = va_arg(arguments, char *);
	if (!s)
		s = "(null)";
	while (*s)
	{
		ft_putchar_wl((char)*s, length);
		s++;
	}
}

void	d_i_type(va_list arguments, int *length)
{
	int	nb;

	nb = va_arg(arguments, int);
	ft_putnbr_wl(nb, length);
}

void	u_type(va_list arguments, int *length)
{
	unsigned int	nb;

	nb = va_arg(arguments, unsigned int);
	ft_putunsigned_wl(nb, length);
}
