# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baavril <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 11:45:21 by baavril           #+#    #+#              #
#    Updated: 2018/09/19 08:08:52 by baavril          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	do-op

SRCS	=	main.c\
			do_op.c\
			ft_atoi.c\
			operateur.c

HDRS	=	do_op.h

OBJS	=	$(SRCS:.c=.o)

GCC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -rf

CLEAN	=	clean

all		:
	@make $(NAME)

$(NAME)	:	$(OBJS)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJS) 

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
