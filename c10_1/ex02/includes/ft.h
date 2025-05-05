/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:02:57 by akok              #+#    #+#             */
/*   Updated: 2025/05/01 13:58:48 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <libgen.h>

typedef struct s_buffer_info
{
	char	*data;
	size_t	pos;
	size_t	tot_read;
}				t_buffer_info;

typedef struct s_input_info
{
	int	first;
	int	file_count;
	int	mul;
}				t_input_info;

void	ft_put_str_err(char *str);
void	ft_missing_arg(char *prog);
void	ft_invalid_number(char *prog, char *input);
void	ft_cannot_open(char *prog, char *filename, char *err_msg);
void	ft_stdin_err(char *prog, char *err_msg);

void	ft_putstr(char *str);
void	ft_print_stdin_header(void);
void	ft_print_header(char *filename);

void	buf_init(struct s_buffer_info *buf, ssize_t bytes_read);
void	ft_print_buffer(t_buffer_info *buf, size_t bytes);
int		ft_circular_buf(int fd, t_buffer_info *buf, size_t bytes, char *prog);
int		process_fd(int fd, size_t bytes, char *prog);

int		get_fd(char *file);
int		handle_file(char *file, size_t bytes, char *prog, t_input_info *input);
int		handle_files(t_input_info *input, char **av, size_t bytes, char *prog);

int		ft_strcmp(char *s1, char *s2);
int		parse_bytes(char *arg, size_t *out, char *prog);
size_t	ft_get_bytes(char *bytes);

#endif
