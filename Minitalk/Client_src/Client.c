/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:43:55 by jgagnon           #+#    #+#             */
/*   Updated: 2022/05/29 13:48:07 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Client.h"

void	received(int sig)
{
	static int	count;

	if (sig == SIGUSR1)
		count++;
	else
	{
		ft_putstr_fd("Données reçu : ", 1);
		ft_putnbr_fd(count, 1);
		ft_putchar_fd('\n', 1);
		exit (0);
	}
}

void	kill_link(int pid, char *data)
{
	int		i;
	char	c;

	while (data)
	{
		i = 8;
		c = *data;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(50);
		}
		data++;
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR1);
		usleep(50);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_strlen(argv[2]))
		return (1);
	ft_putstr_fd("Données envoyées : ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putchar_fd('\n', 1);
	signal(SIGUSR1, received);
	signal(SIGUSR2, received);
	kill_link(ft_atoi(ft_strdup(argv[1])), ft_strdup(argv[2]));
	while (1)
		pause ();
	return (0);
}
