# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akok <akok@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 09:27:52 by akok              #+#    #+#              #
#    Updated: 2025/04/27 10:05:40 by akok             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_display_file.c
TARGET = ft_display_file
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f *.o

fclean:
	rm -f $(TARGET)

.PHONY: all clean fclean
