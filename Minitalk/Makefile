NAME = Minitalk

FLAGS = -Wall -Wextra -Werror

SRCS_FILES = 	Server.c\
				Client.c\
				Ft_utils.c

OBJS_FILES = $(SRCS_FILES:.c=.o)

NORM = norminette

RM = rm -f

all: $(NAME)

$(NAME) :	$(OBJS_FILES)
			ar rcs $(NAME) $(OBJS_FILES)
			@echo "____Minitalk créé avec succes____"


clean:
	rm -rf $(OBJS_FILES) $(OBJS_BONUS)
	@echo "____Les objects des fonctions sont supprimes____"

fclean: clean
	rm -f $(NAME)
	@echo "____Les textes anciens sont brûlés____"

re: fclean all
