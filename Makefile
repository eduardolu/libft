NAME		= libft.a
CFLAGS		= gcc -Wall -Wextra -Werror
LIBH 		= libft.h
FILES		= ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c
OBJ 		= $(FILES: .c = .o)


all: $(NAME)
$(NAME): $(OBJ) $(LIBH)
	$(CFLAGS) -c $(FILES) -I $(LIBH)
	ar rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all