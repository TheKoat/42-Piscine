/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:32:53 by akok              #+#    #+#             */
/*   Updated: 2025/04/15 09:04:19 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_printable("HELL\\O"));
	printf("%d\n", ft_str_is_printable("HELLO\n"));
	printf("%d\n", ft_str_is_printable("HE\tLO"));
	printf("%d\n", ft_str_is_printable(""));
	return (0);
}
*/
