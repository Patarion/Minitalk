/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:48:16 by jgagnon           #+#    #+#             */
/*   Updated: 2022/05/31 14:27:54 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Client.h"

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen((char *)src);
	if (dstsize >= 1)
	{
		while (dstsize > 1 && *src != '\0')
		{
			*dst = *src;
			dstsize--;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	i = ft_strlen((char *)s1) + 1;
	ptr = (char *)malloc(sizeof(*ptr) * i);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, (char *)s1, i);
	return (ptr);
}

int	ft_atoi(char *str)
{
	unsigned long	nbr;
	int				i;
	int				signe;

	if (!str)
		return (-1);
	nbr = 0;
	i = 0;
	signe = 1;
	while ((str[i] >= 0x09 && str[i] <= 0x0d) || str[i] == 0x20)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		nbr = (nbr * 10) + (str[i] - 0x30);
		i++;
	}
	return (nbr * signe);
}
