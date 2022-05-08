#include "Minitalk.h"

int ft_strlen(char *str)
{
    int i;

    if (!str)
        return (0);
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putstr_fd(char *str, int fd)
{
    int i;

    i = -1;
    while (str && str[++i] != '\0')
        write(fd, &str[i], 1);
}

void    ft_putnbr_fd(int nbr, int fd)
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
        ft_putnbr_fd(nbr/10, fd);
    ft_putchar_fd((nbr % 10) + '0', fd);
}

int ft_atoi(char *str)
{
    unsigned long   nbr;
    int             i;
    int             signe;

    nbr = 0;
    i = 0;
    signe = 1;
    while ((str[i] >= 0x09 && str[i] <= 0x0d) || str[i == 0x20])
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