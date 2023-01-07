/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:39:48 by mmercan           #+#    #+#             */
/*   Updated: 2023/01/07 03:07:23 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);

int	ft_print(const char operation, va_list arg);
int	ft_putstr(const char *s);
int	ft_putnbr_decimal(long int num, char *base_system);
int	ft_putnbr_unsigned(unsigned int num, char *base_system);
int	ft_puthexa(unsigned int num, char *base_system);
int	ft_strlen(const char *str);
int	ft_putvoid(unsigned long long int num, char *base_system);

#endif
