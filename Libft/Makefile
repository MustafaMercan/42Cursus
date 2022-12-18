# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 18:04:49 by mmercan           #+#    #+#              #
#    Updated: 2022/12/18 18:04:52 by mmercan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(shell find . -name "*.c" ! -name "*_bonus.c")

SRC_BONUS = $(shell find . -name "ft_lst*.c")

OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

REMOVE = rm -f

all: $(NAME)

$(NAME):
	@$(COMPILE) $(SRC)
	@$(LIB) $(OBJ)

bonus:
	@$(COMPILE) $(SRC_BONUS)
	@$(LIB) $(OBJ_BONUS)

clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re