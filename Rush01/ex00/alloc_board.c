/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:29:26 by akok              #+#    #+#             */
/*   Updated: 2025/04/20 14:12:44 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

#include <stdlib.h>
#include <stddef.h>

int	**alloc_board(void)
{
	int	**board;
	int	i;

	board = (int **)malloc(g_size * sizeof(int *));
	if (!board)
		return (NULL);
	i = 0;
	while (i < g_size)
	{
		board[i] = (int *)malloc(g_size * sizeof(int));
		if (!board[i])
			return (NULL);
		i++;
	}
	return (board);
}

void	free_board(int **board)
{
	int	i;

	i = 0;
	while (i < g_size)
	{
		free(board[i]);
		i++;
	}
	free(board);
}
