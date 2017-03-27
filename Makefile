NAME		= human

SRC			= src/main.c \
			src/human.c

INCLDIR		= include/

OBJ			= $(SRC:.c=.o)

CC			= cc

RM			= rm -f

CFLAGS		+= -I $(INCLDIR)
CFLAGS		+= -Wextra -Wall -Werror

all:	 	$(NAME)

$(NAME): 	$(OBJ)
			$(CC) -o $@ $^

clean:
		 	$(RM) $(OBJ)

fclean: 	clean
		 	$(RM) $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re