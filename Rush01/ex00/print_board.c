/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:14:37 by akok              #+#    #+#             */
/*   Updated: 2025/04/20 13:46:45 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

void	print_board(int **board)
{
	int	row;
	int	col;

	row = 0;
	while (row < g_size)
	{
		col = 0;
		while (col < g_size)
		{
			ft_putnbr(board[row][col]);
			if (col < g_size - 1)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
