# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 10:47:47 by tvan-tui          #+#    #+#              #
#    Updated: 2024/09/24 13:29:53 by tvan-tui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS_DIR = srcs
SRCS = $(SRCS_DIR)/ft_putchar.c	$(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/ft_strcmp.c $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_swap.c
OBJECTS = $(SRCS:.c=.o)
INCLUDES = -I includes
NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
%.o : %.c
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
