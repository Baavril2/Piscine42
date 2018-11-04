# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baavril <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 19:16:53 by baavril           #+#    #+#              #
#    Updated: 2018/09/18 17:49:05 by baavril          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c \
	./srcs/ft_swap.c \
	./srcs/ft_atoi.c \
	./srcs/ft_strcat.c \
	./srcs/ft_strncat.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strncmp.c \
	./srcs/ft_strcpy.c \
	./srcs/ft_strncpy.c \
	./srcs/ft_strlcpy.c \
	./srcs/ft_strdup.c \
	./srcs/ft_strcat.c \
	./srcs/ft_strlcat.c \
	./srcs/ft_strrchr.c \
	./srcs/ft_strchr.c \
	./srcs/ft_strnew.c \
	./srcs/ft_strdel.c \
	./srcs/ft_strclr.c \
	./srcs/ft_striter.c \
	./srcs/ft_striteri.c \
	./srcs/ft_strmap.c \
	./srcs/ft_strmapi.c \
	./srcs/ft_strequ.c \
	./srcs/ft_strnequ.c \
	./srcs/ft_strsub.c \
	./srcs/ft_strjoin.c \
	./srcs/ft_strtrim.c \
	./srcs/ft_atoi_base.c \
	./srcs/ft_bzero.c \
	./srcs/ft_memcpy.c \
	./srcs/ft_memccpy.c \
	./srcs/ft_memmove.c \
	./srcs/ft_memset.c \
	./srcs/ft_memchr.c \
	./srcs/ft_memcmp.c \
	./srcs/ft_memalloc.c \
	./srcs/ft_memdel.c \
	./srcs/ft_isalnum.c \
	./srcs/ft_isalpha.c \
	./srcs/ft_isascii.c \
	./srcs/ft_isdigit.c \
	./srcs/ft_islower.c \
	./srcs/ft_isupper.c \
	./srcs/ft_isprint.c \
	./srcs/ft_isspace.c \
	./srcs/ft_tolower.c \
	./srcs/ft_toupper.c 

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o ft_atoi.o ft_strcat.o ft_strncat.o ft_strcmp.o ft_strncmp.o ft_strcpy.o ft_strncpy.o ft_strdup.o ft_strcat.o ft_strlcat.o ft_strrchr.o ft_strchr.o ft_bzero.o ft_atoi_base.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memset.o ft_memchr.o ft_memcmp.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_islower.o ft_isprint.o ft_isupper.o ft_tolower.o ft_toupper.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_isspace.o ft_strlcpy.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o

clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o ft_atoi.o ft_strcat.o ft_strncat.o ft_strcmp.o ft_strncmp.o ft_strcpy.o ft_strncpy.o ft_strdup.o ft_strcat.o ft_strlcat.o ft_strrchr.o ft_strchr.o ft_bzero.o ft_atoi_base.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memset.o ft_memchr.o ft_memcmp.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_islower.o ft_isprint.o ft_isupper.o ft_tolower.o ft_toupper.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_isspace.o ft_strlcpy.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o

fclean: clean
	rm -f $(NAME)

re: fclean all
