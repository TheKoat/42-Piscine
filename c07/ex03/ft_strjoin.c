/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:07:11 by akok              #+#    #+#             */
/*   Updated: 2025/04/23 13:39:38 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int	i;
	int	tot_len;

	i = 0;
	tot_len = 0;
	while (i < size && strs[i])
	{
		tot_len += ft_strlen(strs[i]);
		if (i < size - 1 && strs[i + 1])
			tot_len += ft_strlen(sep);
		i++;
	}
	return (tot_len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *)malloc(ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	return (ft_strcpy(str, src));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;
	char	*res;

	if (size == 0)
		return (ft_strdup(""));
	res = (char *)malloc(ft_strslen(size, strs, sep) + 1);
	if (!res)
		return (NULL);
	ptr = res;
	i = 0;
	while (i < size && strs[i])
	{
		ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		if (i < size - 1 && strs[i + 1])
		{
			ft_strcpy(ptr, sep);
			ptr += ft_strlen(sep);
		}
		i++;
	}
	*ptr = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*test1[] = {"Hello", "world", "!", NULL};
	char	*test2[] = {"Hello", NULL};
	char	*test3[] = {"", "Hello", "", "world", "", NULL};
	char	*test4[] = {"", "", "", NULL};
	char	*test5[] = {"A", "B", "C", NULL};
	char	*test6[] = {"2023", "10", "15", NULL};
	char	*test7[] = {"Ignore", "these", NULL};
	char	*test8[] = {"A", "B", NULL, "C"};
//	char	**test9 = NULL;
//	char	*test10[] = {"A", "B", NULL};
	char	*test11[] = {"A", "B", NULL};
	char	*res11;

	printf("%s\n", ft_strjoin(3, test1, " "));
	printf("%s\n", ft_strjoin(1, test2, "---"));
	printf("%s\n", ft_strjoin(5, test3, "-"));
	printf("%s\n", ft_strjoin(3, test4, "X"));
	printf("%s\n", ft_strjoin(3, test5, ""));
	printf("%s\n", ft_strjoin(3, test6, "/"));
	printf("%s\n", ft_strjoin(0, test7, ""));
	printf("%s\n", ft_strjoin(4, test8, "-"));
//	printf("%s\n", ft_strjoin(3, test9, ","));
//	printf("%s\n", ft_strjoin(2, test10, NULL));
	res11 = ft_strjoin(0, test11, " ");
	printf("Should be the same: %d\n", strcmp(res11, ""));
	free(res11);
	return (0);	
}
*/
