# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akok <akok@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 11:27:35 by akok              #+#    #+#              #
#    Updated: 2025/04/30 11:53:43 by akok             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
INC_DIR = includes
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.c=$(SRC_DIR)/%.o)
NAME = ft_cat

# Targets
all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(SRC_DIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

