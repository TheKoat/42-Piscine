/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:37:40 by akok              #+#    #+#             */
/*   Updated: 2025/04/15 08:53:15 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a') + 'A';
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "";
	char	str3[] = "0123@#%";
	char	str4[] = "ABCDE";

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
	return (0);
}
*/
