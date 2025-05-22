NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c \
	utils/push.c \
	utils/swap.c \
	utils/push2.c \
	utils/parse.c \
	utils/check_number.c \
	algorithm/sort.c \
	algorithm/utils_sort.c \
	algorithm/utils_sort2.c \

OBJ = $(SRC:.c=.o)

LIBFT_PATH = libft/
LIBFT = $(LIBFT_PATH)libft.a

INCLUDES = -I./ -I$(LIBFT_PATH)

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_PATH)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_PATH) -lft -o $(NAME)

clean:
	@make clean -C $(LIBFT_PATH)
	rm -f $(OBJ)

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re