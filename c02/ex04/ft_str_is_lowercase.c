/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:25:31 by akok              #+#    #+#             */
/*   Updated: 2025/04/15 08:51:28 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("hello"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("hEllo"));
	printf("%d\n", ft_str_is_lowercase("he!!o"));
	return (0);
}
*/
