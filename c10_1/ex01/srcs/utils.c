/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:41:53 by akok              #+#    #+#             */
/*   Updated: 2025/05/01 16:02:01 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <libgen.h>

void	ft_putchar_err(char c)
{
	write(2, &c, 1);
}

void	ft_putstr_err(char *str)
{
	while (*str)
		ft_putchar_err(*str++);
}

void	ft_handle_err(char *prog, char *filename, char *err_msg)
{
	ft_putstr_err(basename(prog));
	ft_putstr_err(": ");
	ft_putstr_err(filename);
	ft_putstr_err(": ");
	ft_putstr_err(err_msg);
	ft_putstr_err("\n");
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
