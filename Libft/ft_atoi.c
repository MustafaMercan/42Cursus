/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:09:38 by mmercan           #+#    #+#             */
/*   Updated: 2022/12/21 15:03:46 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int	ft_atoi(const char *nptr)
{
	int	negative;
	int	i;
	int	nbr;

	negative = 1;
	i = 0;
	nbr = 0;
	if (nptr == 0)
		return (0);
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			negative = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	return (nbr * negative);
}
