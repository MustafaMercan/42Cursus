/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:42:25 by mmercan           #+#    #+#             */
/*   Updated: 2023/03/05 16:44:25 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int	iter;
	int	result;

	iter = 0;
	result = 0;
	while ((str[iter] >= '\t' && str[iter] <= '\r') || str[iter] == ' ')
		iter++;
	while (str[iter] >= '0' && str[iter] <= '9' && str[iter] != '\0')
		result = ((str[iter++] - '0') + (result * 10));
	return (result);
}

void	send_data(char chr, int pid)
{
	int	index;

	index = 0;
	while (index < 8)
	{
		if ((chr << index) & 0b10000000)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		index++;
		usleep(400);
	}
}

int	main(int arg, char **args)
{
	int	pid;
	int	index;

	pid = 0;
	index = 0;
	if (arg == 3)
	{
		pid = ft_atoi(args[1]);
		while (args[2][index] != '\0')
		{
			send_data(args[2][index], pid);
			index++;
		}
	}
	else
	{
		ft_printf("Wrong format please enter ./client <PIDNUMBER> <MESSAGE>\n");
	}
}
