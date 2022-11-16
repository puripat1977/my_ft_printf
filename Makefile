# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pratanaa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 11:19:22 by pratanaa          #+#    #+#              #
#    Updated: 2022/11/15 12:29:12 by pratanaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
		utilities.c \
		type_processing.c \
		type_processing_hex.c

OBJS = $(SRCS:.c=.o)


NAME = libftprintf.a
CC = gcc
FLAGS = -c -Wall -Wextra -Werror
AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
