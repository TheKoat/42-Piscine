/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:37:32 by akok              #+#    #+#             */
/*   Updated: 2025/05/01 13:55:07 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	parse_bytes(char *arg, size_t *out, char *prog)
{
	*out = ft_get_bytes(arg);
	if (*out == (size_t)-1)
		return (ft_invalid_number(prog, arg), 0);
	return (1);
}

size_t	ft_get_bytes(char *bytes)
{
	int		i;
	size_t	number;

	i = 0;
	number = 0;
	while (bytes[i])
	{
		if (!(bytes[i] >= '0' && bytes[i] <= '9'))
			return ((size_t) - 1);
		number = (number * 10) + bytes[i] - '0';
		i++;
	}
	return (number);
}
