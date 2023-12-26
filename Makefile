# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 20:25:34 by omaali            #+#    #+#              #
#    Updated: 2023/12/26 21:19:16 by omaali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
	  print_char.c \
	  print_str.c \
	  print_int.c \
	  print_unsint.c \
	  print_hex.c \
	  print_void.c 

OBJECTS = $(SRC:.c=.o)

CC = gcc

%.o:%.c		Makefile ft_printf.h
					${CC} ${FLAGS} -I ./ -c $< -o $@

$(NAME) :	$(OBJECTS}
			ar rc ${NAME} ${OBJECTS}

all: $(NAME)

clean:
		rm -rf $(OBJECTS)
fclean: clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
