NAME = FdF
CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)
LIBFT_DIR = libft
INCLUDE = -I $(LIBFT_DIR)

all: $(NAME)

$(NAME) :
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) $(LIBFT_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
