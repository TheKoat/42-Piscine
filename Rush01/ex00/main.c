/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 main.c												:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: akok <akok@student.42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2025/04/19 15:03:32 by akok			   #+#	  #+#			  */
/*	 Updated: 2025/04/20 11:20:53 by akok			  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "rush01.h"
#include <stdlib.h>

int	**g_view;
int	g_size = 4;

int	main(int argc, char **argv)
{
	int	**board;

	g_view = alloc_board();
	if (!g_view)
		return (ft_error("Error"));
	board = alloc_board();
	if (!board)
		return (ft_error("Error"));
	init_board(board);
	if (argc <= 1)
		return (ft_error("Error"));
	if (!parse_input(argv[1]))
		return (ft_error("Error"));
	ft_putstr("Trying to solve board...");
	if (!solve(board, 0, 0))
		return (ft_error("Error"));
	print_board(board);
	ft_putstr("Board solved successfully.");
	free_board(g_view);
	free_board(board);
	return (0);
}
