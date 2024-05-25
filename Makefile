NAME	= push_swap

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRC		= pointers.c
OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)


re: fclean all


.PHONY: all clean fclean re