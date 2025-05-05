/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:48:01 by akok              #+#    #+#             */
/*   Updated: 2025/05/01 13:59:55 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	main(int argc, char **argv)
{
	t_input_info	input;
	size_t			bytes;
	int				res;

	if (argc < 3)
		return (ft_missing_arg(argv[0]), 1);
	if (!parse_bytes(argv[2], &bytes, argv[0]))
		return (1);
	if (bytes == 0)
		return (0);
	if (argc == 3)
		res = process_fd(0, bytes, argv[0]);
	else
	{
		input.first = 1;
		input.file_count = argc - 3;
		input.mul = (input.file_count > 1);
		res = handle_files(&input, argv, bytes, argv[0]);
	}
	return (res);
}
