/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:05:13 by pratanaa          #+#    #+#             */
/*   Updated: 2022/11/15 12:39:57 by pratanaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_wl(char str, int *length)
{
	write(1, &str, 1);
	(*length)++;
	return (*length);
}

void	ft_putnbr_wl(int nb, int *length)
{
	if (nb == -2147483648)
	{
		ft_putchar_wl('-', length);
		ft_putchar_wl('2', length);
		ft_putnbr_wl(147483648, length);
	}
	else if (nb < 0)
	{
		ft_putchar_wl('-', length);
		ft_putnbr_wl(-nb, length);
	}
	else if (nb > 9)
	{
		ft_putnbr_wl(nb / 10, length);
		ft_putnbr_wl(nb % 10, length);
	}
	else
		ft_putchar_wl(nb + '0', length);
}

void	ft_putunsigned_wl(unsigned int nb, int *length)
{
	if (nb < 10)
		ft_putchar_wl(nb + '0', length);
	else
	{
		ft_putunsigned_wl(nb / 10, length);
		ft_putunsigned_wl(nb % 10, length);
	}
}

void	ft_puthex_wl(unsigned long long nb, int *length, char *str)
{
	if (nb >= 16)
	{
		ft_puthex_wl(nb / 16, length, str);
		nb = nb % 16;
	}
	if (nb > 9 && nb < 16)
	{
		if (*str == 'x' || *str == 'p')
			ft_putchar_wl(nb % 10 + 97, length);
		else
			ft_putchar_wl(nb % 10 + 65, length);
	}
	else
		ft_putchar_wl(nb + '0', length);
}
