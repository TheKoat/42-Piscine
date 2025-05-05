/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 utils.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: akok <akok@student.42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2025/04/19 15:02:01 by akok			   #+#	  #+#			  */
/*	 Updated: 2025/04/19 15:49:08 by akok			  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */
#include <unistd.h>

#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	init_board(int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_size)
	{
		j = 0;
		while (j < g_size)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	ft_error(char *msg)
{
	ft_putstr(msg);
	return (1);
}
