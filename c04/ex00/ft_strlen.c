/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:04:40 by akok              #+#    #+#             */
/*   Updated: 2025/04/17 13:37:17 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello";
	char	str1[] = "";

	printf("Expected output: %ld\n", strlen(str));
	printf("Actual output: %d\n", ft_strlen(str));
	printf("Expected output: %ld\n", strlen(str1));
	printf("Actual output: %d\n", ft_strlen(str1));
	return (0);
}
*/	
