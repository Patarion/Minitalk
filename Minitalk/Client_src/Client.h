/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:28:07 by jgagnon           #+#    #+#             */
/*   Updated: 2022/05/31 14:28:39 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include <stdio.h>
# include <signal.h>
# include <unistd.h>
# include <sys/types.h>
# include <stdlib.h>

# define INT_MIN -2147483648

int		ft_strlen(char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nbr, int fd);
int		ft_atoi(char *str);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif
