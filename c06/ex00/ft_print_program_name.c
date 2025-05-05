/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:39:02 by akok              #+#    #+#             */
/*   Updated: 2025/04/21 10:50:35 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_program_name(char	*str)
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
	if (argc < 1)
		return (0);
	ft_print_program_name(argv[0]);
	return (0);
}
