/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:22:44 by akok              #+#    #+#             */
/*   Updated: 2025/04/17 13:41:10 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	printf("expected output: %d\n", INT_MIN);
	ft_putnbr(INT_MIN);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
}
*/		
