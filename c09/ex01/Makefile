#Directories
SRCS_DIR = srcs
INCLUDES_DIR = includes

# Files
SRCS = \
		srcs/ft_putchar.c \
		srcs/ft_swap.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

#Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Rules
all: libft.a

libft.a: $(OBJS)
	ar rcs $@ $^

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re
