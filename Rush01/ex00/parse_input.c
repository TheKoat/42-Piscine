/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 parse_input.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: akok <akok@student.42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2025/04/19 15:13:23 by akok			   #+#	  #+#			  */
/*	 Updated: 2025/04/20 10:37:04 by akok			  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */
#include "rush01.h"

int	parse_input(char *str)
{
	int	count;
	int	row;
	int	col;

	count = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '9')
		{
			if (count >= g_size * 4)
				return (0);
			row = count / g_size;
			col = count % g_size;
			g_view[row][col] = *str - '0';
			count++;
		}
		else if (*str != ' ')
			return (0);
		str++;
	}
	return (count == g_size * 4);
}
