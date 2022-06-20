NAME = Server Client

SRCS_SERV = Server_src/Server.c Server_src/Serv_utils.c
SRCS_CLIENT = Client_src/Client.c Client_src/Client_utils.c Client_src/Fd_write.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NORM = norminette
RM = rm -f

all: $(NAME)

Client:
	${CC} ${CFLAGS} ${SRCS_CLIENT} -o client
	@echo "____Client créé avec succès____"

Server:
	${CC} ${CFLAGS} ${SRCS_SERV} -o server
	@echo "______Server créé avec succès_____"

clean:
	${RM} client server
	@echo "_____Les exécutables ont été supprimés_____"

fclean: clean

re: fclean all

.PHONY : all clean fclean re
