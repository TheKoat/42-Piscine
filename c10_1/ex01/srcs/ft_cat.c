/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:25:16 by akok              #+#    #+#             */
/*   Updated: 2025/05/01 16:04:11 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	ft_process_input(int fd, char *buf, size_t buf_size)
{
	ssize_t	bytes_read;

	bytes_read = read(fd, buf, buf_size);
	while (bytes_read > 0)
	{
		write(1, buf, bytes_read);
		bytes_read = read(fd, buf, buf_size);
	}
	if (bytes_read == -1)
	{
		ft_putstr_err(strerror(errno));
		ft_putstr_err("\n");
		return (1);
	}
	return (0);
}

int	ft_process_arguments(char *prog, char *filename, char *buf, size_t buf_size)
{
	ssize_t	bytes_read;
	int		fd;

	if (ft_strcmp(filename, "-") == 0)
		return (ft_process_input(0, buf, buf_size));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_handle_err(prog, filename, strerror(errno));
		return (1);
	}
	bytes_read = read(fd, buf, buf_size);
	while (bytes_read > 0)
	{
		write(1, buf, bytes_read);
		bytes_read = read(fd, buf, buf_size);
	}
	if (bytes_read == -1)
	{
		ft_handle_err(prog, filename, strerror(errno));
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		error;
	char	buf[BUF_SIZE];

	error = 0;
	if (argc == 1)
		return (ft_process_input(0, buf, BUF_SIZE));
	else
	{
		i = 1;
		while (i < argc)
		{
			error |= ft_process_arguments(argv[0], argv[i], buf, BUF_SIZE);
			i++;
		}
	}
	return (error);
}
