/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:05:31 by akok              #+#    #+#             */
/*   Updated: 2025/04/21 10:46:22 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_print_params(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
	write(1, "\n", 1);
}

void	bubble_sort(char **arr)
{
	int	i;
	int	j;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (arr[i + 1])
		{
			j = i + 1;
			if (ft_strcmp(arr[i], arr[j]) > 0)
			{
				ft_swap(&arr[i], &arr[j]);
				swapped = 1;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*x_print;

	if (argc == 1)
		return (0);
	x_print = argv[0];
	bubble_sort(argv);
	i = 0;
	while (argv[i])
	{
		if (argv[i] != x_print)
			ft_print_params(argv[i]);
		i++;
	}
	return (0);
}
