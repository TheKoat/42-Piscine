/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:12:42 by akok              #+#    #+#             */
/*   Updated: 2025/04/29 18:28:22 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_time(int a, int b);
int		ft_mod(int a, int b);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);

void	ft_putnbr(int nbr);

#endif
