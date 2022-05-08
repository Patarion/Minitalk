#ifndef MINITALK_H
# define MINITAL_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>
# include <sys/types.h>
# include <wait.h>
# include <stdlib.h>

# define INT_MIN -2147483648

int     ft_strlen(char *str);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *str, int fd);
void    ft_putnbr_fd(int n, int fd);
int     ft_atoi(char *str);

#endif