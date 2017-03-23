NAME	= .humain

SRC		= src/main.c \
		src/humain.c \
		include/humain.h

OBJ		=

CC		= gcc

RM		= rm -f

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS  += -ansi -pedantic

all:	 $(NAME)

$(NAME): $(OBJ)

clearn:
		 $(RM) $(OBJ)

fclearn: clearn
		 $(RM) $(NAME)

re: 	fclearn all

.PHONY: all clearn fclearn re