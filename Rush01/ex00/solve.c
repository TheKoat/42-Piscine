/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:02:57 by akok              #+#    #+#             */
/*   Updated: 2025/04/20 13:47:28 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_valid(int **board, int row, int col, int num)
{
	int	r;
	int	c;

	if (board[row][col] != 0)
		return (0);
	c = 0;
	while (c < g_size)
	{
		if (board[row][c] == num)
			return (0);
		c++;
	}
	r = 0;
	while (r < g_size)
	{
		if (board[r][col] == num)
			return (0);
		r++;
	}
	return (1);
}

int	solve(int **board, int row, int col)
{
	int	try;

	if (row == g_size)
	{
		if (check_all_views(board))
			return (1);
		return (0);
	}
	if (col == g_size)
		return (solve(board, row + 1, 0));
	try = 1;
	while (try <= g_size)
	{
		if (is_valid(board, row, col, try))
		{
			board[row][col] = try;
			if (solve(board, row, col + 1))
				return (1);
			board[row][col] = 0;
		}
		try++;
	}
	return (0);
}
