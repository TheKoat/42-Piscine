/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezu-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:42:23 by lezu-yan          #+#    #+#             */
/*   Updated: 2025/04/12 20:09:27 by lezu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int width, char start, char middle, char end)
{
	int	i;

	if (width >= 1)
		ft_putchar(start);
	i = 1;
	while (i < width - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	print_line(x, 'A', 'B', 'A');
	i = 1;
	while (i < y - 1)
	{
		print_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
		print_line(x, 'C', 'B', 'C');
}
