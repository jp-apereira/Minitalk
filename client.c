/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:36:21 by jalves-p          #+#    #+#             */
/*   Updated: 2023/11/15 14:50:40 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_action(int pid, char *str)
{
	int	i;
	int	c;

	i = 0;
	while (*str)
	{
		c = *(str);
		while (i < 8)
		{
			if (c << i & 0b10000000)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i++;
			usleep(1000);
		}
		str++;
		i = 0;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 3)
	{
		ft_printf("Invalid number of arguments.\n");
		ft_printf("Format: [./client <SERVER ID (PID)> <STRING>]\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		while (av[1][i])
		{
			if (!ft_isdigit(av[1][i]))
			{
				return (0);
			}
			i++;
		}
		signal_action(ft_atoi(av[1]), av[2]);
	}
}
