/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:03:31 by akok              #+#    #+#             */
/*   Updated: 2025/04/30 09:06:53 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	ft_get_func_idx(char *str)
{
	if (ft_strcmp(str, "+") == 0)
		return (0);
	else if (ft_strcmp(str, "-") == 0)
		return (1);
	else if (ft_strcmp(str, "/") == 0)
		return (2);
	else if (ft_strcmp(str, "*") == 0)
		return (3);
	else if (ft_strcmp(str, "%") == 0)
		return (4);
	else
		return (-1);
}

void	ft_func_ptrs(int (*f[5])(int, int))
{
	f[0] = ft_add;
	f[1] = ft_sub;
	f[2] = ft_div;
	f[3] = ft_time;
	f[4] = ft_mod;
}

int	ft_check_cal_valid(int idx, int val)
{
	if (idx == -1)
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return (0);
	}
	if (idx == 2 && val == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (idx == 4 && val == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	idx;
	int	res;
	int	first_val;
	int	second_val;
	int	(*f[5])(int, int);

	if (argc != 4)
		return (0);
	first_val = ft_atoi(argv[1]);
	second_val = ft_atoi(argv[3]);
	ft_func_ptrs(f);
	idx = ft_get_func_idx(argv[2]);
	if (!ft_check_cal_valid(idx, second_val))
		return (0);
	res = f[idx](first_val, second_val);
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
