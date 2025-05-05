/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:28:25 by akok              #+#    #+#             */
/*   Updated: 2025/04/15 08:54:15 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;

	i = 0;
	is_new_word = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(str[i]))
		{
			if (is_new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = (str[i] - 'a') + 'A';
			else if (!is_new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = (str[i] - 'A') + 'a';
			is_new_word = 0;
		}
		else
		{
			is_new_word = 1;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str1[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char	str2[] = "";
	char	str3[] = "HELLO WORLD";
	char	str4[] = "42school is cool";
	char	str5[] = "Hello World";
	char	str6[] = "a";
	char	str7[] = "123 456";


	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
	printf("%s\n", ft_strcapitalize(str5));
	printf("%s\n", ft_strcapitalize(str6));
	printf("%s\n", ft_strcapitalize(str7));
	return (0);
}
*/
