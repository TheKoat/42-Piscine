/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:07:18 by akok              #+#    #+#             */
/*   Updated: 2025/04/29 18:35:12 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putnbr(int nbr)
{
	char	c;
	long	n;

	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + str[i] - '0';
		i++;
	}
	return (sign * number);
}
