/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:23:49 by akok              #+#    #+#             */
/*   Updated: 2025/04/23 18:05:44 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "ABC";
	char	str2[] = "ABC";
	char	str3[] = "A";
	char	str4[] = "ABZ";
	char	str5[] = "";
	char	str6[] = "123";
	char	str7[] = "\201";
	
	printf("Actual: %d\n", ft_strcmp(str1, str2));
	printf("Expected: %d\n", strcmp(str1, str2));
	printf("Actual: %d\n", ft_strcmp(str1, str3));
	printf("Expected: %d\n", strcmp(str1, str3));
	printf("Actual: %d\n", ft_strcmp(str1, str4));
	printf("Expected: %d\n", strcmp(str1, str4));
	printf("Actual: %d\n", ft_strcmp(str4, str1));
	printf("Expected: %d\n", strcmp(str4, str1));
	printf("Actual: %d\n", ft_strcmp(str1, str5));
	printf("Expected: %d\n", strcmp(str1, str5));
	printf("Actual: %d\n", ft_strcmp(str1, str6));
	printf("Expected: %d\n", strcmp(str1, str6));
	printf("Actual: %d\n", ft_strcmp(str3, str7));
	printf("Expected: %d\n", strcmp(str3, str7));
	return (0);
}
