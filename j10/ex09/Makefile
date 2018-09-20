# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baavril <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 08:38:43 by baavril           #+#    #+#              #
#    Updated: 2018/09/19 08:50:52 by baavril          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =   do-op

SRCS    =   affichage.c\
			do_op.c\
			operations.c\

HDRS    =   do_op.h

OBJS    =   $(SRCS:.c=.o)

GCC     =   gcc

CFLAGS  =   -Wall -Werror -Wextra

RM      =   rm -rf

CLEAN   =   clean

all     :
	@make $(NAME)

$(NAME) :   $(OBJS)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJS)

clean   :
	$(RM) $(OBJS)

fclean  :   clean
	$(RM) $(NAME)

re      :   fclean all
