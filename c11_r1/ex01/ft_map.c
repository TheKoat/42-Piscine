/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:10:37 by akok              #+#    #+#             */
/*   Updated: 2025/04/30 14:15:56 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*arr;

	arr = (int *)malloc(length * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
/*
int	ft_is_even(int nbr)
{
	return (nbr % 2 == 0);
}

#include <stdio.h>
int	main(void)
{
	int	arr[5] = {0, 1, 2, 3, 4};
	int	*res;
	int	len = 5;
	int	(*f)(int) = ft_is_even;

	res = ft_map(arr, len, f);
	for (int i = 0; i < len; i++)
		printf("%d, ", res[i]);
	printf("\n");
	printf("Expected: 1, 0, 1, 0, 1\n");
	return (0);
}
*/
