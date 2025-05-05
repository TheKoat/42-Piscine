/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:15:05 by akok              #+#    #+#             */
/*   Updated: 2025/04/18 11:05:32 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	tot;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	tot = 1;
	while (power)
	{
		tot *= nb;
		power--;
	}
	return (tot);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Expected: 8, Actual: %d\n", ft_iterative_power(2, 3));	
	printf("Expected: -8, Actual: %d\n", ft_iterative_power(-2, 3));	
	printf("Expected: 16, Actual: %d\n", ft_iterative_power(-2, 4));	
	printf("Expected: 1, Actual: %d\n", ft_iterative_power(2, 0));
	printf("Expected: 0, Actual: %d\n", ft_iterative_power(2, -1));
	printf("Expected: 1, Actual: %d\n", ft_iterative_power(0, 0));
	printf("Expected: 100, Actual: %d\n", ft_iterative_power(10, 2));
	return (0);
}
*/
