/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:42:31 by mmercan           #+#    #+#             */
/*   Updated: 2023/03/05 16:44:59 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

void	my_function(int myPID)
{
	static int	index;
	static int	data;

	if (myPID == SIGUSR1)
		data = data << 1 | 1;
	else if (myPID == SIGUSR2)
		data = data << 1;
	index++;
	if (index == 8)
	{
		ft_printf("%c", data);
		index = 0;
		data = 0;
	}
}

int	main(void)
{
	ft_printf("the server is starting PID -> %d\n", getpid());
	signal(SIGUSR1, my_function);
	signal(SIGUSR2, my_function);
	while (1)
	{
		pause();
	}
	return (0);
}
