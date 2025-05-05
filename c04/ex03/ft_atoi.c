/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:14:54 by akok              #+#    #+#             */
/*   Updated: 2025/04/17 13:43:37 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	count;
	int	number;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	count = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count += 1;
		str++;
	}
	sign = 1;
	if (count % 2 == 1)
		sign = -1;
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (sign * number);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "  \t\n  -42abc123";
	
	printf("Expected: %d\n", -42);
	printf("Actual: %d\n", ft_atoi(str));
}
*/	
