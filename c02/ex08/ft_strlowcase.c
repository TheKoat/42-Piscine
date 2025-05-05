/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:33:14 by akok              #+#    #+#             */
/*   Updated: 2025/04/15 08:57:26 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A') + 'a';
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	str2[] = "";
	char	str3[] = "0123@#%";
	char	str4[] = "abcdefghijklmnopqrstuvwxyz";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	printf("%s\n", ft_strlowcase(str4));
	return (0);
}
*/
