/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:42:32 by akok              #+#    #+#             */
/*   Updated: 2025/04/23 13:37:54 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	alloc(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
		return ;
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	alloc(range, min, max);
	if (!*range)
		return (-1);
	return (max - min);
}
/*
#include <stdio.h>

int	main(void)
{
	int	**range;
	int	*ptr = NULL;
	int	min = 5;
	int	max = 10;

	range = &ptr;
	printf("%d\n", ft_ultimate_range(range, min, max));
	for (int i = 0; i < max - min; i++)
	{
		printf("%d ", (*range)[i]);
	}
	return (0);
}
*/
