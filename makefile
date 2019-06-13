# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrakgope <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 11:53:38 by mrakgope          #+#    #+#              #
#    Updated: 2019/06/13 10:44:13 by mrakgope         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./ft_atoi.c ./ft_bzero.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c\
	  ./ft_isdigit.c ./ft_isprint.c ./ft_memccpy.c ./ft_memchr.c ./ft_memcmp.c\
	  ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_strcat.c ./ft_strchr.c\
	  ./ft_strcmp.c ./ft_strcpy.c ./ft_strdup.c ./ft_strlcat.c ./ft_strlen.c\
	  ./ft_strncat.c ./ft_strncmp.c ./ft_strncpy.c ./ft_strnstr.c ./ft_strstr.c\
	  ./ft_tolower.c ./ft_toupper.c\

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
