/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:39:51 by mmercan           #+#    #+#             */
/*   Updated: 2023/01/07 03:00:41 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_print(str[i], args);
		}
		else if (str[i] != '\0')
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}
