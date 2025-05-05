/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:39:02 by akok              #+#    #+#             */
/*   Updated: 2025/04/30 14:07:51 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length && tab[i])
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_str_is_A(char *str)
{
	return (ft_strcmp(str, "A") == 0);
}

#include <stdio.h>
int	main(void)
{
	int	(*f)(char *) = ft_str_is_A;
	char *tab[] = {"A", "B", "A", NULL};

	printf("Count: %d\n", ft_count_if(tab, 40, f));
	return(0);
}

