/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:10:12 by akok              #+#    #+#             */
/*   Updated: 2025/04/17 13:39:59 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Hello world!";
	char	str1[] = "";

	ft_putstr(str);
	ft_putstr("\n");
	ft_putstr(str1);
	return (0);
}
*/
