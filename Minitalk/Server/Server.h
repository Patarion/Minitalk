#ifndef SERVER_H
# define SERVER_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <sys/types.h>

# define INT_MIN -2147483648

void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *str, int fd);
void    ft_putnbr_fd(int nbr, int fd);

#endif
