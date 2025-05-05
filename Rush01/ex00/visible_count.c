/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:15:35 by akok              #+#    #+#             */
/*   Updated: 2025/04/20 13:49:15 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

int	visible_count(int *line)
{
	int	i;
	int	count;
	int	max;

	max = 0;
	count = 0;
	i = 0;
	while (i < g_size)
	{
		if (line[i] > max)
		{
			count++;
			max = line[i];
		}
		i++;
	}
	return (count);
}

int	visible_count_rev(int *line)
{
	int	i;
	int	count;
	int	max;

	i = g_size - 1;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (line[i] > max)
		{
			count++;
			max = line[i];
		}
		i--;
	}
	return (count);
}
