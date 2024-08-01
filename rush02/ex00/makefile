# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = rush-02

SRC = main.c rush02.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean allma
