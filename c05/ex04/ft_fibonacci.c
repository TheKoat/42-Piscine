/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:27:54 by akok              #+#    #+#             */
/*   Updated: 2025/04/18 11:14:10 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Expected: -1, Actual: %d\n", ft_fibonacci(-1));
	printf("Expected: 1, Actual: %d\n", ft_fibonacci(1));
	printf("Expected: 1, Actual: %d\n", ft_fibonacci(2));
	printf("Expected: 0, Actual: %d\n", ft_fibonacci(0));
	printf("Expected: 267914296, Actual: %d\n", ft_fibonacci(42));
	return (0);
}
*/
