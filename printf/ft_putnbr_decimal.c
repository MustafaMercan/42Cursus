/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:39:44 by mmercan           #+#    #+#             */
/*   Updated: 2023/01/07 03:09:18 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	numnegative(long int *num, int *count)
{
	if (*num < 0)
	{
		*count = 1;
		*num *= -1;
		write(1, "-", 1);
	}
}

int	ft_putnbr_decimal(long int num, char *base_system)
{
	int	base;
	int	count;
	int	index;
	int	num_tmp[100];

	index = 0;
	count = 0;
	base = ft_strlen(base_system);
	if (num < 0)
		numnegative(&num, &count);
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
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
