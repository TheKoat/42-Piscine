#!/bin/bash
gcc -Wall -Wextra -Werror -c *.c
ar rcs libft.a *.o
