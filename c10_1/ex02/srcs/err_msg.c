/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:09:56 by akok              #+#    #+#             */
/*   Updated: 2025/05/01 13:26:15 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_put_str_err(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	ft_stdin_err(char *prog, char *err_msg)
{
	ft_put_str_err(basename(prog));
	ft_put_str_err(": error reading 'standard input': ");
	ft_put_str_err(err_msg);
	ft_put_str_err("\n");
}

void	ft_missing_arg(char *prog)
{
	ft_put_str_err(basename(prog));
	ft_put_str_err(": option requires an argument -- 'c'\n");
}

void	ft_invalid_number(char *prog, char *input)
{
	ft_put_str_err(basename(prog));
	ft_put_str_err(": invalid number of bytes: ");
	ft_put_str_err("‘");
	ft_put_str_err(input);
	ft_put_str_err("’");
	ft_put_str_err("\n");
}

void	ft_cannot_open(char *prog, char *filename, char *err_msg)
{
	ft_put_str_err(basename(prog));
	ft_put_str_err(": cannot open '");
	ft_put_str_err(filename);
	ft_put_str_err("' for reading: ");
	ft_put_str_err(err_msg);
	ft_put_str_err("\n");
}
