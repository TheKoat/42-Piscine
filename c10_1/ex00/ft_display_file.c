/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:34:12 by akok              #+#    #+#             */
/*   Updated: 2025/04/27 13:12:12 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

int	ft_putstr_err(char *str)
{
	while (*str)
	{
		write(2, &(*str), 1);
		str++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[1024];
	ssize_t	bytes_read;

	if (argc == 1)
		return (ft_putstr_err("File name missing.\n"));
	if (argc > 2)
		return (ft_putstr_err("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_putstr_err("Cannot read file.\n"));
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	if (bytes_read == -1)
	{
		close(fd);
		return (ft_putstr_err("Cannot read file.\n"));
	}
	close(fd);
	return (0);
}
