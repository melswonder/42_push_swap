# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/01 17:12:17 by hirwatan          #+#    #+#              #
#    Updated: 2025/02/02 12:04:30 by hirwatan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = command_list.c error_check.c push_swap_utils.c stack.c main.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAG = -Wall -Wextra -Werror -I .

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	chmod 777 $(NAME)
all: $(NAME)

.c.o:
	$(CC) $(CFLAG) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(NAME)
re: fclean all