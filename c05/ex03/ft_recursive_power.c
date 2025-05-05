/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:01:59 by akok              #+#    #+#             */
/*   Updated: 2025/04/18 11:10:00 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Expected: 8, Actual: %d\n", ft_recursive_power(2, 3));
	printf("Expected: 1, Actual: %d\n", ft_recursive_power(2, 0));
	printf("Expected: 0, Actual: %d\n", ft_recursive_power(2, -3));
	printf("Expected: 0, Actual: %d\n", ft_recursive_power(0, 3));
	printf("Expected: 1, Actual: %d\n", ft_recursive_power(0, 0));
	printf("Expected: 4, Actual: %d\n", ft_recursive_power(-2, 2));
	printf("Expected: -8, Actual: %d\n", ft_recursive_power(-2, 3));
	return (0);
}
*/
