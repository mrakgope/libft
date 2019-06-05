# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 11:53:38 by mrakgope          #+#    #+#              #
#    Updated: 2019/06/05 12:06:03 by mrakgope         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./ft_isalpha.c ./ft_strlen.c ./ft_toupper.c ./ft_isascii.c ./ft_strcat.c\
	  ./ft_strncat.c ./ft_atoi.c ./ft_isdigit.c ./ft_strchr.c ./ft_strncpy.c\
	  ./ft_isalnum.c ./ft_isprint.c ./ft_strcpy.c ./ft_tolower.c\

OBJ = $(subst .c,.o,$(SRC))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: clean fclean all re
