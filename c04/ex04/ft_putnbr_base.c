/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 08:37:08 by akok              #+#    #+#             */
/*   Updated: 2025/04/17 13:53:30 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_put_base_char(unsigned int nbr, int base_len, char *base)
{
	char	c;

	c = base[nbr % base_len];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_len;
	unsigned int	un;

	if (!ft_base_valid(base) || ft_base_len(base) < 2)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		un = (unsigned int)(-nbr);
	}
	else
		un = (unsigned int)nbr;
	base_len = ft_base_len(base);
	if (un >= (unsigned int)base_len)
		ft_putnbr_base(un / base_len, base);
	ft_put_base_char(un, base_len, base);
}
/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	ft_putnbr_base(0, "01");
	printf("\n");
	ft_putnbr_base(42, "0123456789");
	printf("\n");
	ft_putnbr_base(-42, "0123456789");
	printf("\n");
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	ft_putnbr_base(5, "0");
	printf("\n");
	ft_putnbr_base(5, "001");
	printf("\n");
	ft_putnbr_base(5, "0123+4");
	printf("\n");
	ft_putnbr_base(5, "01");
	printf("\n");
	ft_putnbr_base(83, "01234567");
	printf("\n");
	ft_putnbr_base(255, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(255, "poneyvif");
	printf("\n");
	ft_putnbr_base(1000000, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(42, "");
	printf("\n");
	return (0);
}
*/
