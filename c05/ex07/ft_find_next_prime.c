/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:38:44 by akok              #+#    #+#             */
/*   Updated: 2025/04/18 11:25:57 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = ft_is_prime(nb);
	while (!prime)
	{
		nb++;
		prime = ft_is_prime(nb);
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Expected: 2, Actual: %d\n", ft_find_next_prime(-7));
	printf("Expected: 2, Actual: %d\n", ft_find_next_prime(0));
	printf("Expected: 2, Actual: %d\n", ft_find_next_prime(1));
	printf("Expected: 2, Actual: %d\n", ft_find_next_prime(2));
	printf("Expected: 5, Actual: %d\n", ft_find_next_prime(4));
	printf("Expected: 5, Actual: %d\n", ft_find_next_prime(5));
	printf("Expected: 7, Actual: %d\n", ft_find_next_prime(6));
	printf("Expected: 7, Actual: %d\n", ft_find_next_prime(7));
	printf("Expected: 11, Actual: %d\n", ft_find_next_prime(8));
	return (0);
}
*/	
