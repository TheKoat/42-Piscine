/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 09:14:19 by akok              #+#    #+#             */
/*   Updated: 2025/04/12 11:38:07 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 1 || y < 1)
		return ;
	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y && x != 1 && y != 1))
				ft_putchar('/');
			else if ((i == 1 && j == y) || (i == x && j == 1))
				ft_putchar('\\');
			else if ((i > 1 && i < x) && (j > 1 && j < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
