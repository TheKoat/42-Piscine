/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:49:11 by akok              #+#    #+#             */
/*   Updated: 2025/04/30 11:55:31 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <string.h>
# include <libgen.h>
# include <errno.h>
# include <fcntl.h>

# define BUF_SIZE 1024

void	ft_putchar_err(char c);
void	ft_putstr_err(char *str);
void	ft_handle_err(char *prog, char *filename, char *err_msg);
int		ft_strcmp(char *s1, char *s2);

#endif
