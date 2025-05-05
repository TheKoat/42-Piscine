/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:12:32 by akok              #+#    #+#             */
/*   Updated: 2025/04/24 14:37:06 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src);
	dest = (char *)malloc(src_len + 1);
	if (!dest)
		return (NULL);
	return (ft_strcpy(dest, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].str == NULL || tab[i].copy == NULL)
			return (NULL);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	t_stock_str	*tab;

	tab = ft_strs_to_tab(ac, av);
	ft_show_tab(tab);
	free(tab);
	return (0);
}
*/
