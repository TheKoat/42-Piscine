/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:50:30 by akok              #+#    #+#             */
/*   Updated: 2025/04/11 12:09:30 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchars(int i, int j)
{
	ft_putchar(i / 10 + '0');
	ft_putchar(i % 10 + '0');
	ft_putchar(' ');
	ft_putchar(j / 10 + '0');
	ft_putchar(j % 10 + '0');
	if (i != 98 || j != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchars(i, j);
			j++;
		}
		i++;
	}
}
