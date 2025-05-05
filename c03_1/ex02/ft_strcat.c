/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:32:50 by akok              #+#    #+#             */
/*   Updated: 2025/04/16 09:07:37 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "World";
	char	dest[20] = "Hello ";
	char	src1[] = "World";
	char	dest1[20] = "Hello ";

	printf("Expected output: %s\n", strcat(dest, src));
	printf("Actual output: %s\n", ft_strcat(dest1, src1));
	printf("Expected output == Actual output ?: %d\n", strcmp(dest, dest1) == 0);
}
*/	
