NAME = libft.a

SRC = ./srcs/ft_putchar.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c \
	./srcs/ft_swap.c 

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -I ./includes/*.h
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -f $(NAME)

re: fclean all
