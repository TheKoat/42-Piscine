/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:20:25 by akok              #+#    #+#             */
/*   Updated: 2025/04/21 10:54:14 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		return (0);
	i = 1;
	while (argv[i])
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}
