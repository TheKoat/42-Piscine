/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:06:33 by akok              #+#    #+#             */
/*   Updated: 2025/04/18 11:22:17 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Expected: 0, Actual: %d\n", ft_sqrt(0));	
	printf("Expected: 1, Actual: %d\n", ft_sqrt(1));	
	printf("Expected: 0, Actual: %d\n", ft_sqrt(-1));	
	printf("Expected: 0, Actual: %d\n", ft_sqrt(2));	
	printf("Expected: 0, Actual: %d\n", ft_sqrt(8));	
	printf("Expected: 4, Actual: %d\n", ft_sqrt(16));	
	printf("Expected: 46340, Actual: %d\n", ft_sqrt(2147395600));	
	return (0);
}
*/
