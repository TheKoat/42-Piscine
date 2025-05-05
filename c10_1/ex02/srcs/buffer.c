/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:43:43 by akok              #+#    #+#             */
/*   Updated: 2025/05/01 13:52:23 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	buf_init(struct s_buffer_info *buf, ssize_t bytes_read)
{
	buf->data = (char *)malloc(bytes_read);
	buf->pos = 0;
	buf->tot_read = 0;
}

void	ft_print_buffer(t_buffer_info *buf, size_t bytes)
{
	if (buf->tot_read <= bytes)
		write(1, buf->data, buf->tot_read);
	else
	{
		write(1, buf->data + buf->pos, bytes - buf->pos);
		write(1, buf->data, buf->pos);
	}
}

int	ft_circular_buf(int fd, t_buffer_info *buf, size_t bytes, char *prog)
{
	int				i;
	char			tmp[1024];
	ssize_t			bytes_read;

	bytes_read = read(fd, tmp, 1024);
	while (bytes_read > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
			buf->data [buf->pos] = tmp[i];
			buf->pos = (buf->pos + 1) % bytes;
			buf->tot_read++;
			i++;
		}
		bytes_read = read(fd, tmp, 1024);
	}
	if (bytes_read == -1)
	{
		ft_stdin_err(prog, strerror(errno));
		return (0);
	}
	return (1);
}

int	process_fd(int fd, size_t bytes, char *prog)
{
	t_buffer_info	buf;

	buf_init(&buf, bytes);
	if (!ft_circular_buf(fd, &buf, bytes, prog))
		return (1);
	ft_print_buffer(&buf, bytes);
	free(buf.data);
	return (0);
}
