/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:39:46 by mmercan           #+#    #+#             */
/*   Updated: 2023/01/07 03:09:53 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int num, char *base_system)
{
	int	base;
	int	count;
	int	index;
	int	num_tmp[100];

	index = 0;
	count = 0;
	base = ft_strlen(base_system);
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
