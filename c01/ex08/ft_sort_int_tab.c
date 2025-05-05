/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:14:22 by akok              #+#    #+#             */
/*   Updated: 2025/04/13 10:41:51 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*lptr;
	int	*rptr;
	int	i;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		lptr = tab;
		rptr = lptr + 1;
		i = 0;
		swapped = 0;
		while (i <= size - 2)
		{
			if (*lptr > *rptr)
			{
				ft_swap(lptr, rptr);
				swapped = 1;
			}
			lptr++;
			rptr++;
			i++;
		}
	}
}
