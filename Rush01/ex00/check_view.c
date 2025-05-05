/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 check_view.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: akok <akok@student.42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2025/04/19 15:00:26 by akok			   #+#	  #+#			  */
/*	 Updated: 2025/04/20 11:39:50 by akok			  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */
#include "rush01.h"
#include <stdlib.h>

int	check_col_up(int **board, int col)
{
	int	i;
	int	res;
	int	*line;

	line = (int *)malloc(g_size * sizeof(int));
	if (!line)
		return (0);
	i = 0;
	while (i < g_size)
	{
		line[i] = board[i][col];
		i++;
	}
	res = (visible_count(line) == g_view[0][col]);
	free(line);
	return (res);
}

int	check_col_down(int **board, int col)
{
	int	i;
	int	res;
	int	*line;

	line = (int *)malloc(g_size * sizeof(int));
	if (!line)
		return (0);
	i = 0;
	while (i < g_size)
	{
		line[i] = board[i][col];
		i++;
	}
	res = (visible_count_rev(line) == g_view[1][col]);
	free(line);
	return (res);
}

int	check_row_left(int **board, int row)
{
	return (visible_count(board[row]) == g_view[2][row]);
}

int	check_row_right(int **board, int row)
{
	return (visible_count_rev(board[row]) == g_view[3][row]);
}

int	check_all_views(int **board)
{
	int	i;

	i = 0;
	while (i < g_size)
	{
		if (!check_row_left(board, i)
			|| !check_row_right(board, i)
			|| !check_col_up(board, i)
			|| !check_col_down(board, i))
			return (0);
		i++;
	}
	return (1);
}
