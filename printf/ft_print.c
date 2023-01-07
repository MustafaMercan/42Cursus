/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:39:53 by mmercan           #+#    #+#             */
/*   Updated: 2023/01/07 03:36:38 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	ft_print(const char operation, va_list arg)
{
	if (operation == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (operation == 'c')
	{
		ft_putchar(va_arg(arg, int));
		return (1);
	}
	else if (operation == 'd' || operation == 'i')
		return (ft_putnbr_decimal(va_arg(arg, int), "0123456789"));
	else if (operation == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else if (operation == 'u')
		return (ft_putnbr_unsigned(va_arg(arg, unsigned), "0123456789"));
	else if (operation == 'x')
		return (ft_puthexa(va_arg(arg, unsigned int), "0123456789abcdef"));
	else if (operation == 'X')
		return (ft_puthexa(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	else if (operation == 'p')
		return (ft_putvoid(va_arg(arg, unsigned long long int),
				"0123456789abcdef"));
	return (0);
}
