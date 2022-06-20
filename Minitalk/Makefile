SERVER = serv
CLIENT = clt

SRCS_SERV = Server_src/Server.c Server_src/Serv_utils.c
SRCS_CLIENT = Client_src/Client.c Client_src/Client_utils.c Client_src/Fd_write.c

OBJS_SERV = $(SRCS_SERV:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NORM = norminette
RM = rm -rf

SRCS_DIR = srcs/
OBJS_DIR = Server/objs/

all: cl srv

cl:
	${CC} ${CFLAGS} ${SRCS_CLIENT} -o ${CLIENT}
	@mv ${CLIENT} client
	@echo "______Client créé avec succès_____"

srv:
	${CC} ${CFLAGS} ${SRCS_SERV} -o ${SERVER}
	@mv ${SERVER} server
	@echo "______Server créé avec succès_____"

clean:
	${RM} client server
	@echo "_____Les exécutables ont été supprimés_____"

fclean: clean

re: fclean all

.PHONY : all clean fclean re
