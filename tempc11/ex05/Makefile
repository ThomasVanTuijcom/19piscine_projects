# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 10:47:47 by tvan-tui          #+#    #+#              #
#    Updated: 2024/09/24 13:37:58 by tvan-tui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS_DIR = srcs
SRCS = $(SRCS_DIR)/ft_atoi.c	$(SRCS_DIR)/ft_putnbr.c $(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/main.c $(SRCS_DIR)/math.c
OBJECTS = $(SRCS:.c=.o)
INCLUDES = -I includes
NAME = do-op

all: $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(FLAGS) $(INCLUDES) $(OBJECTS) -o $(NAME)

%.o : %.c
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $()

re: clean all
