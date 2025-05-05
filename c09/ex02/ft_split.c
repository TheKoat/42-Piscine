/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:43:01 by akok              #+#    #+#             */
/*   Updated: 2025/04/27 13:00:26 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_check_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	split;

	i = 0;
	while (str[i] && ft_check_is_sep(str[i], charset))
		i++;
	if (!str[i])
		return (0);
	split = 1;
	while (str[i])
	{
		if (ft_check_is_sep(str[i], charset))
		{
			while (ft_check_is_sep(str[i], charset))
				i++;
			if (str[i] != '\0')
				split++;
		}
		i++;
	}
	return (split);
}

char	*ft_alloc_and_copy(char *str, int start, int end)
{
	int		i;
	int		size;
	char	*dest;

	size = end - start;
	dest = (char *)malloc(size + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**arr;

	arr = (char **)malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	k = 0;
	while (str[j])
	{
		while (str[i] && ft_check_is_sep(str[i], charset))
			i++;
		j = i;
		while (str[j] && !ft_check_is_sep(str[j], charset))
			j++;
		if (str[i])
		{
			arr[k++] = ft_alloc_and_copy(str, i, j);
			i = j;
		}
	}
	arr[k] = NULL;
	return (arr);
}
/*
#include <stdio.h>
int main(int ac, char **argv)
{
	char	**arr;

	if (ac <= 1)
		return (0);
	arr = ft_split(argv[1], " ");
	for (int i = 0; arr[i] != NULL; i++)
		printf("arr[%d]: %s\n", i, arr[i]);
	return (0);
}
*/
