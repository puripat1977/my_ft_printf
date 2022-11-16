/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:48:00 by pratanaa          #+#    #+#             */
/*   Updated: 2022/11/14 20:53:29 by pratanaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		parse_input(const char *str, va_list arguments, int length);
void	parse_conversions(char *str, int *length, va_list arguments);
int		ft_putchar_wl(char str, int *length);
void	ft_putnbr_wl(int nb, int *length);
void	ft_putunsigned_wl(unsigned int nb, int *length);
void	ft_puthex_wl(unsigned long long nb, int *length, char *str);
void	c_type(va_list arguments, int *length);
void	s_type(va_list arguments, int *length);
void	d_i_type(va_list arguments, int *length);
void	u_type(va_list arguments, int *length);
void	x_type(va_list arguments, int *length, char *str);
void	p_type(va_list arguments, int *length, char *str);

#endif
