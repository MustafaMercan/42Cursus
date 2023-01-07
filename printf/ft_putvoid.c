/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:39:34 by mmercan           #+#    #+#             */
/*   Updated: 2023/01/07 03:32:07 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putvoid(unsigned long long int num, char *base_system)
{
	int	base;
	int	count;
	int	index;
	int	num_tmp[100];

	index = 0;
	count = 2;
	base = ft_strlen(base_system);
	write(1, "0x", 2);
	if (num == 0)
	{
		write(1, "0", 1);
		count++;
		return (count);
	}
	while (num != 0)
	{
		num_tmp[index] = num % base;
		num /= base;
		index++;
		count++;
	}
	while (--index >= 0)
		write(1, &base_system[num_tmp[index]], 1);
	return (count);
}
