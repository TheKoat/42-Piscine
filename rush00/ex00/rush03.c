/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhaw <hkhaw@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 14:29:47 by hkhaw             #+#    #+#             */
/*   Updated: 2025/04/13 14:55:36 by hkhaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	if (x <= 0 || y <= 0)
		return ;
	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == y && c == 1))
				ft_putchar('A');
			else if ((r == 1 && c == x && x != 1 && y != 1)
				|| (c == x && r == y))
				ft_putchar('C');
			else if ((r > 1 && r < y) && (c > 1 && c < x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
