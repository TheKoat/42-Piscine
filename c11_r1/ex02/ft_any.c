/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:28:29 by akok              #+#    #+#             */
/*   Updated: 2025/04/30 14:07:00 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_arr_is_xempty(char *str)
{
	return (*str != '\0');
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *arr[3] = {"", "", NULL};
	int	(*f)(char *) = ft_arr_is_xempty;

	printf("%d\n", ft_any(arr, f));
	return (0);
}

