/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:01:19 by akok              #+#    #+#             */
/*   Updated: 2025/04/30 14:15:38 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	ft_putnbr(int nbr)
{
	char	c;
	
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int		arr[4] = {0, 1, 2, 3};
	void	(*f)(int) = ft_putnbr;
	int		len = 4;

	ft_foreach(arr, len, f);
	return (0);
}
*/
