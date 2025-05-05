/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:20:14 by akok              #+#    #+#             */
/*   Updated: 2025/04/20 13:54:38 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

extern int	**g_view;
extern int	g_size;

int		**alloc_board(void);
void	free_board(int **board);

int		parse_input(char *str);
int		solve(int **board, int row, int col);
int		is_valid(int **board, int row, int col, int num);
int		check_all_views(int **board);

int		check_col_up(int **board, int col);
int		check_col_down(int **board, int col);
int		check_row_left(int **board, int row);
int		check_row_right(int **board, int row);

int		visible_count(int *line);
int		visible_count_rev(int *line);

void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
void	print_board(int **board);
void	init_board(int **board);
int		ft_error(char *msg);

#endif
