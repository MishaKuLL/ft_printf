# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gglenpoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 14:48:01 by gglenpoi          #+#    #+#              #
#    Updated: 2021/11/23 16:08:34 by gglenpoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = ./libft/libft.a

SRCS= ft_printf.c \
	  sources/ft_check_format.c \
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

OBJ = $(patsubst %.c,%.o,$(SRCS))

INCLUDE = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ) $(if $(findstring all, $(MAKECMDGOALS)), $(OBJ))
	$(MAKE) -C ./libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o : %.c $(INCLUDE)
	gcc $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)
	$(MAKE) clean -C ./libft

fclean: clean
	rm -rf $(NAME)
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re
