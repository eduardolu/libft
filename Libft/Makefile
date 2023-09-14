NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
LIBH=libft.h
FILES=ft_strlen.c ft_strjoin.c
OBJ=$(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBH)
	$(CC) $(CFLAGS) -c $(FILES) $(LIBH)
	ar rcs $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $<
clean:
	rm -rf *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
