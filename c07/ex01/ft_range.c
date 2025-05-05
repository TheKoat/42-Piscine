/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 08:49:05 by akok              #+#    #+#             */
/*   Updated: 2025/04/23 13:37:05 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*alloc(int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	size = max - min;
	ptr = (int *)malloc(size * sizeof(int));
	if (!ptr)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

int	*ft_range(int min, int max)
{
	if (min >= max)
		return (NULL);
	return (alloc(min, max));
}
/*
#include <stdio.h>

int	main(void)
{
	int	*ptr;
	int	min = 0;
	int	max = 10;

	ptr = ft_range(min, max);
	if (ptr == NULL)
	{
		printf("Error\n");
		return (1);
	}
	for (int i = 0; i < max - min; i++)
	{
		printf("%d ", ptr[i]);
	}
	free(ptr);
	return (0);
}
*/
