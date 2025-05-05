/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_header.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:40:26 by akok              #+#    #+#             */
/*   Updated: 2025/05/01 13:55:35 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_print_stdin_header(void)
{
	ft_putstr("==> standard input <==\n");
}

void	ft_print_header(char *filename)
{
	ft_putstr("==> ");
	ft_putstr(filename);
	ft_putstr(" <==\n");
}
