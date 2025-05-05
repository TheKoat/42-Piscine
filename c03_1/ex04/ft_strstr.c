/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:22:18 by akok              #+#    #+#             */
/*   Updated: 2025/04/16 09:22:31 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "Mississipi";
	char	to_find[] = "issip";
	char	*expected = strstr(str, to_find);
	char	*actual = ft_strstr(str, to_find);
	
	printf("Expected: %s\n", expected);
	printf("Actual: %s\n", actual);
	printf("Expected == Actual ?: %d\n", strcmp(expected, actual) == 0);
	return (0);
}
*/
