/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:26:54 by akok              #+#    #+#             */
/*   Updated: 2025/04/18 11:24:17 by akok             ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	printf("Expected: 0, Actual: %d\n", ft_is_prime(0));		
	printf("Expected: 0, Actual: %d\n", ft_is_prime(-1));		
	printf("Expected: 0, Actual: %d\n", ft_is_prime(1));		
	printf("Expected: 1, Actual: %d\n", ft_is_prime(2));		
	printf("Expected: 1, Actual: %d\n", ft_is_prime(3));		
	printf("Expected: 0, Actual: %d\n", ft_is_prime(4));		
	printf("Expected: 1, Actual: %d\n", ft_is_prime(5));		
	printf("Expected: 0, Actual: %d\n", ft_is_prime(6));		
	printf("Expected: 1, Actual: %d\n", ft_is_prime(7));
	return (0);
}
*/		
