/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serv_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:15:37 by jgagnon           #+#    #+#             */
/*   Updated: 2022/05/31 14:17:32 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Server.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = -1;
	while (str && str[++i] != '\0')
		write(fd, &str[i], 1);
}

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nbr * -1;
	}
	if ((nbr / 10) != 0)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}
