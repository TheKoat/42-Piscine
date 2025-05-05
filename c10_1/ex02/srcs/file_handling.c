/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:39:42 by akok              #+#    #+#             */
/*   Updated: 2025/05/01 13:59:38 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	get_fd(char *file)
{
	int	fd;

	if (ft_strcmp(file, "-") == 0)
		return (0);
	fd = open(file, O_RDONLY);
	return (fd);
}

int	handle_file(char *file, size_t bytes, char *prog, t_input_info *input)
{
	int	fd;
	int	err;

	fd = get_fd(file);
	if (fd == -1)
	{
		ft_cannot_open(prog, file, strerror(errno));
		return (1);
	}
	if (!input->first)
		write(1, "\n", 1);
	if (input->file_count > 1)
	{
		if (ft_strcmp(file, "-") == 0)
			ft_print_stdin_header();
		else
			ft_print_header(file);
	}
	err = process_fd(fd, bytes, prog);
	if (fd > 0)
		close(fd);
	return (err);
}

int	handle_files(t_input_info *input, char **av, size_t bytes, char *prog)
{
	int	i;
	int	err;

	i = 3;
	err = 0;
	while (av[i])
	{
		err |= handle_file(av[i], bytes, prog, input);
		input->first = 0;
		i++;
	}
	return (err);
}
