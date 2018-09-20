NAME = colle-2

SRCS_PATH = ./srcs/

H_PATH = ./includes/

CC = Clang

WFLAGS = -Wall -Wextra -Werror

CFLAGS = -c $(WFLAGS)

SRC += $(SRCS_PATH)rush03.c
SRC += $(SRCS_PATH)colle-2.c
SRC += $(SRCS_PATH)toolkit.c

OBJ += rush03.o
OBJ += colle-2.o
OBJ += toolkit.o

H += -I $(H_PATH)

all: $(NAME)

$(NAME): 
	@$(CC) $(CFLAGS) $(SRC) $(H)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re 
