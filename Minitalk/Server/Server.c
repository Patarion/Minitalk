#include "Server.h"

void process_sig (int sig, siginfo_t *info, void *manip)
{
  static int            i;
  static pid_t          client_id;
  static unsigned char  data;

  if (!client_id)
    client_id = info->si_pid;
  data |= (sig == SIGUSR2);
  if (++i == 8)
  {
    i = 0;
    if (!data)
    {
      kill(client_id, SIGUSR2);
      client_id = 0;
      return ;
    }
    ft_putchar_fd(data, 1);
    data = 0;
    kill(client_id, SIGUSR1);
  }
  else
    data <<= 1;
}

int main (void)
{
  struct  sigaction sig;

  ft_putstr_fd("PID (Process Identification) du Server : ", 1);
  ft_putnbr_fd(getpid(), 1);
  ft_putchar_fd('\n', 1);
  sig.sa_sigaction = process_sig;
  sig.sa_flags = SA_SIGINFO;
  sigaction(SIGUSR1, &sig, 0);
  sigaction(SIGUSR2, &sig, 0);
  while (1)
    pause();
}
