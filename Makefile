# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raph <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 14:03:55 by raph              #+#    #+#              #
#    Updated: 2021/10/26 13:24:59 by raph             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = ./libft/libft.a

SRCS= ft_printf.c \
	  sources/ft_check_format_specifiers.c \
	  sources/ft_parser.c \
	  sources/ft_print_char.c \
	  sources/ft_print_hexa.c \
	  sources/ft_print_int.c \
	  sources/ft_print_pcent.c \
	  sources/ft_print_pointer.c \
	  sources/ft_print_string.c \
	  sources/ft_print_uint.c \
	  sources/ft_str_tolower.c \

CC = gcc

CFLAGS = -Wall -Wextra -Werror 

OBJ = $(SRCS:.c=.o)

INCLUDE = include/ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	cd libft/ && $(MAKE)
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
	cd libft/ && $(MAKE) clean

fclean: clean
	rm -rf $(NAME)
	cd libft/ && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re



